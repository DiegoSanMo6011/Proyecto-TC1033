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
#include "Leones.h"
#include "Tigre.h"
#include "Jaguares.h"
/*
===========================Main===========================
*/
int main(){
    //variables
    int edad, tiempo;
    float tam, comida, agua;
    int nivel;
    //estatuto if
    cout<<"Teclea:\n 1. Leones\n 2. Tigres\n 3. Jaguares"<<endl;
    cin>>nivel;
    if (nivel==1)
    {
    /*
    ===========================Leones===========================
    */

        //inputs
        cout<<"Teclea la edad del leon"<<endl;
        cin>>edad;
        cout<<"Teclea el tamano del leon"<<endl;
        cin>>tam;
        cout<<"Teclea la cantidad de comida \ncon la que cuenta el leon"<<endl;
        cin>>comida;
        cout<<"Teclea la cantidad de agua \ncon la que cuenta el leon"<<endl;
        cin>>agua;
        cout<<"Teclea el numero de dias transcurridos"<<endl;
        cin>>tiempo;
         //declaracion de objeto
        Leon leon_1(edad,tam,comida,agua);
        leon_1.aliemento_restante(tiempo);
        //outputs
        cout<<"La comida restante despues de "<<tiempo<<" dias es:"<<endl;
        cout<<leon_1.get_com()<<endl;
        leon_1.agua_restante(tiempo);
        cout<<"El agua restante despues de "<<tiempo<<" dias es:"<<endl;
        cout<<leon_1.get_agua()<<endl;
    }
    if (nivel==2)
    {
    /*
    ===========================Tigres===========================
    */
        //inputs
        cout<<"Teclea la edad del Tigre"<<endl;
        cin>>edad;
        cout<<"Teclea el tamano del Tigre"<<endl;
        cin>>tam;
        cout<<"Teclea la cantidad de comida \ncon la que cuenta el Tigre"<<endl;
        cin>>comida;
        cout<<"Teclea la cantidad de agua \ncon la que cuenta el Tigre"<<endl;
        cin>>agua;
        cout<<"Teclea el numero de dias transcurridos"<<endl;
        cin>>tiempo;
        //declaracion de objeto
        Tigre tigre_1(edad,tam,comida,agua);
        tigre_1.aliemento_restante(tiempo);
        //outputs
        cout<<"La comida restante despues de "<<tiempo<<" dias es:"<<endl;
        cout<<tigre_1.get_com()<<endl;
        tigre_1.agua_restante(tiempo);
        cout<<"El agua restante despues de "<<tiempo<<" dias es:"<<endl;
        cout<<tigre_1.get_agua()<<endl;
    }
    if (nivel==3)
    {
    /*
    ===========================Jaguares===========================
    */
        //inputs
        cout<<"Teclea la edad del Jaguar"<<endl;
        cin>>edad;
        cout<<"Teclea el tamano del Jaguar"<<endl;
        cin>>tam;
        cout<<"Teclea la cantidad de comida \ncon la que cuenta el Jaguar"<<endl;
        cin>>comida;
        cout<<"Teclea la cantidad de agua \ncon la que cuenta el Jaguar"<<endl;
        cin>>agua;
        cout<<"Teclea el numero de dias transcurridos"<<endl;
        cin>>tiempo;
        //declaracion de objeto
        Jaguar jaguar_1(edad,tam,comida,agua);
        jaguar_1.aliemento_restante(tiempo);
        //outputs
        cout<<"La comida restante despues de "<<tiempo<<" dias es:"<<endl;
        cout<<jaguar_1.get_com()<<endl;
        jaguar_1.agua_restante(tiempo);
        cout<<"El agua restante despues de "<<tiempo<<" dias es:"<<endl;
        cout<<jaguar_1.get_agua()<<endl;
    }   
return 0;
}