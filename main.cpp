/*

* Diego Gerardo Sánchez Moreno A01276011

* Main "información de Zoologico"
* Recibe edad, tamaño, ague y comida restante de cada animal, 
* tambien recibe el numero de días transcurridos.

* El programa devuelve la cantidad de agua y de comida restante 
* despues de dicho numero de días, a su vez imprime la edad y
* el tamaño de cada animal

*/

#include <iostream>
using namespace std;
#include <string>
/*
===========================Clases===========================
*/
#include "Sano.h"
#include "Enfermos.h"
#include "Bebe.h"
/*
===========================Main===========================
*/
int main(){
    //variables
    int nivel;
    //estatuto if
    cout<<"Teclea:\n 1. Animal Sano\n 2. Animal enfermo\n 3. Animal Bebe"<<endl;
    cin>>nivel;
    if (nivel==1)
    {
    /*
    ===========================Sano===========================
    */
    int ancho;
    int largo;
    cout<<"introduce el ancho y largo del habitat: "<<endl;
    cin>>ancho,largo;
    Sano san_1(largo,ancho);
    san_1.genera_coord(largo,ancho);
    }
    if (nivel==2)
    {
    /*
    ===========================Enfermo===========================
    */
   float temp, peso, altura;
   int frec;
   cout<<"introduce temperatura, peso y altura"<<endl;
   cin>> temp>> peso >>altura;
   cout<<"introduce la frecuacia cardiaca"<<endl;
   cin>> frec;
   Enfermo enf_1(temp,frec,peso,altura);
    enf_1.print_datos(temp,frec,peso,altura);

        
    }
    if (nivel==3)
    {
    /*
    ===========================Bebe===========================
    */
   int tiempomama,mes_vida;
   bool estatus;
   cout<< "introduce tiempo con madre, mes de vida"<<endl;
   cin>>tiempomama>>mes_vida;
   estatus=false;
   Bebe bebe_1(tiempomama,mes_vida, estatus);
   cout<< bebe_1.get_mes();
   cout<< bebe_1.get_estatus();



    }   
return 0;
}