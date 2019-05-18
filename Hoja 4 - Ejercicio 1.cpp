#include <iostream>

using namespace std;

void precio(int *nN) {
	if (*nN < 3)
	{
		cout << "Precio = " << *nN * 145 << endl;;
	}
	if ((*nN >= 3) && (*nN <= 5))
	{
		cout << "Precio = " << *nN * 138 << endl;;
	}
	if (*nN > 5)
	{
		cout << "Precio = " << *nN * 135 << endl;
	}
}

int main() {
	int n;
	int *neu;

	cout << "Cantidad de neumaticos : ";
	cin >> n;

	neu = &n;

	precio(neu);

	cout << endl; system("pause"); return(0);
}