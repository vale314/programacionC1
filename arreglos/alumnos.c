/*R.O Valentin Alejandro
    F:13/03/18
    DP:Alumnos
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 100

main(){
    int t, lista[tam],m,i,r,prome,repro,aprob;
    do{
    system("cls");
    printf("\tPromedio de alumnos\n");
    printf("1 For\n");
    printf("2 While\n");
    printf("3 Do While\n");
    scanf("%d",&m);
    system("cls");
    repro=0;
    aprob=0;
    prome=0;
    switch(m){
        case 1:
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Calificacion %d ",i+1);
                scanf("%d",&lista[i]);
            }
            system("cls");
            for(i=0;i<t;i++){
                prome=lista[i]+prome;
            }
            prome=prome/t;
            printf("\tAlumnos\n");
            printf("Reprobados\t Aprobados\n");
            for(i=0;i<t;i++){
                if(lista[i] < 70){
                    printf("%d",lista[i]);
                    repro++;
                }
                printf("\t\t\t");
                if(lista[i] >= prome && lista[i] >=70){
                    printf("%d", lista[i]);
                    aprob++;
                }
                printf("\n");
            }

            printf("\n");
            printf("Cantidad de Reprobados: %d\n",repro);
            printf("Cantidad de Aprobados: %d\n",aprob);
            printf("Promedio: %d\n",prome);
        break;
        case 2:
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Calificacion %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            system("cls");
            i=0;
            while(i<t){
                prome=lista[i]+prome;
                i++;
            }
            prome=prome/t;
            printf("\tAlumnos\n");
            printf("Reprobados\t Aprobados\n");
            i=0;
            while(i<t){
                if(lista[i] < 70){
                    printf("%d",lista[i]);
                    repro++;
                }
                printf("\t\t\t");
                if(lista[i] >= prome && lista[i] >=70){
                    printf("%d", lista[i]);
                    aprob++;
                }
                printf("\n");
                i++;
            }

            printf("\n");
            printf("Cantidad de Reprobados: %d\n",repro);
            printf("Cantidad de Aprobados: %d\n",aprob);
            printf("Promedio: %d\n",prome);
        break;
        case 3:
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Calificacion %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            system("cls");
            i=0;
            do{
                prome=lista[i]+prome;
                i++;
            }while(i<t);
            prome=prome/t;
            printf("\tAlumnos\n");
            printf("Reprobados\t Aprobados\n");
            i=0;
            do{
                if(lista[i] < 70){
                    printf("%d",lista[i]);
                    repro++;
                }
                printf("\t\t\t");
                if(lista[i] >= prome && lista[i] >=70){
                    printf("%d", lista[i]);
                    aprob++;
                }
                printf("\n");
                i++;
            }while(i<t);

            printf("\n");
            printf("Cantidad de Reprobados: %d\n",repro);
            printf("Cantidad de Aprobados: %d\n",aprob);
            printf("Promedio: %d\n",prome);
        break;
        default:
                printf("Por favor selecione una opcion correcta\n");

    }
    printf("Desea repetir 1\n");
    scanf("%d",&r);
    system("cls");

    }
    while(r == 1);

}
