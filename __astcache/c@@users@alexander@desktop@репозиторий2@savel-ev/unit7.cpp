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
	 poll++;
	 }
 }
 return poll;
 }
double otr1(double x[], int n)
{
int otrr = 0;
int i;
for (i=0; i<=n-1; i++)
 {
 if((int)x[i]<0)
	 {
	 otrr++;
	 }
 }
 return otrr;
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
	x[i]=StrToFloat(Memo1->Lines->Strings[i]);
   }
   else ShowMessage("ошибка синтаксиса 1");
 }
for (i=0; i<=ny-1; i++)
 {
  if (TryStrToFloat(Memo2->Lines->Strings[i], x[nx+i]))
   {
	x[nx+i]=StrToFloat(Memo2->Lines->Strings[i]);
   }
   else ShowMessage("ошибка синтаксиса 2");
 }
pol =  pol1(x,nx+ny);
otr = otr1(x,nx+ny);
Label5->Caption=IntToStr(pol);
Label6->Caption=IntToStr(otr);
// i=0;
// while (i<=nx+ny-1)
// {
// Label7->Caption=Label7->Caption + FloatToStr(x[i]) + ' ';
// i=i+1;
// }
}

//---------------------------------------------------------------------------
