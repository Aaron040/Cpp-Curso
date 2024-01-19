//Primer problema, op aritmeticas
#include <iostream>
using namespace std;
int main(){
	int num_1,num_2;
	cout<<"Digite el primer numero: ";
	cin>>num_1;
	cout<<"Digite el segundo numero: ";
	cin>>num_2;
	int suma = num_1 + num_2;
	int resta = num_1 - num_2;
	int mult = num_1 * num_2;
	float div =(num_1 / num_2);
	cout<<"Suma: "<<suma<<"\nResta: "<<resta<<"\nMultiplicacion: "<<mult<<"\nDivision: "<<div<<endl;
	int edad;
	char sexo;
	float altura;
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Escriba su sexo: "; cin>>sexo;
	cout<<"Digite su altura: "; cin>>altura;
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura en mts: "<<altura;
}
