/*R.O Valentin Alejandro
    F:13/03/18
    DP:Cuadros
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 3

main(){
    int a [tam] [tam], b [tam],c [tam],f [tam],  i, j,m,r,d1,d2,e,dec;
    do{
    system("cls");
    printf("\tSuma De Matrices\n");
    printf("1 For\n");
    printf("2 While\n");
    printf("3 Do While\n");
    scanf("%d",&m);
    system("cls");
    d1=0; dec=tam-1; d2=0; e=0;
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

            for(i=0;i<tam;i++){
               for(j=0;j<tam;j++){
                   if(i==j){
                    d1=d1+a[i][j];
                    b[i]=a[i][j];
                   }
                   if(j==dec){
                    d2=d2+a[i][j];
                    c[i]=a[i][j];
                    dec--;
                   }
               }
            }



            printf("\tMatriz 1\n%c",32);
            for(i=0;i<tam;i++){
                printf("\t");
                for(j=0;j<tam;j++)
                    printf("%d %c",a[i][j],32);
                printf("\n");
            }


            printf("La suma de\n\n\n");
            for(i=0;i<tam;i++){
                printf("%d",b[i]);
                if(i<tam-1)
                    printf("+");
            }
                printf(" es %d\n",d1);

            for(i=0;i<tam;i++){
                printf("%d",c[i]);
                if(i<tam-1)
                    printf("+");
            }
                printf(" es %d\n",d2);

            for(i=0;i<tam;i++){
               for(j=0;j<tam;j++){
                  if((a[i][j] != b[i] && a[i][j] != c[i])|| (a[i][j] != b[i] && a[i][j] != c[i])){
                    e=e+a[i][j];
                    printf("%d",a[i][j]);
                    if(i<tam-1)
                        printf("+");
                  }
               }
            }
            printf(" es %d\n",e);


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
            i=0;
            while(i<tam){
                j=0;
               while(j<tam){
                   if(i==j){
                    d1=d1+a[i][j];
                    b[i]=a[i][j];
                   }
                   if(j==dec){
                    d2=d2+a[i][j];
                    c[i]=a[i][j];
                    dec--;
                   }
                j++;
               }
               i++;
            }



            printf("\tMatriz 1\n%c",32);
            i=0;
            while(i<tam){
                printf("\t");
                j=0;
                while(j<tam){
                    printf("%d %c",a[i][j],32);
                    j++;
                }
                printf("\n");
                i++;
            }


            printf("La suma de\n\n\n");
            i=0;
            while(i<tam){
                printf("%d",b[i]);
                if(i<tam-1)
                    printf("+");
                    i++;
            }
                printf(" es %d\n",d1);
            i=0;
            while(i<tam){
                printf("%d",c[i]);
                if(i<tam-1)
                    printf("+");
                    i++;
            }
                printf(" es %d\n",d2);
            i=0;
            while(i<tam){
                j=0;
               while(j<tam){
                  if((a[i][j] != b[i] && a[i][j] != c[i])|| (a[i][j] != b[i] && a[i][j] != c[i])){
                    e=e+a[i][j];
                    printf("%d",a[i][j]);
                    if(i<tam-1)
                        printf("+");
                  }
                    j++;
               }
               i++;
            }
            printf(" es %d\n",e);

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
               }while(j<tam);
               i++;
            }while(i<tam);




            system("cls");
            i=0;
            do{
                j=0;
              do{
                   if(i==j){
                    d1=d1+a[i][j];
                    b[i]=a[i][j];
                   }
                   if(j==dec){
                    d2=d2+a[i][j];
                    c[i]=a[i][j];
                    dec--;
                   }
                j++;
               }while(j<tam);
               i++;
            }while(i<tam);



            printf("\tMatriz 1\n%c",32);
            i=0;
            do{
                printf("\t");
                j=0;
                do{
                    printf("%d %c",a[i][j],32);
                    j++;
                }while(j<tam);
                printf("\n");
                i++;
            }while(i<tam);


            printf("La suma de\n\n\n");
            i=0;
            do{
                printf("%d",b[i]);
                if(i<tam-1)
                    printf("+");
                    i++;
            }while(i<tam);
                printf(" es %d\n",d1);
            i=0;
            do{
                printf("%d",c[i]);
                if(i<tam-1)
                    printf("+");
                    i++;
            }while(i<tam);
                printf(" es %d\n",d2);
            i=0;
           do{
                j=0;
               do{
                  if((a[i][j] != b[i] && a[i][j] != c[i])|| (a[i][j] != b[i] && a[i][j] != c[i])){
                    e=e+a[i][j];
                    printf("%d",a[i][j]);
                    if(i<tam-1)
                        printf("+");
                  }
                    j++;
               }while(j<tam);
               i++;
            } while(i<tam);
            printf(" es %d\n",e);
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
