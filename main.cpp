/*
Nombre: Pedro Antonio Valentin Camunas
Clase: Ccom 3033-001
Fecha: 15 de septiembre de 2025
Descripcion:
    Este programa genera tres números enteros aleatorios entre 0 y 100. 
    Estos números se despliegan primero en el orden en que fueron generados 
    y luego se muestran en orden descendiente.
Colaboradores: N/A
*/

#include <iostream>
#include<cstdlib>

//El propósito de "using namespace std" es economizar tiempo al no tener que escribir "std::" antes de cada cin y cout.
using namespace std;

int main()
{

//Se utiliza "srand(time)(0)) para crear una semilla que se utiliza para generar los números semi-aleatorios"
srand(time(0));

//Las siguientes líneas establecen el máximo y el mínimo del rango de números aleatorios
int maximo = 100;
int minimo = 0;

int num1 = rand() % (maximo - minimo + 1) + minimo;
int num2 = rand() % (maximo - minimo + 1) + minimo;
int num3 = rand() % (maximo - minimo + 1) + minimo;

cout << "Números aleatorios generados: ";

cout << num1 << ", ";
cout << num2 << ", ";
cout << num3 << " \n";

cout << "Orden descendiente: ";

int mayor = 0;
int medio = 0;
int menor = 0;

//En este bloque se verifica el tamaño de num1 en comparación con num2 y num3 y se le asigna un valor. "Mayor" si es el número mayor, "medio" si es el número del medio y "menor" si es el número menor.  
if (num1 >= num2 && num1 >= num3)
{
    mayor = num1;
}
else if (num1 <= num2 && num1 <= num3) 
{
    menor = num1;
}
else 
{
    medio = num1;
}


//En este bloque se verifica el tamaño de num2 en comparación con num1 y num3 y se le asigna un valor. "Mayor" si es el número mayor, "medio" si es el número del medio y "menor" si es el número menor.
if (num2 >= num1 && num2 >= num3) 
{
    mayor = num2;
}
else if (num2 <= num1 && num2 <= num3) 
{
    menor = num2;
}
else 
{
    medio = num2;
}


//En este bloque se verifica el tamaño de num3 en comparación con num1 y num2 y se le asigna un valor. "Mayor" si es el número mayor, "medio" si es el número del medio y "menor" si es el número menor.
if (num3 >= num1 && num3 >= num2) 
{
    mayor = num3;
}
else if (num3 <= num1 && num3 <= num2) 
{
    menor = num3;
}
else 
{
    medio = num3;
}

cout << mayor << ", " << medio << ", " << menor;



return 0;
}
