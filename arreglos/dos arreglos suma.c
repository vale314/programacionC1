/*R.O Valentin Alejandro
    F:13/03/18
    DP:Suma de dos arreglos
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 100

main(){
    int t, lista[tam],lista2[tam], lista3[tam],m,i,r;
    do{
    system("cls");
    printf("\tDos arreglos suma\n");
    printf("1 For\n");
    printf("2 While\n");
    printf("3 Do While\n");
    scanf("%d",&m);
    system("cls");
    switch(m){
        case 1:
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
            }

            for(i=0;i<t;i++){
                lista3[i] = lista[i] + lista2[i];
            }

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            for(i=0;i<t;i++){
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
            }
        break;
        case 2:
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
                i++;
            }
            i=0;
            while(i<t){
                lista3[i] = lista[i] + lista2[i];
                i++;
            }

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            i=0;
            while(i<t){
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
                i++;
            }
        break;
        case 3:
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
                i++;
            }while(i<t);
            i=0;
            do{
                lista3[i] = lista[i] + lista2[i];
                i++;
            }while(i<t);

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            i=0;
            do{
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
                i++;
            }while(i<t);
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
