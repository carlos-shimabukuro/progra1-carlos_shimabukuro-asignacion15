#include <iostream>

using namespace std;

void precio(int *sC, int *nN) {

	char sX;

	sX = char(*sC);
	sX = toupper(sX);

	if ((sX = 'M') && (*nN < 25)) {
		cout << "Costo total = " << 1000;
	}
	else
	{
		if ((sX = 'M') && (*nN >= 25)) {
			cout << "Costo total = " << 700;
		}
		else
		{
			if ((sX = 'F') && (*nN < 21)) {
				cout << "Costo total = " << 800;
			}
			else
			{
				if ((sX = 'F') && (*nN >= 21)) {
					cout << "Costo total = " << 500;
				}
			}
			
		}
		
	}
	
}               

	int main() {
		int edad, sexo;
		char sX;
		int *n, *sex;
		
	

		cout << "Ingrese la edad: ";
		cin >> edad;
		cout << "Ingrese el sexo (M: masculino; F: femenino) : ";
		cin >> sX;
		cout << endl;

		sexo = int(sX);

		n = &edad;
		sex = &sexo;

		precio(sex, n);

		

		cout << endl; system("pause"); return(0);
	}
		
	