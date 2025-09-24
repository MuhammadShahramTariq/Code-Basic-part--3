#include<iostream>
using namespace std;
int main()
{
 int num1,num2,Total;   //we can write it in float 
 char op;
 cout<<"Enter first numbers =";
 cin>>num1;
 cout<<" Enter operation = ";
 cin>>op;
 cout<<"Enter second number =";
 cin>>num2;
 switch(op)
{
	case'+':
		Total=num1+num2;
		break;
		case'-':
					Total=num1-num2;
		break;
		case'*':
		Total=num1*num2;
		break;
		case'/':		
	Total=num1/num2;
		break;
		case'%':
			Total=num1%num2;
			break;		
		default:
			cout<<"invaild operation";
			break;
}
cout<<num1<<op<<num2<<"="<<Total;
return 0;
}
