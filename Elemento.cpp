#include "Elemento.h"

Elemento::Elemento(std::string nombre) : _nombre(nombre), _siguiente(nullptr)
{
}

Elemento *Elemento::GetSiguiente()
{
    return _siguiente;
}

void Elemento::SetSiguiente(Elemento *elemento)
{
    _siguiente = elemento;
}

std::string Elemento::GetNombre()
{
    return _nombre;
}
