#include <iostream>

using namespace std;
using namespace System;

void dibujaRectangulo(char *nC, int *x, int *y, int *aC, int *aL) {
	for (int i = 1; i <= *aL; i++)
	{
		for (int j = 1; j <= *aC; j++)
		{
			Console::SetCursorPosition(*x + j, *y + i);
			if (i + j > 0)
			{
				cout << *nC;
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
	int ancho, alto, x, y;
	int *anC, *alT, *cX, *cY;
	char *cH;
	char a;

	cout << "Ancho : ";
	cin >> ancho;
	cout << "Alto : ";
	cin >> alto;
	cout << "Caracter : ";
	cin >> a;
	cout << "Coordenada X : ";
	cin >> x;
	cout << "Coordenada Y : ";
	cin >> y;
	cout << endl;


	anC = &ancho;
	alT = &alto;
	cX = &x;
	cY = &y;
	cH = &a;

	dibujaRectangulo(cH, cX, cY, anC, alT);

	cout << endl; system("pause"); return (0);
}