#include <vcl.h>
#include <stdio.h>
#include <fstream.h>
#include <stdlib.h>
#include "Options.h"
#include "Trainer.h"
#include "AboutAuthor.h"
#include "AboutApp.h"
#include "Stat.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#pragma hdrstop
#include "Welcome.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner){ }  
//-------------------------------------------------------------------------
struct Person
{
    String name; // имя
    int time;                   // затраченное время
    String fileName;
    String level;
    int countMistakes;
} person;

// файл с результатами
String fres = "results.txt";
//-------------------------------------------------------------------------

// статистика
void __fastcall TForm1::N2Click(TObject *Sender)
{
        Form6->Show();
}
//---------------------------------------------------------------------------

// об авторе
void __fastcall TForm1::N4Click(TObject *Sender)
{
        Form4->Show();
}
//---------------------------------------------------------------------------
void writeResult(Person _p)
{
        FILE *fr = fopen(fres.c_str(),"at");
        if(!fr) { perror(fres.c_str()); ShowMessage("Не удалось записать результат!"); }

        fwrite(&_p, sizeof(Person), 1, fr);
        fprintf(fr,"\n");

        fclose(fr);
}
//---------------------------------------------------------------------------
    
// о программе
void __fastcall TForm1::N5Click(TObject *Sender)
{
        Form5->Show();
}
//---------------------------------------------------------------------------

// выход
void __fastcall TForm1::N8Click(TObject *Sender)
{
        Application->Terminate();
}
//---------------------------------------------------------------------------

// событие открытия формы
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        Edit1->Text = "Имя";
        GroupBox4->Visible = true;
        GroupBox5->Visible = false;
        GroupBox4->Top = 0;
        this->Height = GroupBox4->Height + 60;
        Timer1->Enabled = false;
}
//---------------------------------------------------------------------------

// кнопка "Приступить"
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        Label2->Caption = Edit2->Text;
        GroupBox4->Visible = false;
        GroupBox5->Visible = true;
        GroupBox5->Top = 0;
        this->Height = GroupBox5->Height + 60;
        RichEdit1->Text = "";
        RichEdit2->Text = "";


        int randomValue =  1 + rand() % 10;
        String path = "texts/" + IntToStr(randomValue) + ".txt";
        person.fileName = path;
        ifstream f;
        f.open(path.c_str());
        string line;
        getline (f, line);

        ShowMessage("Текст " + path + AnsiString(" открыт."));
        RichEdit1->Text = line.c_str();
        RichEdit2->SetFocus();

        // старт обратного отсчёта времени
        Timer1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        int valueTimerNow = Label2->Caption.ToInt();
        valueTimerNow--;
        Label2->Caption = IntToStr(valueTimerNow);
        if(Label2->Caption.ToInt() == 0)
        {
                Label3->Caption = "Время закончилось";
                Label2->Visible = false;
                Timer1->Enabled = false;

                ShowMessage("final");

                person.name = Edit1->Text.c_str();
                person.time = atoi(Edit2->Text.c_str()) - atoi(Label2->Caption.c_str());
                // person.fileName - уже записано
                person.level = ComboBox1->SelText;
                person.countMistakes = atoi(Label1->Caption.c_str() + atoi(RichEdit1->Text.Length()) - atoi(RichEdit2->Text.Length());
                writeResult(person);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RichEdit2KeyPress(TObject *Sender, char &Key)
{
        char* originalText = new char[RichEdit1->Text.Length() + 1];
        strcpy(originalText, RichEdit1->Text.c_str());
        char* customText = new char[RichEdit1->Text.Length() + 1];
        strcpy(customText, RichEdit2->Text.c_str()); 

        int mistake = 0;
        for(int i = 0; i < RichEdit2->Text.Length(); ++ i)
        {
                if(originalText[i] != customText[i])
                {
                        mistake++;
                } 
        }
        Label1->Caption = IntToStr(mistake);
}
//---------------------------------------------------------------------------


