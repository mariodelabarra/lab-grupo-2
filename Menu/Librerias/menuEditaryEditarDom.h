#ifndef MENUEDITARYEDITARDOM_H_INCLUDED
#define MENUEDITARYEDITARDOM_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void menuEditar(){
    int opcion;
    do{
        system("cls");
        printf("\n\t\t\t\t\t\t\tAGREGAR NUEVO USUARIO\n");
        printf("\n=======================================================================================================================");
        printf("\n<1> NOMBRE");
        printf("\n<2> APELLIDO");
        printf("\n<3> DNI");
        printf("\n<4> EMAIL");
        printf("\n<5> DOMICILIO");
        printf("\n<0> REGRESAR\n");

        printf("\nINGRESE UNA OPCION: ");
        scanf("%d", &opcion);
        switch(opcion){
        case 1:

            break;

        case 2:

            break;

        case 3:

            break;

        case 4:

            break;

        case 5:
            menuEditarDomicilio();
            break;

        case 6:

            break;

        case 0:

            break;
        }

    }while(opcion!=0);
}

void menuEditarDomicilio(){
    int opcion;
    do{
        system("cls");
        printf("\n\t\t\t\t\t\t\tDATOS DEL DOMICILIO\n");
        printf("\n=======================================================================================================================");
        printf("\n<1> CIUDAD");
        printf("\n<2> CALLE");
        printf("\n<3> NUMERACION");
        printf("\n<4> PISO");
        printf("\n<5> DEPARTAMENTO");
        printf("\n<0> REGRESAR\n");

        printf("\nINGRESE UNA OPCION: ");
        scanf("%d", &opcion);
        switch(opcion){
        case 1:

            break;

        case 2:

            break;

        case 3:

            break;

        case 4:

            break;

        case 5:

            break;

        case 0:

            break;
        }

    }while(opcion!=0);
}

#endif // MENUEDITARYEDITARDOM_H_INCLUDED
