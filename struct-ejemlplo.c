/* R.O Valentin Alejandro
    F: 04/02/18
    DP: estructura Basica
*/
#include <stdio.h>
#include <stdlib.h>


struct{
    char nombre[20], departamento[20], puesto[20];
    int hrsT;
    float costoHr, sueldoB, impuestos, total;
} trabajador;


main(){


    printf("Ingresa el Nombre\n");
    fflush(stdin);
    gets(trabajador.nombre);
    printf("Ingresa el Departamento\n");
    fflush(stdin);
    gets(trabajador.departamento);
    printf("Ingresa el puesto\n");
    fflush(stdin);
    gets(trabajador.puesto);

    printf("Ingrese las horas trabajadas\n");
    scanf("%d",&trabajador.hrsT);
    printf("Ingrese El costo de hora\n");
    scanf("%f",&trabajador.costoHr);

    trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
    trabajador.impuestos=trabajador.sueldoB*.30;
    trabajador.total=trabajador.sueldoB-trabajador.impuestos;

    printf("El Nombre es %s\n",trabajador.nombre);
    printf("El Departamento es %s\n",trabajador.departamento);
    printf("El Puesto es %s\n",trabajador.puesto);
    printf("Las Horas son %d\n",trabajador.hrsT);
    printf("El Costo de horas es %.2f\n",trabajador.costoHr);
    printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
    printf("Los Impuestos son %.2f\n",trabajador.impuestos);
    printf("El Sueldo Total es %.2f\n",trabajador.total);
}
