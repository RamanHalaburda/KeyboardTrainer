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
#define LENGTH_STRING 16
    char pname[LENGTH_STRING]; // ���
    int ptime;
    char pfileName[LENGTH_STRING];
    char plevel[LENGTH_STRING];
    int pcountMistakes;
    
// ���� � ������������
char *fres = {"results.txt"};
//-------------------------------------------------------------------------

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
void writeResult(String _pname, int _ptime, String _plevel, String _pfileName, int _m)
{
        FILE *fr = fopen(fres,"at");
        if(!fr) { perror(fres); ShowMessage("�� ������� �������� ���������!"); }

        fprintf(fr, "%s %d %s %s %d\n", _pname,_ptime, _plevel, _pfileName, _m);

        fclose(fr);
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

// ������� �������� �����
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        Edit1->Text = "���";
        GroupBox4->Visible = true;
        GroupBox5->Visible = false;
        GroupBox4->Top = 0;
        this->Height = GroupBox4->Height + 60;
        Timer1->Enabled = false;
        Label1->Caption = "0";
}
//---------------------------------------------------------------------------

// ������ "����������"
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        Label2->Caption = Edit2->Text;
        GroupBox4->Visible = false;
        GroupBox5->Visible = true;
        GroupBox5->Top = 0;
        this->Height = GroupBox5->Height + 60;
        RichEdit1->Text = "";
        RichEdit2->Text = "";
        Edit1->ReadOnly = true;
        Edit2->ReadOnly = true;
        ComboBox1->Enabled = false;
            
        int randomValue = 1;
        switch(ComboBox1->ItemIndex)
        {
                case 0:
                        srand(time(NULL));
                        randomValue =  1 + rand() % 4;
                        break;
                case 1:
                        srand(time(NULL));
                        randomValue =  5 + rand() % 4;
                        break;
                case 2:
                        srand(time(NULL));
                        randomValue =  9 + rand() % 3;
                        break;
        }
        String path = "texts/" + IntToStr(randomValue) + ".txt";
        strcpy(pfileName, path.c_str());
        ifstream f;
        f.open(path.c_str());
        string line;
        getline (f, line);

        ShowMessage("����� " + path + AnsiString(" ������."));
        RichEdit1->Text = line.c_str();
        RichEdit2->SetFocus();

        // ����� ��������� ������� �������
        Timer1->Enabled = true;
}
//---------------------------------------------------------------------------

// ������� �������
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        int valueTimerNow = Label2->Caption.ToInt();
        valueTimerNow--;
        Label2->Caption = IntToStr(valueTimerNow);
        if(Label2->Caption.ToInt() == 0)
        {
                Label3->Caption = "����� �����������";
                Label2->Visible = false;
                Timer1->Enabled = false;
                        
                strcpy(pname, Edit1->Text.c_str());
                ptime = atoi(Edit2->Text.c_str()) - atoi(Label2->Caption.c_str());
                // person.fileName - ��� ��������
                strcpy(plevel, ComboBox1->Text.c_str());
                pcountMistakes = atoi(Label1->Caption.c_str()) + RichEdit1->Text.Length() - RichEdit2->Text.Length();
                ShowMessage("������� ��������.\n������� ���������: " + IntToStr(ptime) + ".\n������ ��������: " + IntToStr(pcountMistakes));
                writeResult(pname, ptime,  pfileName, plevel, pcountMistakes);
        }
}
//---------------------------------------------------------------------------

// �������� ������ ��� ������ ��������� �������
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
  
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Label3->Caption = "����� �����������";
        Label2->Visible = false;
        Timer1->Enabled = false;

        int t = atoi(Edit2->Text.c_str()) - atoi(Label2->Caption.c_str());
        int m = atoi(Label1->Caption.c_str()) + RichEdit1->Text.Length() - RichEdit2->Text.Length();
        ShowMessage("������� ��������.\n������� ���������: " + IntToStr(t) + ".\n������ ��������: " + IntToStr(m));

        strcpy(pname, Edit1->Text.c_str());
        ptime = atoi(Edit2->Text.c_str()) - atoi(Label2->Caption.c_str());
        // person.fileName - ��� ��������
        strcpy(plevel, ComboBox1->Text.c_str());
        pcountMistakes = atoi(Label1->Caption.c_str()) + RichEdit1->Text.Length() - RichEdit2->Text.Length();
        writeResult(pname, ptime,  pfileName, plevel, pcountMistakes);        
}
//---------------------------------------------------------------------------

