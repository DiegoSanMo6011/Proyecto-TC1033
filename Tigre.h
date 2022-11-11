/*
* Diego Gerardo Sánchez Moreno A01276011

* Clase Tigres que:
* Atributos: edad, tam, comida, agua
* Metodos: getters(), setters(), comida(tiempo), agua(tiempo)
* Constructor

*/
class Tigre{

private:
  /*
  ==========================Atributos==========================
  */
  int edad;
  float tam;
  float comida;
  float agua;

public:
  /*
  ==========================Constructores==========================
  */
  Tigre(): edad(0), tam(0.0), comida(0.0), agua(0.0){};//define los valores deafault
  Tigre(int ed, float ta, float com, float agu): edad(ed), tam(ta), comida(com), agua(agu){};
  /*==========================Guetters==========================*/
  int get_edad();
  float get_tam();
  float get_com();
  float get_agua();
  /*
  ==========================Setters==========================
  */
  void set_edad(int);
  void set_tam(float);
  void set_com(float);
  void set_agua(float);
  /*
  ==========================Funciones==========================
  */
  void aliemento_restante(int);
  void agua_restante(int);

};

  /*
  ==============guetters=============
  */

  int Tigre::get_edad(){
    return edad;
  }
  float Tigre::get_tam(){
  return tam;
  }
  float Tigre::get_com(){
  return comida;
  }
  float Tigre::get_agua(){
  return agua;
  }

  /*
  ==============setters=============
  */
  void Tigre::set_edad(int ed){
    edad=ed;
  }
  void Tigre::set_tam(float ta){
    tam=ta;
  }
  void Tigre::set_com(float com){
    comida=com;
  }
  void Tigre::set_agua(float agu){
    agua=agu;
  }

  /*
  ==============comida=============
  */
  void Tigre::aliemento_restante(int tiempo){
    int i=0;
    while (i< tiempo){
      comida = comida-18;
      i++;
    }
  }
  /*
  ==============agua=============
  */
  void Tigre::agua_restante(int tiempo){
    int i=0;
    while (i< tiempo){
      agua = agua-25;
      i++; 
    }
  }
