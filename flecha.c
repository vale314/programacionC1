/*
    R.O. Valentin Alejandro
    F: 28/02/18
    D.P: Flechas
*/



#include <stdio.h>
#include <stdlib.h>

main(){
    int m,i,j,k,c,e;
    do{
       printf("Realizar Flecha\n");
       system("cls");
       printf("1 For\n");
       printf("2 While\n");
       printf("3 Do-While\n");
       scanf("%d",&m);
       system("cls");
       switch(m){
            case 1:
                printf("\toperacion realizada con el ciclo For\n");
                c=7;
                e=6;
                for(i=0; i<=6;i++){

                //for espacio antes
                    if(c != 0){
                        for(k=0;k<=e;k++){
                            printf("%c",32);
                        }
                    }

                    //for espacio entre
                    for(j=1; j<=i; j++){
                        printf("%c",32);
                        printf("*");
                    }
                            c--;
                            e--;

                    printf("\n");
                }


                //for despues
                e=0;

                for(i=0; i<=2;i++){
                    for(k=0;k<=5;k++){
                        printf("%c",32);
                    }
                //for espacio entre
                    for(j=1; j<=2; j++){
                        printf("*");
                        printf("%c",32);
                    }
                    printf("\n");
                }
            break;
            case 2:
                printf("\toperacion realizada con el ciclo While\n");
                c=7;
                e=6;
                i=0;
                while(i<=6){

                //for espacio antes
                    if(c != 0){
                        k=0;
                        while(k<=e){
                            printf("%c",32);
                            k++;
                        }
                    }

                    //for espacio entre
                    j=1;
                    while(j<=i){
                        printf("%c",32);
                        printf("*");
                        j++;
                    }
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }


                //for despues
                e=0;
                i=0;
                while(i<=2){
                    k=0;
                    while(k<=5){
                        printf("%c",32);
                        k++;
                    }
                //for espacio entre
                    j=1;
                    while(j<=2){
                        printf("*");
                        printf("%c",32);
                        j++;
                    }
                    printf("\n");
                    i++;
                }
            break;
            case 3:
                printf("\toperacion realizada con el ciclo Do-While\n");
                c=7;
                e=6;
                i=1;
                do{

                //for espacio antes
                    if(c != 0){
                        k=1;
                        do{
                            printf("%c",32);
                            k++;
                        }while(k<=e);
                    }

                    //for espacio entre
                    j=1;
                    do{
                        printf("%c",32);
                        printf("*");
                        j++;
                    }while(j<=i);
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }while(i<=6);


                //for despues
                e=0;
                i=0;
               do{
                    k=0;
                    do{
                        printf("%c",32);
                        k++;
                    }while(k<=5);
                //for espacio entre
                    j=1;
                    do{
                        printf("*");
                        printf("%c",32);
                        j++;
                    }while(j<=2);
                    printf("\n");
                    i++;
                } while(i<=2);
            break;
       }

     printf("1 para salir 2 para repetir");
     scanf("%d",&m);
    }while(m != 1);
}
