#include <iostream>

using namespace std;

void salario(int *h)
{
	float costo, costoF;
	if ((*h >= 0) && (*h <= 40)) {
		costo = 16 * *h; 
}
	if ((*h > 40)) { 
		costo = (16 * 40) + 20 * (*h - 40); 
	}

	costoF = costo * *h;
	cout << "El salario total es de : s/." << costoF << endl;
}
int main()
{
	int h;
	int *horas;

	cout << "Ingrese la cantidad de horas trabajadas : ";
	cin >> h;

	horas = &h;

	salario(horas);

	cout << endl; system("pause"); return(0);
}