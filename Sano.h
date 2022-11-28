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
#include "Coord.h"
#include <string>


using namespace std;

class Sano:public Animal{

private:

 int anchohabitat;
 int largohabitat;
 int dias;
 int x[100];
 int y[100];
 Coord coord[100];
 int ix, iy, icoord;
 double gasto;
public:
  //defincion de constructores
  Sano(){
    habitat = ""; identificacion = 0; especie = ""; ix=0; iy=0;
    }
  Sano(string habi, int id, string esp,int largo, int ancho, int day):Animal (habi,id,esp){
    largohabitat=largo;anchohabitat=ancho, dias=day;
    }
  //metodos
  string to_string();
  double gastos();
  void genera_coord();
  void agrega();
  void muestra_coord();

};

/**
 * Metodo que genera coordenadas dependiendo del largo y el ancho
 * y los agrega a el arreglo de "x" y al arreglo de "y"
 * 
 * @param
 * @return 
*/
void Sano::genera_coord(){
  for (int i=0;i<largohabitat;i++){
      x[i]=ix;
      ix=i++;
  }
  for (int i=0;i<anchohabitat;i++){
      y[i]=iy;
      iy=i++;
  }
}

/**
 * Utiliza arreglo de coord y su ultimo indice.
 * 
 * crea el objeto Coord y lo agrega al arreglo
 *
 * @param
 * @return
 */
void Sano::agrega(){

  for (int i=0;i<dias;i++){
    icoord += 1;
    Coord aux(x[i],y[i]);
    coord[icoord]=aux;

  }
}

/**
 * Utiliza el arreglo coord y su index.
 * Recorre todo el arreglo e imprime el objeto que
 * pertenezca a el, tambien muestra
 *
 * @param
 * @return
 */
void Sano::muestra_coord(){
  for (int i=0; i<=icoord; i++){
    cout<< coord[i].to_string()<<"\n\n";
  }

}

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
  << "\nLa especie es: "<<especie <<"\nLos gastos por mes es de: "<<gastos()<<endl;
  return aux.str();
}



