#include <iostream>

using namespace std;


int main()
{
	int i, j, O, I;

	cout << "Valor de O: ";
		cin >> O;
		cout << "Valor de I: ";
		cin >> I;

	for (i = 0; i < O; i++)
	{
		for (j = 0; j < I; j++)
		{
			if (i > 0 && i < O -1)
			{
				if(j == 0 || j == I -1)
				{
					cout << "[]";
				}
				else
				{
					cout << "||";
				}
			}
			else
			{
				cout << "[]";
			}
		}
			cout << "\n";
	}
}