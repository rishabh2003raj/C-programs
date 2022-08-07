# include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	if (num%3==0 or num%7==0)
		cout<<"It is a multiple of 3 or 7";
	else 
		cout<<"It is not multiple";
	return 0;
	
}