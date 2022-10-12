#include<iostream>

using namespace std;

int main(){
	
	int x,suma=0;
	
	cout<<"Ingrese un numero para la suma de los primeros numeros naturales de aquel numero: ";cin>>x;
	cout<<endl;
	
	for(int i=1;i<=x;i++){
		cout<<i<<endl;
		suma+=i;	
	}
	
	cout<<"\nLa suma de los "<<x<<" primeros numeros naturales es: "<<suma;
	
	return 0;
}