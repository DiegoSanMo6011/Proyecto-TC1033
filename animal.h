/*
 * Proyecto TC1033
 * Diego Gerardo Sanchez Moreno
 * A01276011
 * 
 */

/*
 * Clase Animal contiene los datos genericos de todos los animales
 * y tiene 3 clases hijas que son especializaciones de animal:
 * Sano, Enfermo y Bebe
 *
 */
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <sstream>

using namespace std;

//definicion de la clase animal que es abstracta
class Animal{
    protected:
        string habitat;
        int identificacion;
        string especie;
    public:
        //definicion de constructor
        Animal(){
            habitat = ""; identificacion = 0; especie = "";
        }
        Animal(string habi, int id, string esp){
            habitat=habi;
            identificacion=id;
            especie=esp;
        }
        //metodos
        string to_string()const;
        virtual double gastos()=0;
        string get_habitat();
        int get_identificacion();
        string get_especie();
        void set_habitat(string);
        void set_identificacion(int);
        void set_especie(string); 
};

/**
 * getter habitat
 *
 * @param
 * @return string habitat
*/
string Animal::get_habitat(){
    return habitat;
}
/**
 * getter identificacion
 *
 * @param
 * @return string identificacion
*/
int Animal::get_identificacion(){
    return identificacion;
}
/**
 * getter especie
 * @param
 * @return string especie
*/
string Animal::get_especie(){
    return especie;
}

/**
 * Almacena los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de animal
*/
string Animal::to_string()const{

    stringstream aux;
    aux << "El habitat es: " << habitat << "\nEl ID es: "<< identificacion 
    << "\nLa especie es: "<<especie<<"\n";
    return aux.str();

}
#endif //ANIMAL_H