#include<iostream>
using namespace std;
int main()
{

	float r,area,peri;
	cout<<"enter the raduis=";
	cin>>r;
	area=3-14*r*r;
	cout<<"area is equal to="<<area<<endl;
	peri=2*3.14*r;
	cout<<"perimeter is equal  to="<<peri<<endl;
	if(area>peri)
		cout<<"area is greater than perimeter"<<endl;
	 else if(area<peri)
		cout<<"area is less than perimeter"<<endl;
	else
		cout<<"area is equal to perimeter"<<endl;
	return 0;
}