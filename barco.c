/*
    R.O. Valentin Alejandro
    F: 28/02/18
    D.P: Barco
*/



#include <stdio.h>
#include <stdlib.h>

main(){
    int m,i,j,k,c,e,t,l;
    do{
       system("cls");
       printf("Realizar barco\n");
       printf("1 For\n");
       printf("2 While\n");
       printf("3 Do-While\n");
       scanf("%d",&m);
       system("cls");
       printf("Introdusca Su tama�o\n");
       scanf("%d",&t);
       switch(m){
            case 1:
                printf("Ciclo utilizado For\n");
                c=t+1;
                e=t;
                for(i=0; i<=t-2;i++){

                //for espacio antes
                    if(c != 0){
                        for(k=0;k<=e;k++){
                            printf("%c",32);
                        }
                    }

                    //for espacio entre
                    for(j=1; j<=i; j++){

                        //printf("%c",32);
                        printf("*");
                    }
                            c--;
                            e--;

                    printf("\n");
                }
                for(i=0;i<=t/3;i++){

                    for(j=0;j<=t;j++){
                        printf("%c",32);
                    }
                    printf("*\n");

                }

                //for despues
                e=0;
                for(i=t+2; i>=4;i--){
                     //for espacio entre
                    for(j=1; j<=i; j++){
                        printf("*");
                        printf("%c",32);
                    }
                    printf("\n");
                     for(k=0;k<=e;k++){
                            printf("%c",32);
                        }
                        e++;
                }
            break;
            case 2:
                printf("Ciclo utilizado While\n");
                c=t+1;
                e=t;
                i=0;
                while(i<=t){

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
                        //printf("%c",32);
                        printf("*");
                        j++;
                    }
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }

                i=0;
                while(i<=t/3){
                    j=0;
                    while(j<=t){
                        printf("%c",32);
                        j++;
                    }
                    printf("*\n");
                    i++;
                }



                //for despues
                e=0;
                i=t+2;
                while(i>=4){
                     //for espacio entre
                    j=1;
                    while(j<=i){
                        printf("*");
                        printf("%c",32);
                        j++;
                    }
                    printf("\n");
                    k=0;
                    while(k<=e){
                            printf("%c",32);
                            k++;
                    }
                        e++;
                        i--;
                }
            break;
            case 3:
                printf("Ciclo utilizado Do-While\n");
                c=t+1;
                e=t;
                i=0;
                do{

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
                    do{
                        //printf("%c",32);
                        printf("*");
                        j++;
                    }while(j<=i);
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }while(i<=t);



                i=0;
                do{
                    j=0;
                    do{
                        printf("%c",32);
                        j++;
                    }while(j<=t);
                    printf("*\n");
                    i++;
                }while(i<=t/3);

                //for despues
                e=0;
                i=t+2;
                do{
                     //for espacio entre
                    j=1;
                    do{
                        printf("*");
                        printf("%c",32);
                        j++;
                    }while(j<=i);
                    printf("\n");
                    k=0;
                    do{
                            printf("%c",32);
                            k++;
                    }while(k<=e);
                        e++;
                        i--;
                }while(i>=4);
            break;
       }

     printf("1 para salir 2 para repetir");
     scanf("%d",&m);
    }while(m != 1);
}
