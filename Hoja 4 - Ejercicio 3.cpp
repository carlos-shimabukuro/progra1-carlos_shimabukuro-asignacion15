#include <iostream>

using namespace std;

void precio(int *diA, int *inG) {
	float precio;
	precio = (*diA * 1.5) + (*inG * 2.5);

	cout << "Precio = s/." << precio << endl;
}

int main() {
	int diA, inG;
	int *diametro, *ingredientes;

	cout << "Diametro de la pizza : ";
	cin >> diA;
	cout << "Cantidad de ingredientes en la pizza : ";
	cin >> inG;

	diametro = &diA;
	ingredientes = &inG;

	precio(diametro, ingredientes);

	cout << endl; system("pause"); return(0);
}