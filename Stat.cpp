#include <vcl.h>
#pragma hdrstop
#include "Stat.h"
#include <stdlib.h>
#include <fstream.h>
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
__fastcall TForm6::TForm6(TComponent* Owner) : TForm(Owner){ }
//---------------------------------------------------------------------------

char *fresult = {"results.txt"};
#define LENGTH_STRING 16

void __fastcall TForm6::FormShow(TObject *Sender)
{
        StringGrid1->ColCount = 5;
        StringGrid1->RowCount = 2;
        StringGrid1->FixedCols = 0;
        StringGrid1->FixedRows = 1;
        StringGrid1->Cells[0][0] = "Имя";
        StringGrid1->Cells[1][0] = "Время";
        StringGrid1->Cells[2][0] = "Задание";
        StringGrid1->Cells[3][0] = "Сложность";
        StringGrid1->Cells[4][0] = "Количесто ошибок";
        StringGrid1->ColWidths[0] = 120;
        StringGrid1->ColWidths[1] = 120;
        StringGrid1->ColWidths[2] = 120;
        StringGrid1->ColWidths[3] = 120;
        StringGrid1->ColWidths[4] = 120;

        StringGrid1->Options = StringGrid1->Options << goEditing;
        FILE *fr = fopen(fresult, "rt");
        if(!fr) {perror(fresult); exit(1);}

        int count = 1;
        while(!feof(fr))
        {       
                StringGrid1->RowCount++;

                char ppname[LENGTH_STRING]; // имя
                int pptime;
                char ppfileName[LENGTH_STRING];
                char pplevel[LENGTH_STRING];
                int ppm;

                fscanf(fr, "%s %d %s %s %d\n", ppname,&pptime, pplevel, ppfileName, &ppm);

                StringGrid1->Cells[0][count] = ppname;
                StringGrid1->Cells[1][count] = pptime;
                StringGrid1->Cells[2][count] = ppfileName;
                StringGrid1->Cells[3][count] = pplevel;
                StringGrid1->Cells[4][count] = ppm;

                ++count;
        }

        fclose(fr);
        StringGrid1->Options = StringGrid1->Options >> goEditing;
}
//---------------------------------------------------------------------------

