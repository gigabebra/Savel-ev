//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
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
double pol1(double x[], int n)
{
int poll = 0;
int i;
for (i=0; i<=n-1; i++)
 {
 if((int)x[i]>0)
	 {
	 poll = poll++;
	 }
 }
 return poll;
 }
double otr1(double x[], int n)
{
int otr = 0;
int i;
for (i=0; i<=n-1; i++)
 {
 if((int)x<0)
	 {
	 otr++;
	 }
 }
 return otr;
 }

void __fastcall TForm2::Button1Click(TObject *Sender)
{
double * x;
int pol, n, nx, ny, i,summ,otr;
nx=Memo1->Lines->Count;
ny = Memo2->Lines->Count;
x=new double[nx+ny];
for (i=0; i<=nx-1; i++)
 {
  if (TryStrToFloat(Memo1->Lines->Strings[i], x[i]))
   {
	x[i]=StrToInt(Memo1->Lines->Strings[i]);
   }
   else ShowMessage("ошибка синтаксиса 1");
 }
for (i=0; i<=ny-1; i++)
 {
  if (TryStrToFloat(Memo2->Lines->Strings[i], x[nx+i]))
   {
	x[nx+i]=StrToInt(Memo2->Lines->Strings[i]);
   }
   else ShowMessage("ошибка синтаксиса 2");
 }
pol =  pol1(x,nx+ny);
otr = otr1(x,nx+ny);
Label5->Caption=IntToStr(pol);
Label6->Caption=FloatToStr(otr);
}

//---------------------------------------------------------------------------
