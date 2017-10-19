#include "stdafx.h"
#include "Cliente.h"
#include <string>


Cliente::Cliente(int hora_compra, int tiempo_compra, string DNI, string identificador, bool registrado)
{
	this->hora_comrpra = hora_compra;
	this->tiempo_compra = tiempo_compra;
	this->DNI = DNI;
	this->identificador = identificador;
	this->registrado = registrado;

}
Cliente::~Cliente()
{
}

string Cliente::getDNI()
{
	return DNI;
}
string Cliente::getIdentificador()
{
	return identificador;
}
int Cliente::getHoraCompra()
{
	return hora_comrpra;
}
int Cliente::getTiempoCompra()
{
	return tiempo_compra;
}