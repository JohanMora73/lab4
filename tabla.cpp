#include "tabla.h"

//Tabla::Tabla()
//{

//}

int Tabla::Contar_Nodos(Enrutador)
{

}

int Tabla::Calcular_Cosot()
{

}

void Tabla::Camino_Eficiente()
{

}

void Tabla::Generar_Redes_Aleatorioa()
{

}

void Tabla::Cargar_Redes_DArchivos(string archivo, Tabla tabla)
{

    string texto,nodo1,nodo2,var,l,sn1,sn2;
    int posicion,costo;
    ifstream red;


    red.open(archivo,ios::in); //Abriendo en modo lectura
    if(red.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }
    while(!red.eof()){//Mientras no sea el final del archivo
        getline(red,texto);
        cout<<endl<<texto<<endl;
        posicion=0;
        for(int i = 1; i<=3; i++){
            var="";
            while(texto[posicion]!=' ' && posicion<=texto.length()){
                l=texto[posicion];
                var.append(l);
                posicion+=1;
            }
            posicion+=1;
            if (i==1) nodo1=var;
            else if (i==2) nodo2=var;
            else costo=atoi(var.c_str());     //se convierte el costo a entero
        }
        sn1=nodo1;sn2=nodo2;
        Enrutador nodo1, nodo2;
        cout<<"nodo 1: "<<sn1<<" nodo 2: "<<sn2<<" costo: "<<costo<<endl;
        nodo1.Agregar_Enlace(sn2,costo);
        nodo2.Agregar_Enlace(sn1,costo);
        tabla.Crear_nodo(sn1,nodo1);
        tabla.Crear_nodo(sn2,nodo2);
    }
    red.close();//se cierra el archivo
}

void Tabla::Crear_nodo(string nombre,Enrutador contenedor)
{
    //Si el nodo no existe lo puedo crear:   Se esta creando un examen
    if(Nodos.find(nombre)==Nodos.end()) {
        Nodos.insert(pair<string,Enrutador>(nombre,contenedor));
        cout<<"Nodo "<<nombre<<" aniadido exitosamente"<<endl;
    }
    else cout << "El nodo"<<nombre<<"ya existe, no se puede aniadir nuevamente" << endl;
}

void Tabla::Actualizar_Contenedor()
{

}

