#include "comic.h"
#include <string>
using namespace std;

//gets
comic::comic() {
	anioPublicacion = 0;
	precio = 0.0;
	nombre = "";
	autor = "";
	editorial = "";
	genero = "";
}

comic::comic(int anioPublicacion, double precio, string nombre, string autor, string editorial, string genero) {
	this->anioPublicacion = anioPublicacion;
	this->precio = precio;
	this->nombre = nombre;
	this->autor = autor;
	this->editorial = editorial;
	this->genero = genero;
}

//gets

int comic::getAnioPublicacion() {
	return anioPublicacion;
}

double comic::getPrecio() {
	return precio;
}

string comic::getNombre() {
	return nombre;
}

string comic::getAutor() {
	return autor;
}

string comic::getEditorial() {
	return editorial;
}

string comic::getGenero() {
	return genero;
}

//sets

void comic::setAnioPublicacion(int anioPublicacion) {
	this->anioPublicacion = anioPublicacion;
}

void comic::setPrecio(double precio) {
	this->precio = precio;
}

void comic::setNombre(string nombre) {
	this->nombre = nombre;
}

void comic::setAutor(string autor) {
	this->autor = autor;
}

void comic::setEditorial(string editorial) {
	this->editorial = editorial;
}

void comic::setGenero(string genero) {
	this->genero = genero;
}
