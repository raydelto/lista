#include "Lista.h"

Lista::Lista() : _primer(nullptr), _ultimo(nullptr)
{
}

void Lista::Agregar(Elemento *elemento)
{
    if (_primer == nullptr) // Si la lista está vacía
    {
        _primer = elemento;
    }
    else
    {
        _ultimo->SetSiguiente(elemento);
    }
    _ultimo = elemento;
}

Elemento *Lista::GetPrimer()
{
    return _primer;
}