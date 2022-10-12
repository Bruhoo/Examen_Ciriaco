#include<iostream>

using namespace std;

main ()
{
	int hora,valor,aux;
	cout<<"Ingrese Hora: ";
	cin>>hora;
	if(hora>4)
		{	
			aux = hora-4;
			valor=(aux*2)+6;
		}
	else
			valor=6;
	
	cout<<"El valor a pagar es:  "<<valor;
}