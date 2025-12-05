#include "usuario.h"
#include <string>
#include <array>
#include <iostream>
using namespace std;

//constructor
usuario::usuario() {
	fechaDeNacimiento = { 0,0,0 };
	nombreUsuario = "";
	contrasenia = "1234";
	correoElectronico = "";
	direccion = "";
}

usuario::usuario(array<int, 3> fechaDeNacimiento, string nombreUsuario, string contrasenia, string correoElectronico, string direccion) {
	this->fechaDeNacimiento = fechaDeNacimiento;
	this->nombreUsuario = nombreUsuario;
	this->contrasenia = contrasenia;
	this->correoElectronico = correoElectronico;
	this->direccion = direccion;
}

array<int, 3> usuario::getFechaDeNacimiento() {
	return fechaDeNacimiento;
}

string usuario::getNombreUsuario() {
	return nombreUsuario;
}

string usuario::getContrasenia() {
	return contrasenia;
}

string usuario::getCorreoElectronico() {
	return correoElectronico;
}

string usuario::getDireccion() {
	return direccion;
}

//sets

void usuario::setFechaDeNacimiento(array<int, 3> fechaDeNacimiento) {
	this->fechaDeNacimiento = fechaDeNacimiento;
}

void usuario::setNombreUsuario(string nombreUsuario) {
	this->nombreUsuario = nombreUsuario;
}

void usuario::setContrasenia(string contrasenia) {
	this->contrasenia = contrasenia;
}

void usuario::setCorreoElectronico(string correoElectronico) {
	this->correoElectronico = correoElectronico;
}

void usuario::setDireccion(string direccion) {
	this->direccion = direccion;
}

bool usuario::iniciarSesion(string nombreUsuario, string contrasenia) {
	string intentoContrasenia;

	// El ciclo empieza aquí
	while (true) {
		cout << "Cual es su contrasenia?" << endl;
		cin >> intentoContrasenia;

		if (intentoContrasenia == contrasenia) {
			cout << "Ha iniciado sesion." << endl;
			return true;
		}
		else {
			cout << "Contrasenia incorrecta. Intentelo de nuevo." << endl;
		}
	}
}
