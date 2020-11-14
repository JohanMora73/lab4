#include "enrutador.h"

//Enrutador::Enrutador()
//{

//}

void Enrutador::Cambiar_Costos()
{

}

void Enrutador::Eliminar_Enlace()
{

}

void Enrutador::Agregar_Enlace(string name, int costo)
{
    //Si el enlace no existe lo puedo crear:   Se esta creando un examen
    if(Enlaces.find(name)==Enlaces.end()) Enlaces.insert(pair<string,int>(name,costo));
    else cout << "El enlace ya existe, debe ingresar otro nombre" << endl;
}

void Enrutador::Imprimir_TEnrutamiento(string nombre)
{
    /*cout << "Tabla de enrutamiendo \t";
    for(it=Enrutador.begin();it!=Enrutador.end();it++) cout << it->first << '\t';
    cout << endl << endl;
    cout << it->first << '\t';
    cout << it->second << '\t';
    }*/
}
