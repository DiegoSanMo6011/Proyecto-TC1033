/*
* Diego Gerardo Sánchez Moreno A01276011

* Clase Sano que:
* Atributos: tamanohabitat, coordx, coordy
* Metodos: getters(), setters(), coordenadacom()
* Constructor

*/
#include <string>

using namespace std;

class Sano{

private:
  /*
  ==========================Atributos==========================
  */
 int anchohabitat;
 int largohabitat;


public:
  /*
  ==========================Constructores==========================
  */
  Sano(): largohabitat(), anchohabitat(){};//define los valores deafault
  Sano(int largo, int ancho): largohabitat(largo),anchohabitat(ancho){};
  /*==========================Guetters==========================*/
  int get_largo();
  int get_ancho();
  int get_dia();
  /*
  ==========================Setters==========================
  */
  void set_largo(int);
  void set_ancho(int);
  /*
  ==========================Funciones==========================
  */
  void genera_coord(int,int);
 

};

  /*
  ==============guetters=============
  */

  int Sano::get_largo(){
    return largohabitat;
  }
  int Sano::get_ancho(){
    return anchohabitat;
  }
  

  /*
  ==============setters=============
  */
  void Sano::set_largo(int largo){
    largohabitat=largo;
  }
  void Sano::set_ancho(int ancho){
    anchohabitat=ancho;
  }


  /*
  ==============generar coordenadas=============
  */
  void Sano::genera_coord(int largo, int ancho){
    int mat[largo][ancho];
    for (int i=0; i<largo;i++){
      for (int j=0; i<ancho;i++)
        mat[i][j]=j;
    }
  }


