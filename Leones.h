/*
* Diego Gerardo Sánchez Moreno A01276011

* Clase Leones que:
* Atributos: edad, tam, comida, agua
* Metodos: getters(), setters(), comida(tiempo), agua(tiempo)
* Constructor

*/
class Leon{

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
  Leon(): edad(0), tam(0.0), comida(0.0), agua(0.0){};//define los valores deafault
  Leon(int ed, float ta, float com, float agu): edad(ed), tam(ta), comida(com), agua(agu){};
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

  int Leon::get_edad(){
    return edad;
  }
  float Leon::get_tam(){
  return tam;
  }
  float Leon::get_com(){
  return comida;
  }
  float Leon::get_agua(){
  return agua;
  }

  /*
  ==============setters=============
  */
  void Leon::set_edad(int ed){
    edad=ed;
  }
  void Leon::set_tam(float ta){
    tam=ta;
  }
  void Leon::set_com(float com){
    comida=com;
  }
  void Leon::set_agua(float agu){
    agua=agu;
  }

  /*
  ==============comida=============
  */
  void Leon::aliemento_restante(int tiempo){
    int i=0;
    while (i< tiempo){
      comida = comida-7;
      i++;
    }
  }
  /*
  ==============agua=============
  */
  void Leon::agua_restante(int tiempo){
    int i=0;
    while (i< tiempo){
      agua = agua-30;
      i++; 
    }
  }
