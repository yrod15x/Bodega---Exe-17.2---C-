/*Ejercicio 17.2 Libro Introduccion a C++. Crear una clase Bodega que maneje el registro de elementos de un almacen. Se agrega, se borran y muestran estos objetos. */

#include <iostream>
#include "Bodega.h"
#include <vector>
#include <string>

int main()
{
    Bodega almacen;
    almacen.registrar("1", 20);
    almacen.registrar("2", 40);
    almacen.mostrar_inventario("1");
     almacen.ordenar("2", 13);

    return 0;
}
