#include <iostream>
#define WIDTH 80
#define HEIGHT 40
using namespace System;
using namespace std;

void ejercicio() {
	int n;
	cout << "Ingrese el numero de notas: ";
	cin >> n;
	int* notas = new int[n];
	cout << "Ingrese cada una de las notas: ";
	for (int i = 0; i < n; i++)
	{
		cin >> notas[i];
	}

	// calculamos el menor
	int menor = notas[0];
	for (int i = 1; i < n; i++)
	{
		if (notas[i] < menor) {
			menor = notas[i];
		}
	}

	// calculamos la sumatoria
	int sumatoria = 0;
	for (int i = 0; i < n; i++)
	{
		sumatoria += notas[i];
	}

	sumatoria = sumatoria - menor;
	cout << sumatoria * 1.0 / (n - 1);
}

void eliminarValor() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void calcularPromedio() {
	cout << "Logica para calcular el promedio";
}
void menu() {
	int opc;
	do
	{
		cout << "1. Generar valores" << endl;
		cout << "2. Eliminar menor" << endl;
		cout << "3. Calcular promedio" << endl;
		cin >> opc;
		system("cls");
	} while (opc < 1 || opc > 3);
	switch (opc)
	{
	case 2: eliminarValor(); break;
	case 3: calcularPromedio(); break;
	}
}
int main() {
	Console::SetWindowSize(WIDTH, HEIGHT);
	menu();
	system("pause>0");
	return 0;
}