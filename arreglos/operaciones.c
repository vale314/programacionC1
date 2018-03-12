#include <stdio.h>
#include <stdlib.h>
#define tam 100

main(){
    int t, lista[tam], m,i,r;

    do{
    printf("Por favor ingrese el tamaño de la lista \n");
    scanf("%d",&t);
    system("cls");
    printf("1 For\n");
    printf("2 While\n");
    printf("3 Do While\n");
    scanf("%d",&m);
    system("cls");

    switch(m){
        case 1:
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }
            system("cls");

            printf("Posicion\t Elemento\t Operacion\n");
            for(i=0;i<t;i++){
                printf("%d\t\t\t",i);
                printf("%d\t\t",lista[i]);
                printf("%d",((lista[i]*5)+17)%2);
                printf("\n");
            }
        break;
        case 2:
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            system("cls");

            printf("Posicion\t Elemento\t Operacion\n");
            i=0;
            while(i<t){
                printf("%d\t\t\t",i);
                printf("%d\t\t",lista[i]);
                printf("%d",((lista[i]*5)+17)%2);
                printf("\n");
                i++;
            }
        break;
        case 3:
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            system("cls");

            printf("Posicion\t Elemento\t Operacion\n");
            i=0;
            do{
                printf("%d\t\t\t",i);
                printf("%d\t\t",lista[i]);
                printf("%d",((lista[i]*5)+17)%2);
                printf("\n");
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
