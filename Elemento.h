#pragma once
#include <string>

class Elemento
{
public:
    Elemento(std::string nombre);
    Elemento* GetSiguiente();
    void SetSiguiente(Elemento* elemento);
    std::string GetNombre();

private:
    std::string _nombre;
    Elemento* _siguiente;
};
