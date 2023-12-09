//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
short int n; float st;
 n=ListBox1->ItemIndex;
 switch (n)
 {
 case 0: st=300; break;
 case 1: st=300; break;
 case 2: st=200; break;
 case 3: st=200; break;
 case 4: st=100; break;
 case 5: st=100; break;
 default:st=0; ShowMessage("город не выбран!");
 }
 if (RadioButton1->Checked) st=st*1.25;
 else if (RadioButton2->Checked) st=st*0.75;
 if (CheckBox1->Checked) st=2*st;
 Label1->Caption="в кассу "+FloatToStr(st)+ " руб";
}
//---------------------------------------------------------------------------
