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

                k=6;
                for(i=0;i<=6;i++){

                    for(j=0;j<=6;j++){

                        if(j>=k && k>=3){
                            printf("%c",32);
                            printf("|");
                        }
                        if(j<k ){
                            printf("%c",32);
                            printf("-");
                        }
                    }
                    k--;
                    printf("\n");
                }

            break;
       }

     printf("1 para salir 2 para repetir");
     scanf("%d",&m);
    }while(m != 1);
}
