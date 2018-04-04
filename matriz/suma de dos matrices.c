/*R.O Valentin Alejandro
    F:13/03/18
    DP:Suma
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 3

main(){
    int a [tam] [tam],b [tam] [tam],c [tam] [tam], i, j,m,r;
    do{
    system("cls");
    printf("\tSuma De Matrices\n");
    printf("1 For\n");
    printf("2 While\n");
    printf("3 Do While\n");
    scanf("%d",&m);
    system("cls");

    switch(m){
        case 1:
            printf("Matriz 1\n");
             for(i=0;i<tam;i++){
               for(j=0;j<tam;j++){
                printf("\tfila %d\n",i+1);
                printf("Por favor el elemento %d \n ", j+1);
                scanf("%d",&a[i][j]);
                system("cls");
               }
            }

            system("cls");
            printf("Matriz 2\n");

            for(i=0;i<tam;i++){
               for(j=0;j<tam;j++){
                printf("\tfila %d\n",i+1);
                printf("Por favor el elemento %d \n ", j+1);
                scanf("%d",&b[i][j]);
                system("cls");
               }
            }

            system("cls");

            for(i=0;i<tam;i++){
               for(j=0;j<tam;j++){
                    c[i][j] = a[i][j] + b[i][j];
               }
            }
            printf("\tMatriz 1\tMatriz 2\tMatriz 3\n\%c",32);
            for(i=0;i<tam;i++){
                printf("\t");
                for(j=0;j<tam;j++)
                    printf("%d %c",a[i][j],32);
                printf("\t");
                for(j=0;j<tam;j++)
                    printf("%d %c",b[i][j],32);
                printf("\t");
                for(j=0;j<tam;j++)
                    printf("%d %c",c[i][j],32);





                printf("\n");
            }


        break;
        case 2:
             printf("Matriz 1\n");
             i=0;
             while(i<tam){
                j=0;
               while(j<tam){
                printf("\tfila %d\n",i+1);
                printf("Por favor el elemento %d \n ", j+1);
                scanf("%d",&a[i][j]);
                system("cls");
                j++;
               }
               i++;
            }

            system("cls");
            printf("Matriz 2\n");
            i=0;
            while(i<tam){
                j=0;
               while(j<tam){
                printf("\tfila %d\n",i+1);
                printf("Por favor el elemento %d \n ", j+1);
                scanf("%d",&b[i][j]);
                system("cls");
                j++;
               }
               i++;
            }


            system("cls");
            i=0;
            while(i<tam){
                j=0;
               while(j<tam){
                    c[i][j] = a[i][j] + b[i][j];
                    j++;
               }
               i++;
            }
            i=0;
            while(i<tam){
                j=0;
                while(j<tam){
                    printf("%d %c",c[i][j],32);
                    j++;
                }
                printf("\n");
                i++;
            }
        break;
        case 3:
             printf("Matriz 1\n");
             i=0;
             do{
                j=0;
              do{
                printf("\tfila %d\n",i+1);
                printf("Por favor el elemento %d \n ", j+1);
                scanf("%d",&a[i][j]);
                system("cls");
                j++;
               } while(j<tam);
               i++;
            }while(i<tam);

            system("cls");
            printf("Matriz 2\n");
            i=0;
            do{
                j=0;
              do{
                printf("\tfila %d\n",i+1);
                printf("Por favor el elemento %d \n ", j+1);
                scanf("%d",&b[i][j]);
                system("cls");
                j++;
               } while(j<tam);
               i++;
            }while(i<tam);


            system("cls");
            i=0;
            do{
                j=0;
               do{
                    c[i][j] = a[i][j] + b[i][j];
                    j++;
               }while(j<tam);
               i++;
            }while(i<tam);
            i=0;
           do{
                j=0;
               do{
                    printf("%d %c",c[i][j],32);
                    j++;
                }while(j<tam);
                printf("\n");
                i++;
            } while(i<tam);
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
