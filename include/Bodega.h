#ifndef BODEGA_H
#define BODEGA_H
#include <vector>
#include <string>

class Bodega
{
    public:
        Bodega();
        Bodega(int num_total_items);
        ~Bodega();
        Bodega(const Bodega& other);
        void registrar(std::string codigo, int cantidad);
        void ordenar(std::string codigo, int cantidad);
        void mostrar_inventario(std::string codigo = "0");

    protected:

    private:
        std::vector<std::string> codigos;
        std::vector<int> cantidades;
        int _num_total_items;
};

#endif // BODEGA_H
