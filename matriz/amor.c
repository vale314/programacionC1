/*R.O Valentin Alejandro
    F:13/03/18
    DP:Amor
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 4

main(){
    int  i, j,m,r,d1,d2,e,dec;

    char a [tam] [tam]  = {
    { 'a', 'M' , 'O', 'a'},
    { 'T', 'm' , 'm', 'O'},
    { 'R', 'o' , 'o', 'O'},
    { 'r', 'L' , 'A', 'r'} };
    char b [tam];
    char c [tam];
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
                printf("%c",a[i][j]);
               }
            }




            system("cls");

            for(i=0;i<tam;i++){
               for(j=0;j<tam;j++){
                   if(i==j){

                    b[i]=a[i][j];
                   }
                   if(j==dec){

                    c[i]=a[i][j];
                    dec--;
                   }
               }
            }



            printf("\tMatriz 1\n%c",32);
            for(i=0;i<tam;i++){
                printf("\t");
                for(j=0;j<tam;j++)
                    printf("%c %c",a[i][j],32);
                printf("\n");
            }


            printf("La suma de\n\n\n");
            for(i=0;i<tam;i++){
                printf("%c",b[i]);
                if(i<tam-1)
                    printf("+");
            }
            printf("=");
            for(i=0;i<tam;i++){
                printf("%c",c[i]);
            }

            printf("\t\t\t");


            for(i=0;i<tam;i++){
                printf("%c",c[i]);
                if(i<tam-1)
                    printf("+");
            }
            printf("=");
            for(i=0;i<tam;i++){
                printf("%c",c[i]);
            }

            printf("\t\t\t");

            for(i=0;i<tam;i++){
               for(j=0;j<tam;j++){
                  if((a[i][j] != b[i] && a[i][j] != c[i])|| (a[i][j] != b[i] && a[i][j] != c[i])){

                    printf("%c",a[i][j]);
                    if(i<tam-1)
                        printf("+");
                  }
               }
            }
            printf("=");
            for(i=0;i<tam;i++){
               for(j=0;j<tam;j++){
                  if((a[i][j] != b[i] && a[i][j] != c[i])|| (a[i][j] != b[i] && a[i][j] != c[i])){

                    printf("%c",a[i][j]);

                  }
               }
            }
            printf("\n\n\n");


        break;
        case 2:

            printf("Matriz 1\n");
            i=0;
             while(i<tam){
                j=0;
               while(j<tam){
                printf("%c",a[i][j]);
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

                    b[i]=a[i][j];
                   }
                   if(j==dec){

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
                    printf("%c %c",a[i][j],32);
                    j++;
                }
                printf("\n");
                i++;
            }


            printf("La suma de\n\n\n");
            i=0;
            while(i<tam){
                printf("%c",b[i]);
                if(i<tam-1)
                    printf("+");
                    i++;
            }
            printf("=");
            i=0;
            while(i<tam){
                printf("%c",c[i]);
                i++;
            }

            printf("\t\t\t");

            i=0;
            while(i<tam){
                printf("%c",c[i]);
                if(i<tam-1)
                    printf("+");
                i++;
            }
            printf("=");
            i=0;
            while(i<tam){
                printf("%c",c[i]);
                i++;
            }

            printf("\t\t\t");
            i=0;
            while(i<tam){
                j=0;
               while(j<tam){
                  if((a[i][j] != b[i] && a[i][j] != c[i])|| (a[i][j] != b[i] && a[i][j] != c[i])){

                    printf("%c",a[i][j]);
                    if(i<tam-1)
                        printf("+");
                  }
                  j++;
               }
               i++;
            }
            printf("=");
            i=0;
            while(i<tam){
                j=0;
               while(j<tam){
                  if((a[i][j] != b[i] && a[i][j] != c[i])|| (a[i][j] != b[i] && a[i][j] != c[i])){

                    printf("%c",a[i][j]);

                  }
                  j++;
               }
               i++;
            }
            printf("\n\n\n");



        break;
        case 3:
                      printf("Matriz 1\n");
            i=0;
            do{
                j=0;
               do{
                printf("%c",a[i][j]);
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

                    b[i]=a[i][j];
                   }
                   if(j==dec){

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
                    printf("%c %c",a[i][j],32);
                    j++;
                }while(j<tam);
                printf("\n");
                i++;
            }while(i<tam);


            printf("La suma de\n\n\n");
            i=0;
            do{
                printf("%c",b[i]);
                if(i<tam-1)
                    printf("+");
                    i++;
            }while(i<tam);
            printf("=");
            i=0;
            do{
                printf("%c",c[i]);
                i++;
            }while(i<tam);

            printf("\t\t\t");

            i=0;
            do{
                printf("%c",c[i]);
                if(i<tam-1)
                    printf("+");
                i++;
            }while(i<tam);
            printf("=");
            i=0;
            do{
                printf("%c",c[i]);
                i++;
            }while(i<tam);

            printf("\t\t\t");
            i=0;
            do{
                j=0;
               do{
                  if((a[i][j] != b[i] && a[i][j] != c[i])|| (a[i][j] != b[i] && a[i][j] != c[i])){

                    printf("%c",a[i][j]);
                    if(i<tam-1)
                        printf("+");
                  }
                  j++;
               }while(j<tam);
               i++;
            }while(i<tam);
            printf("=");
            i=0;
            do{
                j=0;
               do{
                  if((a[i][j] != b[i] && a[i][j] != c[i])|| (a[i][j] != b[i] && a[i][j] != c[i])){

                    printf("%c",a[i][j]);

                  }
                  j++;
               }while(j<tam);
               i++;
            }while(i<tam);
            printf("\n\n\n");





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
