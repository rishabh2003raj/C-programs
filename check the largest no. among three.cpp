#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cout<<"Enter three numbers:";
	cin>>x>>y>>z;
	if ((x>y) && (x>z))
		cout<<"Largest number is:"<<x;
	else if ((y>x) && (y>z))
		cout<<"Largest number is:"<<y;
	else
		cout<<"Largest number is:"<<z;
	return 0;
}