#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include "Funsiones_Ad.h"
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

class Enrutador
{
private:
    map<string,int> Enlaces;
    map<string,int>::iterator it;

public:
    //Enrutador();
    void Cambiar_Costos();
    void Eliminar_Enlace();
    void Agregar_Enlace(string,int);
    void Imprimir_TEnrutamiento(string);
};

#endif // ENRUTADOR_H
