#include <vcl.h>
#include "Options.h"
#include "Trainer.h"
#include "AboutAuthor.h"
#include "AboutApp.h"
#include "Stat.h"
#pragma hdrstop
#include "Welcome.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner)
{
        Form1->ModalResult = mrNone;
}
//---------------------------------------------------------------------------
String name;
//---------------------------------------------------------------------------

// опции
void __fastcall TForm1::N7Click(TObject *Sender)
{
        Form3->Show();
}
//---------------------------------------------------------------------------

// приступить
void __fastcall TForm1::N6Click(TObject *Sender)
{
        if (Form1->Edit1->Text != "")
        {
            name = Edit1->Text;
            Form1->ModalResult = mrOk;
            Form2->Show();
        }
        else
        {
                ShowMessage("Ошибка ввода имени!");
        }
}
//---------------------------------------------------------------------------

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
      
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        Edit1->Text = "Имя";        
}
//---------------------------------------------------------------------------

