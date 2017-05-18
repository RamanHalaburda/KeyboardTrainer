#include <vcl.h>
#pragma hdrstop
#include "Options.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
__fastcall TForm3::TForm3(TComponent* Owner) : TForm(Owner) { }
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
        int selectedIndex = ComboBox1->ItemIndex;
        int time = Edit1->Text.ToInt(); 
}
//---------------------------------------------------------------------------

