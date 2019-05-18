#include <iostream>

using namespace std;

void dibujaCuadrado(char sinb, int nN) {
	for (int i = 1; i <= nN; i++)
	{
		for (int j = 1; j <= nN; j++)
		{
			if (i + j > 0)
			{
				cout << sinb << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}

int main() {
	int n;
	char a;

	cout << "Valor de n : ";
	cin >> n;
	cout << "Caracter : ";
	cin >> a;
	cout << endl;

	dibujaCuadrado(a, n);

	cout << endl; system("pause"); return (0);
}