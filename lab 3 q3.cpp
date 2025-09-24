#include<iostream>
using namespace std;
int mian()
{
	int month;
	cout<<"enter the number of month (1-12)";
	cin>>month;

		switch(month) 
		{ 
		case 1:
		cout<<"month January,days=31"<<endl;
		break;
		case 2:
		cout<<"month Feburay,days=29"<<endl;
		break;
		case 3:
		cout<<"month March,days=31"<<endl;
		break;
		case 4:
		cout<<"month April,days=30"<<endl;
		break;
		case 5:
		cout<<"month May,days=31";
		break;
		case 6:
		cout<<"month June,days=30";
		break;
		case 7:
		cout<<"	 month July	,days=31";
		break;
		case 8:
		cout<<"month August ,days=31";
		break;
		case 9:
		cout<<"month September,	 days=30";
		break;
		default:
		cout<<"inviald month number";
		break;
}
return 0;
}


