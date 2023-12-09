//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
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
void __fastcall TForm2::Button1Click(TObject *Sender)
{
float x, y; bool a, b;
  if (TryStrToFloat(Edit1->Text, x))
  {
   if (TryStrToFloat(Edit2->Text, y))
   {
x=StrToFloat(Edit1->Text);
 y=StrToFloat(Edit2->Text);
 a=(y<=x+3)&&(y>=0)&&(x<=0)&&(x>=-3);
 b=(y>=0)&&(y<=3-x)&&(x>=0)&&(x<=3);
 if (a||b) Label3->Caption="Точка принадлежит области";
 else Label3->Caption="Точка не принадлежит области";
   }
  else ShowMessage("ошибка синтаксиса y");
 }
 else ShowMessage("ошибка синтаксиса х");
}

//---------------------------------------------------------------------------
