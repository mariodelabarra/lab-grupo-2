#ifndef ARCHIVOSPEDIDOS_H_INCLUDED
#define ARCHIVOSPEDIDOS_H_INCLUDED

#include "pedidos.h"

void cargarPedidosArchivo(stPedido arregloPedidos[], int dim, char rutaArthivo[]);
void obtenerPedidosDeArchivo(char rutaArchivo[], stPedido arregloPedidos[], int dim);


#endif // ARCHIVOSPEDIDOS_H_INCLUDED
