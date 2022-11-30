/*
 * Proyecto TC1033
 * Diego Gerardo Sanchez Moreno
 * A01276011
 * 
 */

/*
 * Clase Sano hereda de clase animal y compone a Zoo, ademas es compuesto por coord
 */

#include "animal.h"
#include <string>


using namespace std;

class Sano:public Animal{

private:

 int anchohabitat;
 int largohabitat;
 double gasto;
public:
  //defincion de constructores
  Sano(){
    habitat = ""; identificacion = 0; especie = "";
    }
  Sano(string habi, int id, string esp,int largo, int ancho):Animal (habi,id,esp){
    largohabitat=largo;anchohabitat=ancho;
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
double Sano::gastos(){
  gasto=1100;
  return gasto;
}

/**
 * Almacena los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de Enfermo
*/
string Sano::to_string(){
  stringstream aux;
  aux << "El habitat es: " << habitat << "\nEl ID es: "<< identificacion 
  << "\nLa especie es: "<<especie <<"\nEl largo del habitat es:"<<largohabitat
  <<"\nEl ancho del habitat es: "<<anchohabitat<<"\nLos gastos por mes es de: "<<gastos()<<endl;
  return aux.str();
}



