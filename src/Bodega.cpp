#include "Bodega.h"
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

Bodega::Bodega()
{
    //ctor
    _num_total_items = 0;
}

Bodega::~Bodega()
{
    //dtor
}

Bodega::Bodega(int num_total_items)
{
    _num_total_items = num_total_items;
}

Bodega::Bodega(const Bodega& other)
{
    //copy ctor
    _num_total_items = other._num_total_items;
}

void Bodega::registrar(std::string codigo, int cantidad)
{
    codigos.push_back(codigo);
    cantidades.push_back(cantidad);
}

void Bodega::ordenar(std::string codigo, int cantidad)
{
    //Si hay cosigo en  existencia
    if(count(codigos.begin(), codigos.end(), codigo) > 0)
    {
       for(int i = 0; i < codigos.size(); i++)
       {
           if(codigo == codigos[i])
           {
               if(cantidad <= cantidades[i] and cantidades[i] - cantidad >= 0)
               {
                    cantidades[i] -= cantidad;
                    std::cout << "Se ordenaron " << cantidad << " unidades del producto #" << codigo << ". Quedan " << cantidades[i] << " unidades en stock." << std::endl;
               }
               else
               {
                   std::cout << "Este pedido no se puede procesar no quedan sufientes unidades disponisbles." << std::endl;
               }
           }
       }
    }
    else
    {
        std::cout << "Codigo no encontrado." << std::endl;
    }
}

void Bodega::mostrar_inventario(std::string codigo)
{
    if(codigo == "0")
    {
        for(int i = 0; i < codigos.size(); i++)
        {
            std::cout << codigos[i] << " => " << cantidades[i] << std::endl;
        }
    }
    else
    {
        //si hay producto disponible
         if(count(codigos.begin(), codigos.end(), codigo) > 0)
         {
             //Encontrar el indice del elemento dentro del vector
             auto it = find(codigos.begin(), codigos.end(), codigo);
             int indice = it - codigos.begin();
            std::cout << codigos[indice] << " => " << cantidades[indice] << std::endl;
         }
    }
}
