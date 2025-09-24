#include<iostream>
using namespace std;
	int main()
	{
	float bill;
	char input;
		cout<<"enter your bill amount=";
	cin>>bill;
		cout<<"do you have membership card (y/n)=";
	cin>>input;
	if(input=='y'||input=='Y')
	{
	
	 if(bill>20000)
	 
{
		bill=bill-(bill*0.025);
		cout<<"dear member your bill is Rs "<<bill;
}
	
	else if(bill<20000&&bill>5000)
	
	{
		bill=bill-(bill*0.015);
	
		cout<<"dear member your bill is Rs"<<bill;
	}
}
else if(input=='n'||input=='N')
{

	cout<<"your are not member "<<endl;
	cout<<"please pay the bill Rs"<<bill<<endl;
}
		return 0;		
}
