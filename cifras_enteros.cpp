//Fecha: 2024-18-06
//Autor: Axel Molineros
//Diseñe la función recursiva que cuenta el total de cifras que tiene un número entero.

#include <iostream>
using namespace std;

//Funcion recursiva para contar las cifras de un numero entero
int ConteoCifras(int num)
{
    if (num == 0) //Si el numero es 0 tiene 0 cifras 
        return 0;
    return 1 + ConteoCifras(num / 10); //llamada recursiva a la funcion dividiendo el numero por 10
}

int main()
{
    //solicitar un numero para contar sus cifras
    int num;
    cout<< "Ingrese un número: ";
    cin>>num;
    //mostrar cantidad de cifras del numero ingresado
    cout<< "El número " <<num<< " tiene " <<ConteoCifras(abs(num))<< " cifras." << endl;
    return 0;
}
