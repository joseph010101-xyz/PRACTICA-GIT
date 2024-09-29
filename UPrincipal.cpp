//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Tarea1.h"
#include "UPrincipal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CNatural *numero;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{  numero=new CNatural();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	numero->SetN(StrToInt(EResultado->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	E_resultado->Text=numero->GetN();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EJERCICIO11Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio1();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EJERCICIO21Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio2();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO31Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio3();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO41Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio4();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO51Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio5();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO61Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio6(StrToInt(DIG1->Text),StrToInt(DIG2->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO71Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio7(StrToInt(DIG1->Text),StrToInt(DIG2->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO81Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio8(StrToInt(DIG1->Text),StrToInt(DIG2->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO91Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio9(StrToInt(DIG1->Text),StrToInt(DIG2->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO101Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio10(StrToInt(DIG1->Text),StrToInt(DIG2->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO111Click(TObject *Sender)
{
    E_resultado->Text=numero->Ejercicio11(StrToInt(DIG1->Text));
}
//---------------------------------------------------------------------------



void __fastcall TForm1::EJERCICIO121Click(TObject *Sender)
{
		E_resultado->Text=numero->Ejercicio12(StrToInt(CAR1->Text),StrToInt(CAR2->Text),StrToInt(CAR3->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO131Click(TObject *Sender)
{
	E_resultado->Text=numero->Ejercicio13(StrToInt(CAR1->Text),StrToInt(CAR2->Text),StrToInt(CAR3->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EJERCICIO141Click(TObject *Sender)
{
    E_resultado->Text=numero->Ejercicio14(StrToInt(CAR1->Text),StrToInt(CAR2->Text),StrToInt(CAR3->Text),StrToInt(CAR4->Text),StrToInt(CAR5->Text));
}
//---------------------------------------------------------------------------

