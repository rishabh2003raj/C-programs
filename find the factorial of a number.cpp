#include <iostream>
using namespace std;

int main()
{
	int  a, num, factorial=1;
	cout<<"Enter the no. to find factorial: ";
	cin>>num;
	for (int a=num;a>0;a--) 
	{
		factorial = factorial*a;
	}
	cout<<"Factorial of given number is: "<<factorial;
	return 0;
}