#include <iostream>

using namespace std;

float total(float *canT, float *preC)
{
	*preC = (*canT * *preC)*(118 / 100.00);

	cout << "Monto total a pagar: s/." << *preC << endl;
	return (0);
}
int main()
{
	float canT, preC;
	float *cantidad, *precio;

	cout << "Ingrese la cantidad de unidades adquiridas: "; 
	cin >> canT;
	cout << "Precio del articulo: "; 
	cin >> preC;

	cantidad = &canT;
	precio = &preC;

	total(cantidad, precio);

	cout << endl; system("pause"); return (0);
}