#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#define CAMPOS_EDITABLES 7

typedef struct
{
int idCliente; // auto incremental
char nombre[30];
char apellido[30];
char userName[20];
char password[20];
char mail[30];
char genero;
int rol;     // 1: es admin - 0: es com�n
int activo; // indica 1 o 0 si el cliente est� activo
} stCliente;

typedef struct
{
    stCliente * clientes;
    int numClientes;
} arrClientes;

void altaCliente(arrClientes *arreglo);
void bajaCliente(arrClientes *arreglo, int idCliente);
void modificacionCliente(arrClientes *arreglo, int idCliente);
void consultaCliente(arrClientes *arreglo, int idCliente);
void listadoCliente(arrClientes *arreglo);

int buscarPosicionCliente(arrClientes arregloClientes, int idCliente);
stCliente leerCamposAEditar(stCliente cliente);

#endif // CLIENTE_H_INCLUDED
