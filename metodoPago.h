#pragma once
#include <string>
#include <array>
using namespace std;

class metodoPago {
private:
	string tipoTarjeta;
	string numeroTarjeta;
	string CVV;
	array<int, 2> fechaExpiracion;
	string nombreTitular;
public:
	//constructor
	metodoPago();
	metodoPago(string, string, string, array<int, 2>, string);
	//gets
	string getTipoTarjeta();
	string getNumeroTarjeta();
	string getCVV();
	array<int, 2> getFechaExpiracion();
	string getNombreTitular();
	//sets
	void setTipoTarjeta(string);
	void setNumeroTarjeta(string);
	void setCVV(string);
	void setFechaExpiracion(array<int, 2>);
	void setNombreTitular(string);
};
