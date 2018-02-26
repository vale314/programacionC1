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
                c=6;
                e=1;



                //for despues
                e=2;

                for(i=5; i>=0;i--){

                    if(i%2 != 0){
                     for(k=0;k<=e;k++){
                            printf("%c",32);
                        }

                     //for espacio entre
                        for(j=1; j<=i; j++){
                        printf("%c",32);
                        printf("*");
                    }
                    if(i>1){
                        printf("\n");
                    }
                        e=e+2;
                    }


                }
                e=4;
                printf("\n");
                for(i=0; i<=5;i++){
                if(i%2 != 0 && i !=1){

                    //for espacio antes
                        if(c != 0){
                            for(k=0;k<=e;k++){
                                printf("%c",32);
                            }
                            e++;
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
                }




            break;
       }

     printf("1 para salir 2 para repetir");
     scanf("%d",&m);
    }while(m != 1);
}
