#include <iostream>

using namespace std;

class Ejemplo
{
	int dato;
	public:
		void setDato(int d) {dato = d;}
		int getDato()  {return dato;}		
}

int main()
{
	Ejemplo rv;
	rv.setDato(10);
	Ejemplo lv = std::move(rv);
	cout<<lv.getDato();
	return 0;
}


