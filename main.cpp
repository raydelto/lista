#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Elemento cancion1("Suavemente");
    Elemento cancion2("Bésame");
    Elemento cancion3("Rey");
    Lista lista;
    lista.Agregar(&cancion1);
    lista.Agregar(&cancion2);
    lista.Agregar(&cancion3);

    Elemento* i = lista.GetPrimer();

    while(i != nullptr)
    {
        cout << i->GetNombre() << endl;
        i = i->GetSiguiente();
    }
    return 0;
}