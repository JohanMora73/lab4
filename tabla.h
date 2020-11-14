#ifndef TABLA_H
#define TABLA_H
#include "enrutador.h"

class Tabla
{
private:
    //int n=2;
    map<string,Enrutador> Nodos;
    map<string,Enrutador>::iterator it2;

    //int tabla_Enrutamiento[2][2];
public:
    //Tabla();
    int Contar_Nodos(Enrutador);
    int Calcular_Cosot();
    void Camino_Eficiente();
    void Generar_Redes_Aleatorioa();
    void Cargar_Redes_DArchivos(string,Tabla);
    void Crear_nodo(string,Enrutador);
    void Actualizar_Contenedor();

};

#endif // TABLA_H
