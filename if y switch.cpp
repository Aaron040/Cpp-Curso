//Sentencia If y switch
/* if(condicion){
	instruccion1
}
else{
	instruccion2
}*/
/*
	switch(expresion){
		case literal1:
			instruccione 1;
			break;
		case literal2:
			instruccion 2;
			break;
		default:
			instruccion por defecto;
			break;		
	}
*/
/*
#include<iostream>
using namespace std;
int main(){
	int num1, num2,num3;
	cout<<"Digite 3 numeros: ";
	cin>>num1>>num2>>num3;
	if(num1 > num2){
		if(num1>num3){
			cout<<"Numero 1 es el mas grande";	
		}
		else if(num1 < num3){
			cout<<"Numero 3 es el mas grande";
		}
		else{
			cout<<"Numero 1 y 3 son los mas grandes";
		}
	}
	else if(num2 > num1){
		if(num2>num3){
			cout<<"Numero 2 es el mas grande";	
		}
		else if(num2 < num3){
			cout<<"Numero 3 es el mas grande";
		}
		else{
			cout<<"Numero 2 y 3 son los mas grandes";
		}
	}
	else{
		if(num2>num3){
			cout<<"Numero 1 y 2 son los mas grandes";	
		}
		else if(num2 < num3){
			cout<<"Numero 3 es el mas grande";
		}
		else{
			cout<<"3 numeros son iguales";
		}
	}
}*/
/*#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Digite un numero: ";
	cin>>num;
	if(num == 0){
		cout<<"Numero es 0";
	}
	else if(num > 0){
		cout<<"Numero es positivo";
	}
	else{
		cout<<"Numero es negativo";	
	}
}*/
/*#include<iostream>
using namespace std;
int main(){
	char letra;
	cout<<"Digite una letra: ";
	cin>>letra;
	switch(letra){
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
			cout<<"Es una vocal minuscula";
			break;
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':
			cout<<"Es una vocal mayuscula";
			break;	
		default:
			cout<<"no es vocal";
			break;
	}
}*/
/*#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3,num4;
	cout<<"Digite 3 numeros: ";
	cin>>num1>>num2>>num3;
	cout<<"Digite otro numero: ";
	cin>>num4;
	if(num4 == num1 || num4 == num2 || num4 == num3){
		cout<<"Numero 4 coincide con alguno de los anteriores";
	}
	else{
		cout<<"El numero no coincide con ninguno";
	}
}*/
/*#include<iostream>
using namespace std;
int main(){
	int numero, unidades, decenas, centenas, millar;
	cout<<"Digite un numero: ";
	cin>>numero;
	unidades = numero % 10;
	numero /= 10;
	decenas = numero % 10;
	numero /= 10;
	centenas = numero % 10;
	numero /= 10;
	millar = numero % 10;
	numero /= 10;
	//hacer switch con cada caso
}*/

