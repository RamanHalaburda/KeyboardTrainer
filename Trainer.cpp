#include <vcl.h>
#include "Welcome.h"
#pragma hdrstop      
#include "Trainer.h"
#include "Options.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner){ }
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
        // дизайн
        Memo1->Visible = false;
        Memo2->Visible = false;

        // получения имени с формы приветствия
        Form1->ShowModal();
        if( Form1->ModalResult == mrOk )
        {
                this->Label1->Caption = "Привет, " + name;
        }
        else
        {
                this->Label1->Caption = "";
        }

        // получение параметров с формы опций
        Form3->ShowModal();
        if( Form3->ModalResult == mrOk )
        {
                this->Label1->Caption = "Привет, " + name;
        }
        else
        {
                this->Label1->Caption = "";
        }


}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
        // работа с таймером

        //дизайн
        Memo1->Visible = true;
        Memo2->Visible = true;        
}
//---------------------------------------------------------------------------

