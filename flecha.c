#include <stdio.h>
#include <stdlib.h>

main(){
    int m,i,j,k,c,e;
    do{
       printf("1 While\n");
       printf("2 Do while\n");
       printf("3 For\n");
       scanf("%d",&m);

       switch(m){
            case 1:
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
       }

     printf("1 para salir 2 para repetir");
     scanf("%d",&m);
    }while(m != 1);
}
