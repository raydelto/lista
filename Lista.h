#pragma once
#include "Elemento.h"

class Lista
{
public:
    Lista();
    void Agregar(Elemento *elemento);
    Elemento *GetPrimer();

private:
    Elemento *_primer;
    Elemento *_ultimo;
};
