/*
    R.O. Valentin Alejandro
    F: 28/02/18
    D.P: Piramide Numeros Ciclos
*/


#include <stdio.h>
#include <stdlib.h>

main(){
    int m,i,j,n1;
    do{
       system("cls");
       printf("Realizar Piramide De Numeros\n");
       printf("1 For\n");
       printf("2 While\n");
       printf("3 Do-While\n");
       scanf("%d",&m);
       printf("Ingrese Longitud de piramide\n");
       printf("Numero: ");
       scanf("%d",&n1);
       system("cls");
       switch(m){
            case 1:
                printf("Su Operacion fue realizada con el ciclo For\n");
                for(i=0; i<=n1;i++){
                    for(j=1; j<=i; j++){
                        printf("%d",j);
                    }
                    printf("\n");
                }
                for(i=n1; i>=0;i--){
                    for(j=1; j<=i; j++){
                        printf("%d",j);
                    }
                    printf("\n");
                }
            break;
            case 2:
                printf("Su Operacion fue realizada con el ciclo While\n");
                i=0;
                while(i<=n1){
                    j=1;
                    while(j<=i){
                        printf("%d",j);
                        j++;
                    }
                    printf("\n");
                    i++;
                }
                i=n1;
                while(i>=0){
                    j=1;
                    while(j<=i){
                        printf("%d",j);
                        j++;
                    }
                    printf("\n");
                    i--;
                }
            break;
            case 3:
                printf("Su Operacion fue realizada con el ciclo Do-While\n");
                i=0;
                do{
                    j=1;
                    do{
                        printf("%d",j);
                        j++;
                    }while(j<=i);
                    printf("\n");
                    i++;
                }while(i<=n1);
                i=n1;
                do{
                    j=1;
                    do{
                        printf("%d",j);
                        j++;
                    }while(j<=i);
                    printf("\n");
                    i--;
                }while(i>=0);
            break;
       }

     printf("1 para salir 2 para repetir");
     scanf("%d",&m);
    }while(m != 1);
}
