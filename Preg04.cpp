#include<iostream>

using namespace std;

main ()
{
	int ganacia;
	float donar;
	cout<<"Ingrese ganacia: ";
	cin>>ganacia;
	if(ganacia<=1000)
		{	
			donar = (ganacia*0.05);
		}
	if(ganacia>1000 && ganacia<=1500)
		{	
			donar = (ganacia*0.07);
		}
		if(ganacia>1500 && ganacia<=2000)
		{	
			donar = (ganacia*0.08);
		}
		if(ganacia>2000 && ganacia<=5000)
		{	
			donar = (ganacia*0.1);
		}
	if(ganacia>5000)
			donar=(ganacia*0.15);
	
	cout<<"El valor a donar es:  "<<donar;
}