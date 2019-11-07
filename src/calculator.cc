#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	int j = 1;
	int sum = 0;
	if (argc > 1)
	{
		for(int i = 0; i <= argc; i++)
		{
			if (argv[j] == "+")
				++argv[j];
			else
			{
				sum = sum + atoi(argv[j]);
				++argv[j];
			}
			
		}
		cout << sum << endl;
	}
	return(0);
}