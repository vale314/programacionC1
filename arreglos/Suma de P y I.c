/*R.O Valentin Alejandro
    F:13/03/18
    DP:Suma de Pares E Impares
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 100

main(){
    int t, lista[tam], m, i, r, par, impar, parC, imparC;
    do{

    system("cls");
    printf("\tSuma de Pares E Impares\n");
    printf("1 For\n");
    printf("2 While\n");
    printf("3 Do While\n");
    scanf("%d",&m);
    system("cls");
    parC=0;
    imparC=0;
    par=0;
    impar=0;
    switch(m){
        case 1:
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }

            for(i=0;i<t;i++){
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }

            }

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
        break;
        case 2:
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            i=0;
            while(i<t){
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }
                i++;
            }

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            break;
            case 3:
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            i=0;
            do{
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }
                i++;
            }while(i<t);

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            break;


            default:
                printf("Por favor selecione una opcion correcta\n");

    }
    printf("\nDesea repetir 1\n");
    scanf("%d",&r);
    system("cls");

    }
    while(r == 1);

}
