#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    
    cout << " Input the value for nth term: ";
    cin >> n;

    for (i = 1; i <= n; i++) 
	{
        sum += i * i;
        cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << " The sum of the series is: " << sum << endl;
    return 0;
}