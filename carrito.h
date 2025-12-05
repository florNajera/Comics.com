#pragma once
#include "comic.h"
#include <array>
using namespace std;

class carrito {
private:
	array<comic, 100> comics;
public:
	//constructor
	carrito();
	carrito(array<comic, 100>);
	//gets
	array<comic, 100> getComics();
	//sets
	void setComics(array<comic, 100>);
	//metodos de la clase
	void agregarComic(comic);
	void eliminarComic(comic);
	double calcularTotal();
};
