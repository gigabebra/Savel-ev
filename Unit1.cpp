//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
void __fastcall TForm2::Button1Click(TObject *Sender)
{
float x, y;
x = StrToFloat(Edit1->Text);
if (x<=0) y = pow(x,2);
else if (x>=2) y = pow(x-2,0.5);
else ShowMessage("x не принадлежит области определения");
Label2->Caption="y="+FloatToStr(y);
}
//---------------------------------------------------------------------------
