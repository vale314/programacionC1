#include <stdio.h>
#include <stdlib.h>

struct{
    char nombre[20], departamento[20], puesto[20];
    int hrsT;
    float costoHr, sueldoB, impuestos, total;
} trabajador[100];



main(){
    int i,num;
    printf("Usuarios a registrar\n");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        system("cls");
        printf("Ingresa el Nombre\n");
        fflush(stdin);
        gets(trabajador[i].nombre);
        printf("Ingresa el Departamento\n");
        fflush(stdin);
        gets(trabajador[i].departamento);
        printf("Ingresa el puesto\n");
        fflush(stdin);
        gets(trabajador[i].puesto);

        printf("Ingrese las horas trabajadas\n");
        scanf("%d",&trabajador[i].hrsT);
        printf("Ingrese El costo de hora\n");
        scanf("%f",&trabajador[i].costoHr);

        printf("\n");
        trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
        trabajador[i].impuestos=trabajador[i].sueldoB*.30;
        trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
    }
    system("cls");
    for(i=0;i<num;i++){
        printf("El Nombre es %s\n",trabajador[i].nombre);
        printf("El Departamento es %s\n",trabajador[i].departamento);
        printf("El Puesto es %s\n",trabajador[i].puesto);
        printf("Las Horas son %d\n",trabajador[i].hrsT);
        printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
        printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
        printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
        printf("El Sueldo Total es %.2f\n",trabajador[i].total);

        printf("\n\n");
    }
}
