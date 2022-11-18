/*
* Diego Gerardo Sánchez Moreno A01276011

* Clase Bebe que:
* Atributos: tiempomama, mes_de_vida, estatus
* Metodos: getters(), setters(), estatus_vacunas(vacunas, estatus)
* Constructor

*/
#include <iostream>
using namespace std;
#include <string>
class Bebe{

private:
  /*
  ==========================Atributos==========================
  */
  int tiempomama;
  int mes_de_vida;
  bool estatus;

public:
  /*
  ==========================Constructores==========================
  */
  Bebe(): tiempomama(0),mes_de_vida(0), estatus(false){};//define los valores deafault
  Bebe(int tiempo, int mes, bool est): tiempomama(tiempo), mes_de_vida(mes), estatus(est){};
  /*==========================Guetters==========================*/
  int get_tiempo();
  int get_mes();
  bool get_estatus();
  /*
  ==========================Setters==========================
  */
  void set_tiempo(int);
  void set_mes(int);
  void set_estatus(bool);


};

  /*
  ==============guetters=============
  */
 int Bebe::get_tiempo(){
   return tiempomama;
 }
 int Bebe::get_mes(){
   return mes_de_vida;
 }
 bool Bebe::get_estatus(){
  return estatus;
 }

  /*
  ==============setters=============
  */
 void Bebe::set_tiempo(int tiempo){
  tiempomama=tiempo;
 }
  void Bebe::set_mes(int mes){
  mes_de_vida=mes;
 }
  void Bebe::set_estatus(bool est){
  estatus=est;
 }
