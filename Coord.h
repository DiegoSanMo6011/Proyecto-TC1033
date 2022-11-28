
#include <sstream>

using namespace std;

class Coord{
    private:
        int coordx, coordy;
    public:
        //constructores
        Coord(){
            coordx=0;coordy=0;
        }
        Coord(int x, int y){
            coordx=x, coordy=y;
        }
        string to_string();
};

/**
 * Almacena los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de Bebe
*/
string Coord::to_string(){
  stringstream aux;
  aux <<coordx<<", "<<coordy<<endl;
  return aux.str();
}
