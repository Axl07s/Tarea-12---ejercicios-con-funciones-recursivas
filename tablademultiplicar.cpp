//Fecha: 2024-18-06
//Autor: Axel Molineros
//Diseña la función recursiva que imprima una tabla de multiplicar. La función debe recibir 2 parámetros: el primero representa la tabla, y el segundo representa el límite superior de esa tabla.

#include <iostream>
using namespace std;

//Funcion recursiva para imprimir la tabla de multiplicar
void TablaMultiRecursiva(int tabla, int limite, int contador = 1)
{
    if (contador > limite) //Si contador supera limite termina la funcion
        return;
        //imprimir la multiplicacion de la tabla por el contador
    cout << tabla << " x " << contador << " = " << tabla * contador << endl;
    //llama recursivamente a la funcion
    TablaMultiRecursiva(tabla, limite, contador + 1);
}

int main() 
{
    //solicitar la tabla y el limite superior
    int tabla, limite;
    cout << "Ingrese la tabla que desea calcular: ";
    cin >> tabla;
    cout << "Ingrese el limite superior: ";
    cin >> limite;
    //llamada de la funcion para imprimir la tabla
    TablaMultiRecursiva(tabla, limite);
    return 0;
}
