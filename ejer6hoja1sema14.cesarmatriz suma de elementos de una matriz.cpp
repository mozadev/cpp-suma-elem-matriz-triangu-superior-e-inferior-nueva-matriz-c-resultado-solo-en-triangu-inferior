#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include <Windows.h>
#include <iomanip>

using namespace std;
using namespace System;


int validan()
{
	int n;
	cout << "ingresa orden de la matriz cuadrada"; cin >> n;
	while (n < 2 || n>50)
	{
		cout << "ingresa orden de la matriz cuadrada"; cin >> n;
	}return n;
}



void ingresadatos(int n, int **matriz, int **matriz2)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "ingrese valor [" << i + 1 << "];[" << j + 1 << "]: ";
			cin >> matriz[i][j];
		}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			matriz2[i][j] = 0;
		}
}

void salidadatos(int n, int **matriz, int **matriz2)

{
	cout << endl << " DATOS DE LA MATRIZ1" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << matriz[i][j] << "\t ";
		cout << endl;
	}
	cout << endl << "datos de la matriz resultante  " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << matriz2[i][j] << "\t ";
		cout << endl;
	}

}

void sumamatrices(int n, int **matriz, int **matriz2)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j < i)
				matriz2[i][j] = matriz[i][j] + matriz[j][i];
			else
				matriz2[i][j] = 0;
		}

		cout << endl;
	}
}


int main()
{
	int n = validan();
	int **matriz;
	matriz = new int*[n];
	for (int i = 0; i < n; i++)
		matriz[i] = new int[n];
	int**matriz2;
	matriz2 = new int*[n];
	for (int i = 0; i < n; i++)
		matriz2[i] = new int[n];
	ingresadatos(n, matriz, matriz2);
	sumamatrices(n, matriz, matriz2);
	salidadatos(n, matriz, matriz2);
	for (int i = 0; i < n; i++)
		delete[]matriz[i];
	delete[]matriz;
	for (int i = 0; i < n; i++)
		delete[]matriz2[i];
	delete[]matriz2;
	_getch();
}
