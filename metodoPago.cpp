#include "metodoPago.h"
#include <string>
#include <array>
using namespace std;

//constructor
metodoPago::metodoPago() {
	tipoTarjeta = "";
	numeroTarjeta = "";
	CVV = "";
	fechaExpiracion = { 0, 0 };
	nombreTitular = "";
}

metodoPago::metodoPago(string tipoTarjeta, string numeroTarjeta, string CVV, array<int, 2> fechaExpiracion, string nombreTitular) {
	this->tipoTarjeta = tipoTarjeta;
	this->numeroTarjeta = numeroTarjeta;
	this->CVV = CVV;
	this->fechaExpiracion = fechaExpiracion;
	this->nombreTitular = nombreTitular;
}

//gets

string metodoPago::getTipoTarjeta() {
	return tipoTarjeta;
}

string metodoPago::getNumeroTarjeta() {
	return numeroTarjeta;
}

string metodoPago::getCVV() {
	return CVV;
}

array<int, 2> metodoPago::getFechaExpiracion() {
	return fechaExpiracion;
}

string metodoPago::getNombreTitular() {
	return nombreTitular;
}

//sets

void metodoPago::setTipoTarjeta(string tipoTarjeta) {
	this->tipoTarjeta = tipoTarjeta;
}

void metodoPago::setNumeroTarjeta(string numeroTarjeta) {
	this->numeroTarjeta = numeroTarjeta;
}

void metodoPago::setCVV(string CVV) {
	this->CVV = CVV;
}

void metodoPago::setFechaExpiracion(array<int, 2> fechaExpiracion) {
	this->fechaExpiracion = fechaExpiracion;
}

void metodoPago::setNombreTitular(string nombreTitular) {
	this->nombreTitular = nombreTitular;
}
