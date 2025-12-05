//usuario.h
#pragma once
#include <string>
#include <array> //para que funcione el array
using namespace std;

class usuario {
private:
	std::array<int, 3> fechaDeNacimiento; //para que funcione el array, en forma dia, mes, anio
	string nombreUsuario;
	string contrasenia;
	string correoElectronico;
	string direccion;
public:
	//constructor
	usuario();
	usuario(array<int, 3>, string, string, string, string);
	//gets
	array<int, 3> getFechaDeNacimiento();
	string getNombreUsuario();
	string getContrasenia();
	string getCorreoElectronico();
	string getDireccion();
	//sets
	void setFechaDeNacimiento(array<int, 3>);
	void setNombreUsuario(string);
	void setContrasenia(string);
	void setCorreoElectronico(string);
	void setDireccion(string);
	//metodos de la clase
	bool iniciarSesion(string, string);
};
