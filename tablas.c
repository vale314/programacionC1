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
        }
     printf("\n");
     printf("1 para salir 2 para repetir");
     scanf("%d",&m);
    }while(m != 1);
}
