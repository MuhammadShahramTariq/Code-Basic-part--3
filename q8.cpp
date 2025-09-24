#include<iostream>
using namespace std;
int main() {
	int time,age;
	char member,input;
	float price;
	cout<<"Enter your age :";
	cin>>age;
	cout<<"Is ticket buying is at 5pm or before 5pm (24 hour sed:)";
	cin>>time;
	cout<<"Are you loyalty program member (Y,y/N,n) :";

	cin>>input;

	if(age<12) {
		if(time>=17) {
			price=3;
		} else
		{
			price=5;

		}

	}
	if(age>12&&age<=64) {

		if(time>=17) {

			price=8;
		} else {

			price=10;
		}


	}
	if(age>=65) {
		if(time>=17) {
			price=5;
		}

		else {

			price=7;
		}
	}
	if(input=='y' || input=='Y') {
		price=price-(price*0.1);
		cout<<"Your ticket price is : $"<<price;
	} else if(input=='n' || input=='N') {
		cout<<"your ticket price is : $"<<price;
	}
	return 0;
}