#include "stdafx.h"
#include "nodoCola.h"


nodo::nodo()
{

}

nodo::nodo(Cliente v)
{
	infoCliente = v;
	siguiente = NULL;
}

nodo::~nodo()
{
}

vehiculo nodo::getCliente()
{
	return infoCliente;

}
