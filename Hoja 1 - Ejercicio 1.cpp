#include <iostream>
using namespace std;

void cuadra(int nN) {
	for (int i = 1; i <= nN; i++)
	{
		for (int j = 1; j <= nN; j++)
		{
			if (i + j > 0)
			{
				cout << "* ";
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

	cout << "valor de n : ";
	cin >> n;
	cout << endl;
	cuadra(n);

	cout << endl; system("pause"); return (0);
}