/*
* Diego Gerardo Sánchez Moreno A01276011

* Clase Enfermos que:
* Atributos: temp, freccard, peso, altura
* Metodos: getters(), setters(), print_datos(temp, freccard, peso, altura)
* Constructor

*/
#include <iostream>
using namespace std;
class Enfermo{

private:
  /*
  ==========================Atributos==========================
  */
  float temp;
  int freccard;
  float peso;
  float altura;
  

public:
  /*
  ==========================Constructores==========================
  */
  Enfermo(): temp(0.0), freccard(0), peso(0.0), altura(0.0){};//define los valores deafault
  Enfermo(float temperatura, int frec, float pes, float alt): temp(temperatura), freccard(frec), peso(pes), altura(alt){};
  /*==========================Guetters==========================*/
  float get_temp();
  int get_freccard();
  float get_peso();
  float get_altura();
  /*
  ==========================Setters==========================
  */
  void set_temp(float);
  void set_freccard(int);
  void set_peso(float);
  void set_altura(float);
  /*
  ==========================Funciones==========================
  */
  void print_datos(float, int, float, float);

};

  /*
  ==============guetters=============
  */
  float Enfermo::get_temp(){
    return temp;
  }
  int Enfermo::get_freccard(){
    return freccard;
  }
  float Enfermo::get_peso(){
    return peso;
  }
  float Enfermo::get_altura(){
    return altura;
  }
  /*
  ==============setters=============
  */
  void Enfermo::set_temp(float temperatura){
    temp=temperatura;
 }
  void Enfermo::set_freccard(int frec){
    freccard=frec;
 }
  void Enfermo::set_peso(float pes){
    peso=pes;
 }
  void Enfermo::set_altura(float alt){
    altura=alt;
 }

  /*
  ==============imrpimir datos=============
  */
  void Enfermo::print_datos(float temp, int freccard, float peso, float altura){
    cout<<"La temperatura del animal es: "<<temp<<endl;
    cout<<"La frecuencia cardiaca del animal es: "<<freccard<<endl;
    cout<<"El peso del animal es: "<<peso<<endl;
    cout<<"La altura del animal es: "<<altura<<endl;
  }

