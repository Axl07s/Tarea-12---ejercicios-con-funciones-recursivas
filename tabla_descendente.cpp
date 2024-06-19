//Fecha: 2024-18-06
//Autor: Axel Molineros
//Diseña la función recursiva que imprima la una tabla de multiplicar, de manera descendente desde el 10 al 1

#include <iostream>
using namespace std;

// Función recursiva para imprimir la tabla de multiplicar de manera descendente
void TablaMultiDescendente(int tabla, int contador = 10) 
{
    if (contador == 0) //si el contador llega a 0, termina la función
        return;
    // Imprimir la multiplicación de la tabla por el contador
    cout<<tabla<< " x " <<contador<< " = " <<tabla * contador<<endl;
    TablaMultiDescendente(tabla, contador - 1); // Llamar a la función con el contador
}

int main()
{
    int tabla;
    cout<<endl<< "Ingrese la tabla que desea calcular: ";
    cin>>tabla;
    // Llamar a la función para imprimir la tabla
    TablaMultiDescendente(tabla);
    return 0;
}
