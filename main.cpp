#include<iostream>
using namespace std;

void Numeros(char *msg, int *x);
void Numeros(char *msg, float *x);

int main()
{
	int inteiro;
	float flutuante;

	Numeros("Digite um numero inteiro", &inteiro);

	Numeros("Digite um numero flutuante", &flutuante);

	system("pause");

}

void Numeros(char *msg, int *x)
{
	cout << msg;
	cin >> *x;
	cout << *x << endl;
}

void Numeros(char *msg, float *f)
{
	cout << msg;
	cin >> *f;
	cout << *f << endl;
}