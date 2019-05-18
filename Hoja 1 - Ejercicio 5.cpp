#include <iostream>

using namespace std;
using namespace System;

void dibujaCuadrado(int *nN) {
	for (int i = 1; i <= *nN; i++)
	{
		for (int j = 1; j <= *nN; j++)
		{
			if (*nN % 2 == 0)
			{
				if ((j + i == *nN / 2 + 1) || (j - i == *nN / 2) || ((j == 1) && (i >= *nN / 2)) || ((j == *nN) && (i >= *nN / 2)) || ((i == *nN) && (j != *nN / 2) && (j != *nN / 2 + 1)) || ((j == *nN / 2 - 1) && (i > *nN / 2)) || ((j == *nN / 2 + 2) && (i > *nN / 2)) || ((i == *nN / 2 + 1) && (j >= *nN / 2 - 1) && (j <= *nN / 2 + 2)))
				{
					cout << "* ";
				}
				else
				{
					cout << "  ";
				}
			}
			else
			{
				if ((j + i == (*nN - 1) / 2 + 2) || (j - i == (*nN - 1) / 2) || ((j == 1) && (i >= (*nN - 1) / 2 + 1)) || ((j == *nN) && (i >= (*nN - 1) / 2 + 1)) || ((i == *nN) && (j != (*nN - 1) / 2) && (j != (*nN - 1) / 2 + 1) && (j != (*nN - 1) / 2 + 2)) || ((j == (*nN - 1) / 2 - 1) && (i > (*nN - 1) / 2 + 2)) || ((j == (*nN - 1) / 2 + 3) && (i > (*nN - 1) / 2 + 2)) || ((i == (*nN - 1) / 2 + 2) && (j >= (*nN - 1) / 2 - 1) && (j <= (*nN - 1) / 2 + 3)))
				{
					cout << "* ";
				}
				else
				{
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
}

int main() {
	int	n;
	int *n1;

	cout << "Valor de n : ";
	cin >> n;

	n1 = &n;

	dibujaCuadrado(n1);

	cout << endl; system("pause");  return(0);
}