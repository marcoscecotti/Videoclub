#include "../Videoclub/Renta.h"

using namespace std;

class Singleton:public Renta {
	static Singleton *instancia;
	Singleton():Renta() {};
public:
	static Singleton *ObtenerInstancia() {
		if (!instancia){
			instancia=new Singleton();
		}
		return instancia;
	}
};
