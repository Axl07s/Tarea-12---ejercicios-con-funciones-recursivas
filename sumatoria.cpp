//Fecha: 2024-18-06
//Autor: Axel Molineros
//Diseñe la función recursiva que realice la sumatoria de : 1 -2 + 3 - 4 + 5 - 6 + 7 .... n. Donde es el límite de la serie 100.

#include <iostream>
using namespace std;

int Suma(int n) //Funcion recursiva para calcular la sumatoria
{
    if (n == 0) //Si n es 0, la sumatoria es 0
        return 0;
    if (n % 2 == 0) //Si n es par, resta n y continua con n-1
        return Suma(n - 1) - n;
    else //Si n es impar suma n y continua con n-1
        return Suma(n - 1) + n;
}

int main()
{   //muestra la sumatoria alternada de 1 a 100
    cout<< endl << "La sumatoria de la serie cuando el limite n es 100 es ";
    cout<< Suma(100) << endl;
    return 0;
}
