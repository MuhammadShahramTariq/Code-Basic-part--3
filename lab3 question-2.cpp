#include<iostream>
using namespace std;
int main()
{
int age;

cout<<"enter your age=";
cin>>age;
	if(age<13)
	{
			cout<<"\"you are a child\""<<endl; 
			
			}
			
			else if(age>=13&&age<=19)
			{	cout<<"\"your are teenager\""<<endl;
			}
			else if(age>=20)
						{ 	cout<<"\"you are an adult\""<<endl;
		}
			
			return 0;
}