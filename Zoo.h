/*
 * Proyecto TC1033
 * Diego Gerardo Sanchez Moreno
 * A01276011
 * 
 */

/*
 * Clase Zoo, maneja grupos de animal, divididos en 
 * Bebe, Sano y Bebe
 * 
 */

#ifndef ZOO_H
#define ZOO_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

#include "Bebe.h"
#include "Sano.h"
#include "Enfermos.h"

const int MAX = 50; //constante de tamano max de los arreglos

class Zoo{
    private:
        //Declara las variables de instancias
        Bebe bebe[MAX];
        Enfermo enfermo[MAX];
        Sano sano[MAX];
        int ibebe, ienf, isano;
    public:
        //Constructor
        Zoo(){
            ibebe = 0; ienf=0; isano=0;
        }
        void crea_ejemplo_bebe();
        void crea_ejemplo_enfermo();
        void crea_ejemplo_sano();
        void muestra_bebe();
        void muestra_enfermos();
        void muestra_sano();
        void gastos_bebe();
        void gastos_enfermo();
        void gastos_sano();
        void gastos_totales();
        void agrega_bebe(string habi, string esp, int mes, string vac);
        void agrega_enfermo(string habi, string esp,float temp, int frec, float pes, float alt,double gast);
        void agrega_sano(string habi, string esp,int largo, int ancho);
};

/**
 * Utliza el arreglo de tipo bebe.
 * Llena el arreglo con 2 ejemplos. Los identificadores de bebe
 * van de 1 a 50.
 * El id del ultimo bebe lo modifica hasta el ultimo creado.
 *
 * @param
 * @return
*/
void Zoo::crea_ejemplo_bebe(){
    bebe[0]= Bebe("sabana", ibebe, "Panthera leo",3,"no");
    bebe[1]= Bebe("glaciar", ibebe, "Ursus maritimus",5,"si");
    ibebe += 1;
}

/**
 * Utliza el arreglo de tipo enfermo.
 * Llena el arreglo con 2 ejemplos. Los identificadores de enfermo
 * van de 50 a 100.
 * El id del ultimo enfermo lo modifica hasta el ultimo creado.
 *
 * @param
 * @return
*/
void Zoo::crea_ejemplo_enfermo(){
    enfermo[0]= Enfermo("sabana", ienf, "Panthera leo",40.5,120, 90.5, 1.23,1500);
    enfermo[1]= Enfermo("glaciar", ienf, "Ursus Maritimus",45.2,115, 150, 2.34,2000);
    ienf += 1;
}

/**
 * Utliza el arreglo de tipo sano.
 * Llena el arreglo con 2 ejemplos. Los identificadores de enfermo
 * van de 100 a 150.
 * El id del ultimo enfermo lo modifica hasta el ultimo creado.
 *
 * @param
 * @return
*/
void Zoo::crea_ejemplo_sano(){
    sano[0]= Sano("sabana", isano, "Panthera leo",10,5);
    sano[1]= Sano("glaciar", isano, "Ursus Maritimus",12,32);
    isano += 1;
}

/**
 * Utiliza el arreglo bebe y su index.
 * Recorre todo el arreglo e imprimiendo objeto que
 * pertenezca a el.
 *
 * @param
 * @return
 */
void Zoo::muestra_bebe(){
    for(int i=1; i<=ibebe; i++){
        cout << bebe[i].to_string()<<"\n\n";
    }
}

/**
 * Utiliza el arreglo enfermo y su index.
 * Recorre todo el arreglo e imprimiendo objeto que
 * pertenezca a el.
 *
 * @param
 * @return
 */
void Zoo::muestra_enfermos(){
    for(int i=1; i<=ienf; i++){
        cout << enfermo[i].to_string()<<"\n\n";
    }
}

/**
 * Utiliza el arreglo sano y su index.
 * Recorre todo el arreglo e imprimiendo objeto que
 * pertenezca a el, tambien muestra
 *
 * @param
 * @return
 */
void Zoo::muestra_sano(){
    for(int i=1; i<=isano; i++){
        cout << sano[i].to_string()<<"\n\n";
    }
}
/**
 * Utiliza el arreglo bebe y su ultimo indice.
 * Almacena en una variable auxiliar la suma de los gastos de cada objeto
 * mientras los recorre.
 *
 * Imprime el total.
 *
 * @param
 * @return
*/
void Zoo::gastos_bebe(){
    double total=0.0;
    for(int i=0; i<= ibebe; i++){
        total = total+bebe[i].gastos();
    }
    cout<<total<<endl;
}

/**
 * Utiliza el arreglo enfermo y su ultimo indice.
 * Almacena en una variable auxiliar la suma de los gastos de cada objeto
 * mientras los recorre.
 *
 * Imprime el total.
 *
 * @param
 * @return
*/
void Zoo::gastos_enfermo(){
    double total=0.0;
    for(int i=0; i<= ienf; i++){
        total = total+enfermo[i].gastos();
    }
    cout<<total<<endl;
}

/**
 * Utiliza el arreglo sano y su ultimo indice.
 * Almacena en una variable auxiliar la suma de los gastos de cada objeto
 * mientras los recorre.
 *
 * Imprime el total.
 *
 * @param
 * @return
*/
void Zoo::gastos_sano(){
    double total=0.0;
    for(int i=0; i<= isano; i++){
        total = total+sano[i].gastos();
    }
    cout<<total<<endl;
}

/**
 * Utiliza lso arreglos: bebe y enfermo
 * Almacena en una variable auxiliar la suma de los gastos de cada arreglo
 *
 * Imprime el total.
 *
 * @param
 * @return
*/
void Zoo::gastos_totales(){
    double total=0.0;
    for(int i=0; i<= ibebe; i++){
        total = total+bebe[i].gastos();
    }
    for(int i=0; i<= ienf; i++){
    total = total+enfermo[i].gastos();
    }
    for(int i=0; i<= isano; i++){
        total = total+sano[i].gastos();
    }
    cout<<total<<endl;
}

/**
 * Utiliza arreglo de bebe y su ultimo indice.
 * Recibe el habitat, especie, mes de vida y estado de vacunacion
 * El metodo genera el nuevo id, crea el objeto Bebe y lo agrega al arreglo
 *
 * @param
 * @return
 */
void Zoo::agrega_bebe(string habi, string esp, int mes, string vac){
    ibebe +=  1;
    Bebe aux(habi, ibebe, esp, mes,vac);
    bebe[ibebe] = aux;
    
}

/**
 * Utiliza arreglo de enfermo y su ultimo indice.
 * Recibe el habitat, especie, temperatura, frecuencia cardiaca, peso, altura y gastos
 * El metodo genera el nuevo id, crea el objeto Enfermo y lo agrega al arreglo
 *
 * @param
 * @return
 */
void Zoo::agrega_enfermo(string habi, string esp,float temp, int frec, float pes, float alt,double gast){
    ienf +=  1;
    Enfermo aux(habi, ibebe+50, esp, temp, frec, pes, alt, gast);
    enfermo[ienf] = aux;
    
}


/**
 * Utiliza arreglo de sano y su ultimo indice.
 * Recibe el habitat, especie, temperatura, largo, ancho y dia
 * El metodo genera el nuevo id, crea el objeto Enfermo y lo agrega al arreglo
 *
 * @param
 * @return
 */
void Zoo::agrega_sano(string habi, string esp,int largo, int ancho){
    isano +=  1;
    Sano aux(habi, ibebe+100, esp, largo, ancho);
    sano[isano] = aux;
    
}

#endif //ZOO_H