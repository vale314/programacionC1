#include <stdio.h>
#include <stdlib.h>

main(){
    int m,i,j,k,c,e;
    do{
       system("cls");
       printf("1 For\n");
       printf("2 While\n");
       printf("3 Do While\n");
       scanf("%d",&m);
       system("cls");
       switch(m){
            case 1:
                    printf("\t\t\tRealizado con ciclo for\n");
                    for(i=1;i<=5;i++){
                        printf("Tabla multiplicar %d",i);
                        printf("\t");

                    }
                    printf("\n");

                    for(i=1;i<=10;i++){
                        for(j=1;j<=5;j++){
                            if(i>j){
                                printf("%d*%d=%d",j,i,j*i);
                            }
                            printf("\t\t\t");
                        }
                        printf("\n");
                    }


                    for(i=6;i<=10;i++){
                        printf("Tabla multiplicar %d",i);
                        printf("\t");

                    }
                    printf("\n");

                    for(k=10;k>0;k--){
                            for(j=6;j<=10;j++){
                                if(j>k){
                                    printf("%d*%d=%d ",j,k,k*j);
                                }
                                    printf("\t\t\t");

                            }
                            printf("\n");
                }

            break;

            case 2:
                    printf("\t\t\tRealizado con ciclo While\n");
                    i=1;
                    while(i<=5){
                        printf("Tabla multiplicar %d",i);
                        printf("\t");
                        i++;
                    }
                    printf("\n");
                    i=1;
                    while(i<=10){
                        j=1;
                        while(j<=5){
                            if(i>j){
                                printf("%d*%d=%d",j,i,j*i);
                            }
                            printf("\t\t\t");
                            j++;
                        }
                        printf("\n");
                        i++;
                    }

                    i=6;
                    while(i<=10){
                        printf("Tabla multiplicar %d",i);
                        printf("\t");
                        i++;
                    }
                    printf("\n");
                    k=10;
                    while(k>0){
                            j=6;
                            while(j<=10){
                                if(j>k){
                                    printf("%d*%d=%d ",j,k,k*j);
                                }
                                    printf("\t\t\t");
                                    j++;
                            }
                            printf("\n");
                            k--;
                    }
              break;
            case 3:
                    printf("\t\t\tRealizado con ciclo Do-While\n");
                    i=1;
                    do{
                        printf("Tabla multiplicar %d",i);
                        printf("\t");
                        i++;
                    }while(i<=5);
                    printf("\n");
                    i=1;
                    do{
                        j=1;
                        do{
                            if(i>j){
                                printf("%d*%d=%d",j,i,j*i);
                            }
                            printf("\t\t\t");
                            j++;
                        }while(j<=5);
                        printf("\n");
                        i++;
                    }while(i<=10);

                    i=6;
                    do{
                        printf("Tabla multiplicar %d",i);
                        printf("\t");
                        i++;
                    }while(i<=10);
                    printf("\n");
                    k=10;
                    do{
                            j=6;
                            do{
                                if(j>k){
                                    printf("%d*%d=%d ",j,k,k*j);
                                }
                                    printf("\t\t\t");
                                    j++;
                            }while(j<=10);
                            printf("\n");
                            k--;
                    }while(k>0);
              break;
        }
     printf("\n");
     printf("1 para salir 2 para repetir\n");
     scanf("%d",&m);
    }while(m != 1);
}
