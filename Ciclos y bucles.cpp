//Ciclos y bucles
/*
Ciclo while
while(expresion){
	instrucciones
}

Ciclo do while
do{
	instrucciones
}while(expresion)

bucle for
for(expr1; expresion logica; expr2){
	instrucciones
}

#include<conio.h> nueva libreria
getch() haceque el programa no se cierre
O
#include<stdlib.h>
system("pause");
*/

/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num;
	cout<<"Digite un numero: ";
	cin>>num;
	for(int i = 1; i <= 10; i++){
		cout<< i * num<<endl;
	}
	system("pause");
}*/
/*#include<iostream>
using namespace std;
int main(){
	int num;
	int contador = 0;
	do{
		cout<<"Digite un numero: ";
		cin>>num;
		if(num > 0){	
			contador++;	
		}
	}while(num != 0);
	cout<<"Numeros contados mas grandes que 0: "<<contador<<endl;
}*/

/*#include<iostream>
using namespace std;
int main(){
	int actTemp,maxTemp = 100,minTemp = -100;
	double avgTemp;
	for(int i = 0; i < 24; i+=4){
		cout<<"Escriba la temperatura actual: ";
		cin>>actTemp;
		if(actTemp < minTemp){
			minTemp = actTemp;
		}
		else if(actTemp > maxTemp){
			maxTemp = actTemp;
		}
		avgTemp += actTemp;
	}
	avgTemp /= 6;
	cout<<"Temperatura media: "<<avgTemp<<endl;
	cout<<"Temparuta mas alta: "<<maxTemp<<endl;
	cout<<"Temperatura mas baja: "<<minTemp<<endl;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int x, y;
	cout<<"Digite el valor de x: ";
	cin>>x;
	cout<<"Digite el valor de y: ";
	cin>>y;
	int resultado = 1;
	while(y > 0){
		resultado *= x;
		y--;
	}
	cout<<"El resultado es: "<<resultado;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int n;
	int suma = 0;
	cout<<"Digite el valor de n: ";
	cin>>n;
	for(int i = 1; i <= n; i++){
		int temp = (2*i)-1;
		suma += temp;
	}
	cout<<"suma es: "<<suma;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int numero;
	int suma = 0;
	cout<<"Cuantos factoriales quiere sumar? ";
	cin>>numero;
	for(int j = 1; j <= numero; j++){
		int factorial = 1;
		for(int i = 1; i <= j; i++){
			factorial *= i;
		}
		suma += factorial;
	}
	cout<<"suma es: "<<suma;
}*/
/*#include <iostream>
using namespace std;
int main(){
	int veces;
	int pNumero = 1;
	int sNumero = 2;
	int suma = 0;
	cout<<"Numero de veces que quiere hacer la suma: ";
	cin>>veces;
	for(int i = 1; i < veces; i++){
		suma += pNumero-sNumero;
		pNumero += 2;
		sNumero += 2;
	}	
	cout<<"Suma es: "<<suma;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int x = 0;
	int y = 1;
	int z = 1;
	int n;
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	for(int i = 0; i < n; i++){
		cout<<z<<" ";
		z = x + y;
		x = y;
		y = z;
	}
}*/
/*#include<iostream>
using namespace std;
int main(){
	int todoApro = 0;
	int almenos1ExamApro = 0;
	int ultExamApro = 0;
	int notaMin;
	cout<<"Digite nota minima para aprobar un examen: ";
	cin>>notaMin;
	for(int i = 1; i <= 5; i++){
		int exam1, exam2, exam3;
		cout<<"Calificacion del examen 1 del alumno "<<i<<": ";
		cin>>exam1;
		cout<<"Calificacion del examen 2 del alumno "<<i<<": ";
		cin>>exam2;
		cout<<"Calificacion del examen 3 del alumno "<<i<<": ";
		cin>>exam3;
		if(exam1 >= notaMin){
			almenos1ExamApro++;
		}
		else if(exam2 >= notaMin){
			almenos1ExamApro++;
		}
		else if(exam3 >= notaMin){
			almenos1ExamApro++;
			if(exam2 < notaMin && exam1 < notaMin){
				ultExamApro++;
			}
		}
		if(exam1 >= notaMin && exam2 >= notaMin && exam3 >= notaMin){
			todoApro++;
		}
	}
	cout<<"Alumnos que pasaron almenos 1 examen: "<<almenos1ExamApro<<endl;
	cout<<"Alumnos que pasaron todos los examenes: "<<todoApro<<endl;
	cout<<"Alumnos que pasaron solamente el ultimo examen: "<<ultExamApro<<endl;
}*/
/*#include<iostream>
#include<stdlib.h>
#include<time.h>//generar numero aleatorio
using namespace std;
int main(){
	int num;
	int dato;
	int contador = 0;
	srand(time(NULL)); //generar numero aleatorio
	dato = 1 + rand() % (100);
	do{
		cout<<"Digite un numero del 1 al 100: "<<endl;
		cin>>num;
		if(num > dato){
			cout<<"Numero aleatorio es menor"<<endl;
			contador++;
		}
		else if(num < dato){
			cout<<"Numero aleatorio es mayor"<<endl;
			contador++;
		}
	}while(num != dato);
	if(num == dato){
		cout<<"Encontro el numero en "<<contador<<" intentos.";
	}
	system("pause");
}*/
/*#include<iostream>
using namespace std;
int main(){
	int n;
	int i = 2;
	cout<<"Digite un numero: ";
	cin>>n;
	while(n != 1){
		if(n % i == 0){
			n /= i;
			cout<<i<<" * ";
		}
		else{
			i++;
		}
	}
}*/
