//---------------------------------------------------------------------------
#include <Math.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
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
float a, b, h, x, y, t;
if (TryStrToFloat(Edit1->Text, a))
{
 if (TryStrToFloat(Edit2->Text, b))
 {
  if (TryStrToFloat(Edit3->Text, h))
  {
   Label4->Caption='\0';
   a=StrToFloat(Edit1->Text);
   b=StrToFloat(Edit2->Text);
   h=StrToFloat(Edit3->Text);
   t=a;
   while (t<=b+h/2)
   {
   y=t*sin(t)+cos(t);
   x=sin(t)-cos(t);
   Label4->Caption=Label4->Caption +
   +"x="+FloatToStr(x) + '\t' + "y="+FloatToStr(y)+ '\n';
   t=t+h;
   }
  }
  else ShowMessage("ошибка синтаксиса шага приращения аргумента");
 }
 else ShowMessage("ошибка синтаксиса правой границы диапазона");
}
else ShowMessage("ошибка синтаксиса левой границы диапазона");
}

//---------------------------------------------------------------------------
