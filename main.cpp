/*

/*
 * Proyecto TC1033
 * Diego Gerardo Sanchez Moreno
 * A01276011
 * 
 */

/**
 * Descripcion este es un proyecto para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que captura
 * diferentes tipos de Animal con sus respectivos atributos, y nos
 * permite los gastos totles de cada tipo de animal y por todos los aimales,
 * a su vez nos permite mostrar datos especificos de cada tipo de animal 
 */

//bibliotecas
#include <iostream>
#include <string>

#include "Zoo.h"
#include "Bebe.h"
#include "Enfermos.h"

using namespace std;

//funcion que imprime el menu
void menu(){
    cout<<"\nMenu: \n"<<endl;
    cout<<"1. Muestra animales bebes.\n";
    cout<<"2. Muestra animales enfermos.\n";
    cout<<"3. Muestra animales sano.\n";
    cout<<"4. Calcular gastos de los animales bebes.\n";
    cout<<"5. Calcular gastos de los animales enfermos.\n";
    cout<<"6. Calcular gastos de los animales sanos.\n";
    cout<<"7. Calcular gastos de todos los animales.\n";
    cout<<"8. Agregar animal bebe.\n";
    cout<<"9. Agregar animal enfermo.\n";
    cout<<"10. Agregar animal sano.\n";
    cout<<"11. Salir\n"<<endl;
}

int main(){
    
    Zoo zoo;//Crear objeto Zoologico
    zoo.crea_ejemplo_bebe();
    zoo.crea_ejemplo_enfermo();
    zoo.crea_ejemplo_sano();

    int opcion=0;
    int temp_mes;
    int temp_freccard;  
    int temp_largo, temp_ancho;
    float temp_temperatura, temp_peso, temp_altura;
    double temp_gasto;
    string temp_habitat, temp_vacunado;
    char temp_especie[100]="";
    //Ciclo para que siga corriendo el codigo hasta que el ususario elija salir.
    while(opcion < 11 && opcion > -1){
        //imprimir menu
        menu();
        cin>>opcion;
        //switch que realiza metodo dependiendo de opcion
        switch(opcion){
            //Caso 1 que imprime los Animales de tipo Bebe
            case 1:
                zoo.muestra_bebe();
                break;
            //Caso 2 que imprime los Animales de tipo Enfermo
            case 2:
                zoo.muestra_enfermos();
                break;
            //Caso 3 que imprime los Animales de tipo Sano
            case 3:
                zoo.muestra_sano();
                break;
            //caso 4que calcula los gastos de los animales de tipo Bebe
            case 4:
                zoo.gastos_bebe();
                break;
            //caso 5 que calcula los gastos de los animales de tipo Enfermo
            case 5:
                zoo.gastos_enfermo();
                break;
            //caso 6 que calcula los gastos de los animales de tipo Sano
            case 6:
                zoo.gastos_sano();
                break;
            //caso 7 que calcula los gastos totales
            case 7:
                zoo.gastos_totales();
                break;
            //caso 8 que agrega un objeto de Bebe a su arreglo
            case 8:
                cout << "Dime el habitat " << endl;
                cin >> temp_habitat;
                cout << "Dime especie" << endl;
                cin.ignore();
                cin.getline(temp_especie,100);
                cout << "Dime mes de vida" << endl;
                cin >> temp_mes;
                cout << "Dime si esta vacunado o no"<<endl;
                cin >> temp_vacunado;
                zoo.agrega_bebe(temp_habitat,temp_especie,temp_mes, temp_vacunado);
                break;
            //caso 9 que agrega un objeto de Enfermo a su arreglo
            case 9:
                cout << "Dime el habitat " << endl;
                cin >> temp_habitat;
                cout << "Dime la especie" << endl;
                cin.ignore();
                cin.getline(temp_especie,100);
                cout << "Dime la temperatura corporal " << endl;
                cin >> temp_temperatura;
                cout << "Dime la frecuencia cardiaca "<<endl;
                cin >> temp_freccard;
                cout << "Dime el peso "<<endl;
                cin >> temp_peso;
                cout << "Dime la altura "<<endl;
                cin >> temp_altura;
                cout << "Dime los gastos "<<endl;
                cin >> temp_gasto;
                zoo.agrega_enfermo(temp_habitat,temp_especie,temp_temperatura, temp_freccard, temp_peso, temp_altura, temp_gasto);
                break;
            //caso 10 que agrega un objeto de Enfermo a su arreglo
            case 10:
                cout << "Dime el habitat " << endl;
                cin >> temp_habitat;
                cout << "Dime la especie" << endl;
                cin.ignore();
                cin.getline(temp_especie,100);
                cout<<"Dime el largo del habitat: "<< endl;
                cin >> temp_largo;
                cout<<"Dime el ancho del habitat: "<<endl;
                cin >> temp_ancho;
                zoo.agrega_sano(temp_habitat,temp_especie,temp_largo,temp_ancho);
                break;

        }       
    }
return 0;
}