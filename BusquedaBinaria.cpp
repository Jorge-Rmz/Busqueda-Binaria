#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int Inferior, Superior, Mitad, Valor, Num[] = {1,2,3,4,5}; 
	char Comp = 'F';
	
	cout<<"digite el valor a buscar:"<<endl;
	cin>>Valor;
	
	Inferior=0;
	Superior=5;
	
	while(Inferior <= Superior){
		Mitad = (Inferior+Superior)/2;
		
		if(Num[Mitad] == Valor){
			Comp='V';
			break;
		}
		
		if(Num[Mitad] > Valor){
			Superior=Mitad;
			Mitad = (Inferior+Superior)/2;
		}
		
		if(Num[Mitad] < Valor){
			Inferior=Mitad;
			Mitad = (Inferior+Superior)/2;
		}
		
	}
	
	if(Comp == 'V'){
			cout<<"El valor ha sido encontrado en el arreglo en la posicion "<<Mitad<<endl;
		}
		else{
			cout<<"El valor no ha sido encontrado";
		}
	
	getch();
	return 0;
}
