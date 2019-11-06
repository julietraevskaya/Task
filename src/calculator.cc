#include <iostream>
using namespace std;

int main()
{
	int a, b, sum;
	char c;
	cin >> a >> c >> b;
	if (c == '+')
		sum = a + b;
	if  (c == '-')
		sum = a - b;
	cout << sum << endl;
	return(0);
}