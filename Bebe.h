/*
 * Proyecto TC1033
 * Diego Gerardo Sanchez Moreno
 * A01276011
 * 
 */

/*
 * Clase Bebe hereda de clase animal y compone a Zoo
 */

#ifndef BEBE_H
#define BEBE_H

#include "animal.h"
#include <string>
#include <sstream>

using namespace std;

class Bebe: public Animal{

private:

  int mes_de_vida;
  string vacunado;

public:
  //definicion de contructores
  Bebe(){ 
    habitat = ""; identificacion = 0; especie = "";
  }
  Bebe(string habi, int id, string esp, int mes, string vac):Animal (habi,id,esp){
    mes_de_vida=mes;vacunado=vac;
  }
  //metodos
  string to_string();
  double gastos();

};

/**
 * Metodo que calcula el gasto que genera cada bebe
 *
 * @param
 * @return double gastos 
*/
double Bebe::gastos(){
  int gastos_total;
  gastos_total = mes_de_vida*1275.54;
  return gastos_total;
  
}

/**
 * Almacena los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de Bebe
*/
string Bebe::to_string(){
  stringstream aux;
  aux << "El habitat es: " << habitat << "\nEl ID es: "<< identificacion 
  << "\nLa especie es: "<<especie<<"\nSu mes de vid es: "<< mes_de_vida
  <<"\nEstado de vacunacion: "<<vacunado<<"\nLos gastos por mes es de: "<<gastos()<<endl;
  return aux.str();
}


#endif //BEBE_H