/*Diseñar un programa que permita leer un conjunto de N datos reales y luego determine el segundo
mayor de los negativos y cuantas veces aparece.
Ejemplo:
N = 10
Datos reales: 3,1; - 4,3; 1,1; - 8; 2,1; - 4,3; 6; - 3,3; 1; - 3,3
Salida:
Segundo mayor de los negativos: - 4,3
Número de apariciones del segundo mayor de los negativos: 2*/
#include <iostream>
using namespace std;
int main() {
    int cantidad_datos;
    float numero;
    cout <<" porfavor coloque la cantidad de datos a leer"<<endl;
    cin>>cantidad_datos;
    float max_men,second_maxmen;
    bool primeraVez=true,primeraVezdesegundo=true;
    for ( int i=0 ; i<cantidad_datos ; i++) {
        cout<<"coloque el numero   : "<<i+1<<endl;
        cin>>numero;
        if ( numero<0) {
            if ( primeraVez||numero>max_men) {
                if (!primeraVez){second_maxmen=max_men;}
                max_men=numero;primeraVez=false;
            }
            else if (max_men>numero) {
                if (primeraVezdesegundo||numero>second_maxmen) {
                    second_maxmen=numero;
                    primeraVezdesegundo=false;
                }
            }
        }
    }
    cout<<"el segundo mayor es :  "<<second_maxmen<<endl;
    return 0;//asdasdasdasdasdasdasdasdasda
    hola hola
}