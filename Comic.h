#pragma once
#include <string>
using namespace std;

class comic {
private:
	int anioPublicacion;
	double precio;
	string nombre;
	string autor;
	string editorial;
	string genero;
public:
	//constructor
	comic();
	comic(int, double, string, string, string, string);
	//gets
	int getAnioPublicacion();
	double getPrecio();
	string getNombre();
	string getAutor();
	string getEditorial();
	string getGenero();
	//sets
	void setAnioPublicacion(int);
	void setPrecio(double);
	void setNombre(string);
	void setAutor(string);
	void setEditorial(string);
	void setGenero(string);
};
