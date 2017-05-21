#include <vcl.h>
#pragma hdrstop
#include "Options.h"
#include "Welcome.h"
#include "Trainer.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
__fastcall TForm3::TForm3(TComponent* Owner) : TForm(Owner)
{
        //Form3->ModalResult = mrNone;
        Form3->ModalResult = mrOk;
}
//---------------------------------------------------------------------------
int selectedIndex;
int timer;
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
        Edit1->Text = "60";
        ComboBox1->ItemIndex = 0;
}
//---------------------------------------------------------------------------

// применить изменения настроек
void __fastcall TForm3::Button1Click(TObject *Sender)
{
        if (Form3->Edit1 != "")
        {
            selectedIndex = ComboBox1->ItemIndex;
            timer = Edit1->Text.ToInt();
            Form3->ModalResult = mrOk;
            Form1->Show();
            Form3->Close();
        }
        else
        {
                ShowMessage("Ошибка ввода времени!");
        }


}
//---------------------------------------------------------------------------

