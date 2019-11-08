#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	int sum = 0;
	if (argc > 1)
	{
		for(int i = 0; i < argc; i++)
		{
			if (argv[i] == "+")
				i++;
			else
			{
				sum = sum + atoi(argv[i]);
			}
			
		}
		cout << sum << endl;
	}
	return(0);
}