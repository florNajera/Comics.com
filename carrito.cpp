#include "carrito.h"
#include <string>
#include <array>
using namespace std;

//constructor
carrito::carrito() {
	comics.fill(comic());
}

carrito::carrito(array<comic, 100> comics) {
	this->comics = comics;
}

//gets

array<comic, 100> carrito::getComics() {
	return comics;
}

//sets

void carrito::setComics(array<comic, 100> comics) {
	this->comics = comics;
}

//metodos de la clase

void carrito::agregarComic(comic nuevoComic) { //agrega un comic al primer espacio vacio del arreglo
	for (int i = 0; i < comics.size(); i++) {
		if (comics[i].getNombre() == "") { // buscando el primer espacio vacio
			comics[i] = nuevoComic; // se agrega el comic que esta tomando como parametro
			break; // termina el ciclo
		}
	}
}

void carrito::eliminarComic(comic comicAEliminar) {
	for (int i = 0; i < comics.size(); i++) {
		if (comics[i].getNombre() == comicAEliminar.getNombre()) { // buscando el comic a eliminar (el que se introdujo como parametro)
			comics[i] = comic(); // se elimina el comic asignandole un comic vacio (usa el constructor por defecto)
			break; // termina el ciclo
		}
	}
}

double carrito::calcularTotal() {
	double total = 0.0;
	for (int i = 0; i < comics.size(); i++) { // el comics.size devuelve el tamaño del arreglo (o sea 100)
		if (comics[i].getNombre() != "") { // solo suma los comics que no estan vacios (para optimizar el proceso y evitar sumar comics vacios)
			total += comics[i].getPrecio(); // suma el precio del comic al total
		}
	}
	return total; // devuelve el total
}
