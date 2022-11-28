/*
 * Proyecto TC1033
 * Diego Gerardo Sanchez Moreno
 * A01276011
 * 
 */

/*
 * Clase Enfermo hereda de clase animal y compone a Zoo
 */

#ifndef ENFERMOS_H
#define ENFERMOS_H

#include "animal.h"
#include <string>
#include <sstream>

using namespace std;

class Enfermo: public Animal{

private:

  float temperatura;
  int freccard;
  float peso;
  float altura;
  double gasto;
  
public:
  //definicion de constructores
  Enfermo(){ 
    habitat = ""; identificacion = 0; especie = "";
    }
  Enfermo(string habi, int id, string esp,float temp, int frec, float pes, float alt,double gast):Animal (habi,id,esp){
    temperatura=temp; freccard=frec; peso=pes; altura=alt; gasto=gast;
  }
  //metodos
  string to_string();
  double gastos();

};
/**
 * Metodo para acceder al dato de gastos
 * 
 * @param
 * @return double gastos
*/
double Enfermo::gastos(){
  return gasto;
}

/**
 * Almacena los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de Enfermo
*/
string Enfermo::to_string(){
  stringstream aux;
  aux << "El habitat es: " << habitat << "\nEl ID es: "<< identificacion 
  << "\nLa especie es: "<<especie<<"\nSu temperatura es: "<< temperatura
  <<"\nSu frecuencia cardiaca es: "<<freccard <<"\nSu peso es: "<< peso
  <<"\nSu altura es: "<<altura<<"\nLos gastos por mes es de: "<<gastos()<<endl;
  return aux.str();
}


#endif //BEBE_H


