//---------------------------------------------------------------------------

#ifndef UPrincipalH
#define UPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TEdit *EResultado;
	TLabel *Label1;
	TEdit *E_resultado;
	TLabel *Label2;
	TMainMenu *MainMenu1;
	TMenuItem *FUNCIONES1;
	TMenuItem *PROCEDIMIENTOS1;
	TMenuItem *EJERCICIO11;
	TMenuItem *EJERCICIO21;
	TMenuItem *EJERCICIO31;
	TMenuItem *EJERCICIO41;
	TMenuItem *EJERCICIO51;
	TMenuItem *EJERCICIO61;
	TEdit *DIG2;
	TEdit *DIG1;
	TMenuItem *EJERCICIO71;
	TLabel *Label3;
	TLabel *Label4;
	TMenuItem *EJERCICIO81;
	TMenuItem *EJERCICIO91;
	TMenuItem *EJERCICIO101;
	TMenuItem *EJERCICIO111;
	TEdit *CAR1;
	TEdit *CAR2;
	TEdit *CAR3;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TMenuItem *EJERCICIO121;
	TMenuItem *EJERCICIO131;
	TEdit *CAR4;
	TEdit *CAR5;
	TLabel *Label8;
	TLabel *Label9;
	TMenuItem *EJERCICIO141;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall EJERCICIO11Click(TObject *Sender);
	void __fastcall EJERCICIO21Click(TObject *Sender);
	void __fastcall EJERCICIO31Click(TObject *Sender);
	void __fastcall EJERCICIO41Click(TObject *Sender);
	void __fastcall EJERCICIO51Click(TObject *Sender);
	void __fastcall EJERCICIO61Click(TObject *Sender);
	void __fastcall EJERCICIO71Click(TObject *Sender);
	void __fastcall EJERCICIO81Click(TObject *Sender);
	void __fastcall EJERCICIO91Click(TObject *Sender);
	void __fastcall EJERCICIO101Click(TObject *Sender);
	void __fastcall EJERCICIO111Click(TObject *Sender);
	void __fastcall EJERCICIO121Click(TObject *Sender);
	void __fastcall EJERCICIO131Click(TObject *Sender);
	void __fastcall EJERCICIO141Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
