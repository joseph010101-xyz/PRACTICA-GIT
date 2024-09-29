//---------------------------------------------------------------------------

#pragma hdrstop
#include "VCL.h"
#include "Tarea1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
CNatural::CNatural(){
	n=0;
}
void CNatural::SetN(int _n){
	n=_n;
}
int CNatural::GetN(){
	return n;
}
String CNatural::Ejercicio1(){
	String s=0;
	for (int i=1; i <=n; i++) {
		if (i<=n) {
			s+=",";
		}
		s+=i;
	}
	return s;
}
String CNatural::Ejercicio2(){
	String s=0;
	if (n>=0) {

		for (int i=1; i <=n; i++) {
			if (i<=n) {
				s+=",";
			}
			s+=i;
		}
	}else{
		ShowMessage("el numero ingresado no es numero natural");
	}
	return s;
}
int CNatural::Ejercicio3(){
	int x=0;
	for (int i=0; i <= n; i++) {
		 x=x+i;
	}
	return x;
}
String CNatural::Ejercicio4(){
	char alfabeto[]="abcdefghijklmnopqrstuwxyz";
	String acumulador;
		if (n>=0 and n<=25) {
			for (int i = 0; i <= n; i++) {
				acumulador += alfabeto[i];
				if (i < n) {
					acumulador += ", ";
				}
			}
		}
return acumulador;
}
String CNatural::Ejercicio5(){
   String x;
   int c=0;int z=1;
   int i=0;int s=0;
   if ( n%2 ==0){
	  while (i<n){
		x+=",";
		x+=c;
		c=c+2;
		i++;
	  }
   }else{
	  while(i<n ){
		x+=",";
		x+=z;
		z=z+2;
		i++;
	  }
   }
   return x;
}
int CNatural::Ejercicio6(int dig1, int dig2){
	int acumulador = dig2;
	for (int i = 1; i < dig1; i++) {
		dig2 = dig2 + acumulador;
	}
		return dig2;
}
int CNatural::Ejercicio7(int dig1,int dig2){
	int x=0;
	int y=dig2;
	for (int i=0; i <=y; i++) {
		if (dig1<=dig2) {
			dig2=dig2-dig1;
			x++;
		}
	}
	return x;
}
int CNatural::Ejercicio8(int dig1,int dig2){
	int resultado=0;
	int positivoN= dig1<0? -dig1:dig1;
	int positivoM= dig2<0? -dig2:dig2;
	for (int i= 0; i < positivoM; i++){
		resultado+=positivoN;
	}
	if ((dig1<0 && dig2>=0) || (dig1>=0 && dig2 <0)){
		resultado=-resultado;
	}
	return resultado;
}
String CNatural::Ejercicio9(int dig1, int dig2){
	if (dig1==0 || dig2==0) {

		return "error en la division" ;
	}
	int cociente=0;
	int positivoN=dig1<0? -dig1:dig1;
	int positivoM=dig2<0? -dig2:dig2;
	while (positivoN >= positivoM) {
		positivoN -= positivoM;
		cociente++;
	}
	if ((dig1 < 0 && dig2 >= 0) || (dig1 >= 0 && dig2 < 0)) {
		cociente=-cociente;
	}
	return cociente;
}
int CNatural::Ejercicio10(int dig1,int dig2){
	int resultado = 1;
	for (int i = 0; i < dig2; ++i) {
		resultado *= dig1;
	}
	return resultado;
}
int CNatural::Ejercicio11(int dig1){
	int resultado=0;
	for (int i=0; i < dig1; i++) {
		resultado+=n;
	}
	return resultado;
}
int CNatural::Ejercicio12(int car1,int car2,int car3){
	int x=1;int a=car1;int b=car2;int c=car3;
	int y=0; int resultado=0;
	if (a==car1) {
	   car1*=x;
	   x=x*10;
	   if (b==car2) {
			car2=car1*x +car2;
			if (c==car3) {
				car3=car2*x +car3;
				resultado= car3;
			}
	   }
	}
	return resultado;
}
int CNatural::Ejercicio13(int car1, int car2, int car3){
		int x=1;
		int Union=0;
		bool verificaNegativo = false;
		int cambiarNum[3] = {car3, car2, car1};
			for(int i = 0; i < 3; i++){
				if(cambiarNum[i]<0){
				   verificaNegativo=true;
				   cambiarNum[i] = cambiarNum[i] * -1;
				}
				Union += cambiarNum[i] * x;
				x= x * 10;
			}
			if (verificaNegativo) {
				Union= Union * -1;
			}
		return Union;
}
int CNatural::Ejercicio14(int car1, int car2, int car3,int car4,int car5){
		int x=1;
		int Union=0;
		bool verificaNegativo = false;
		int cambiarNum[5] = {car5, car4, car3, car2, car1};
			for(int i = 0; i < 5; i++){
				if(cambiarNum[i]<0){
				   verificaNegativo=true;
				   cambiarNum[i] = cambiarNum[i] * -1;
				}
				Union += cambiarNum[i] * x;
				x= x * 10;
			}
			if (verificaNegativo) {
				Union= Union * -1;
			}
		return Union;
}
int CNatural::Ejercicio15(char operador,int num1,int num2){
	switch (operador) {
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			if (num2 != 0) {
				return num1 / num2;
			} else {
				return 0;
			}break;
	default:
		break;
	}
	return 0;
}
