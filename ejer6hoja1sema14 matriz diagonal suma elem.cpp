ejercicio 6 hoja 1 bidimensionales
*/
#include<iostream>
#include<conio.h>
using namespace std;
int IngresaPositivo()
{
int Num;
do
{
cout << "numero positivo:"; cin >> Num;
} while (Num <= 1 || Num > 50);
return Num;
}
void IngresaDatos(int N, int **Matriz1, int **Matriz2)
{
for (int i = 0; i < N; i++)
for (int j = 0; j< N; j++)
{
cout << "Ingrese dato " << i + 1 << "," << j + 1 << ":";
cin >> Matriz1[i][j];
}
for (int i = 0; i < N; i++)
for (int j = 0; j< N; j++)
Matriz2[i][j] = 0;
}
void ImprimirDatos(int N, int **Matriz1, int **Matriz2)
{
cout << endl << " DATOS DE LA MATRIZ1" << endl;
for (int i = 0; i < N; i++)
{
for (int j = 0; j< N; j++)
cout << Matriz1[i][j] << " ";
cout << endl;
}
cout << endl << " DATOS DE LA MATRIZ2" << endl;
for (int i = 0; i < N; i++)
{
for (int j = 0; j< N; j++)
cout << Matriz2[i][j] << " ";
cout << endl;
}
}
void SumaTriangulo(int N, int **Matriz1, int **Matriz2)
{
for (int i = 0; i < N; i++)
for (int j = 0; j< N; j++)
if (j < i)
Matriz2[i][j] = Matriz1[i][j] + Matriz1[j][i];
}
int main()
{
int N, M;
cout << "Ingrese N ";
N = IngresaPositivo();
int **Matriz1, **Matriz2;
Matriz1 = new int *[N];
Matriz2 = new int *[N];
for (int i = 0; i<N; i++)
Matriz1[i] = new int[N];
for (int i = 0; i<N; i++)
Matriz2[i] = new int[N];
IngresaDatos(N, Matriz1, Matriz2);
SumaTriangulo(N, Matriz1, Matriz2);
ImprimirDatos(N, Matriz1, Matriz2);
for (int i = 0; i<N; i++)
delete[] Matriz1[i];
delete[] Matriz1;
for (int i = 0; i<N; i++)
delete[] Matriz2[i];
delete[] Matriz2;
_getch();
}