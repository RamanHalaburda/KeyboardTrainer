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
__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner) { }
//---------------------------------------------------------------------------

// �����
void __fastcall TForm1::N7Click(TObject *Sender)
{
        Form3->Show();
}
//---------------------------------------------------------------------------

// ����������
void __fastcall TForm1::N6Click(TObject *Sender)
{
        Form2->Show();
}
//---------------------------------------------------------------------------

// ����������
void __fastcall TForm1::N2Click(TObject *Sender)
{
        Form6->Show();
}
//---------------------------------------------------------------------------

// �� ������
void __fastcall TForm1::N4Click(TObject *Sender)
{
        Form4->Show();
}
//---------------------------------------------------------------------------
    
// � ���������
void __fastcall TForm1::N5Click(TObject *Sender)
{
        Form5->Show();
}
//---------------------------------------------------------------------------

// �����
void __fastcall TForm1::N8Click(TObject *Sender)
{
        Application->Terminate();
}
//---------------------------------------------------------------------------

