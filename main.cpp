#include "tabla.h"

int main()
{
    Tabla T_Enrutamiento;
    string archivo;
    int resp;
    cout<<"(1)Desea cargar una red desde un archivo"<<endl<<"(2)Desea generar una red aleatoria"<<endl;
    cin>>resp;
    switch (resp) {
        case 1:
            cout<<"Digite el nombre del archivo con la extencion: "<<endl;
            cin>>archivo;
            T_Enrutamiento.Cargar_Redes_DArchivos(archivo,T_Enrutamiento);
        break;
    }

    return 0;
}
