/*
* Diego Gerardo Sánchez Moreno A01276011

* Clase Jaguares que:
* Atributos: edad, tam, comida, agua
* Metodos: getters(), setters(), comida(tiempo), agua(tiempo)
* Constructor

*/
class Jaguar{

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
  Jaguar(): edad(0), tam(0.0), comida(0.0), agua(0.0){};//define los valores deafault
  Jaguar(int ed, float ta, float com, float agu): edad(ed), tam(ta), comida(com), agua(agu){};
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

  int Jaguar::get_edad(){
    return edad;
  }
  float Jaguar::get_tam(){
  return tam;
  }
  float Jaguar::get_com(){
  return comida;
  }
  float Jaguar::get_agua(){
  return agua;
  }

  /*
  ==============setters=============
  */
  void Jaguar::set_edad(int ed){
    edad=ed;
  }
  void Jaguar::set_tam(float ta){
    tam=ta;
  }
  void Jaguar::set_com(float com){
    comida=com;
  }
  void Jaguar::set_agua(float agu){
    agua=agu;
  }

  /*
  ==============comida=============
  */
  void Jaguar::aliemento_restante(int tiempo){
    int i=1;
    while (i< tiempo){
      comida = comida-1.5;
      i++;
    }
  }
  /*
  ==============agua=============
  */
  void Jaguar::agua_restante(int tiempo){
    int i=1;
    while (i< tiempo){
      agua = (agua)-(20);
      i++; 
    }
  }
