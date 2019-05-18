#include <iostream>

using namespace std;
using namespace System;

void dibujaCuadrado(int *nC, int *nN, int *x, int *y) {
	for (int i = 1; i <= *nN; i++)
	{
		for (int j = 1; j <= *nN; j++)
		{
			Console::SetCursorPosition(*x + j, *y + i);
			if (i + j > 0)
			{
				cout << char (nC);
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
	int n, x, y, aC;
	int *tam, *cX, *cY, *cH;
	char a;

	cout << "Valor de n : ";
	cin >> n;
	cout << "Caracter : ";
	cin >> a;
	cout << "Coordenada X : ";
	cin >> x;
	cout << "Coordenada Y : ";
	cin >> y;
	cout << endl;

	aC = int(a);

	tam = &n;
	cX = &x;
	cY = &y;
	cH = &aC;

	dibujaCuadrado(cH, tam, cX, cY);

	cout << endl; system("pause"); return (0);
}