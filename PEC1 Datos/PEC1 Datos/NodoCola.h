#pragma once
#include "Cliente.h"

class nodo
{
public://atributos
	Cliente infoCliente;
	nodo *siguiente;//puntero al siguiente elemento de tipo nodoCola	

public:
	nodo();
	nodo(Cliente v);
	~nodo();
	Cliente getCliente();//te da la informacion del Cliente

};
