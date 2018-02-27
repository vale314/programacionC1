#include <stdio.h>
#include <stdlib.h>

main(){
    int m,i,j,k,c,e;
    do{
       system("cls");
       printf("1 While\n");
       printf("2 Do while\n");
       printf("3 For\n");
       scanf("%d",&m);
       system("cls");
       switch(m){
            case 1:
                printf("Ciclo utilizado For\n");
                c=6;
                e=5;
                for(i=0; i<=5;i++){

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
                for(i=7; i>=4;i--){
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
                c=6;
                e=5;
                i=0;
                while(i<=5){

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
                i=7;
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
                c=6;
                e=5;
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
                }while(i<=5);


                //for despues
                e=0;
                i=7;
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
