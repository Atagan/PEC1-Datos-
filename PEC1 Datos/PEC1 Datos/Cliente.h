#pragma once

#include <string>
using namespace std;

class Cliente
{
private:
	string DNI,identificador;//¿Han de ser unicos?
	int hora_comrpra, tiempo_compra;
	bool registrado;//¿Es neceserio diferenciar si es registrado o no con un bool?

public:
	Cliente(int hora_comrpra, int tiempo_compra, string DNI, string identificador, bool registrado);
	~Cliente();
	string getDNI();
	string getIdentificador();
	int getHoraCompra();
	int getTiempoCompra();


};

