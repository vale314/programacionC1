#include <stdio.h>
#include <stdlib.h>

main(){
    int m,i,j;
    do{
       printf("1 While\n");
       printf("2 Do while\n");
       printf("3 For\n");
       scanf("%d",&m);

       switch(m){
            case 1:
                for(i=0; i<=5;i++){
                    for(j=1; j<=i; j++){
                        printf("%d",j);
                    }
                    printf("\n");
                }
                for(i=5; i>=0;i--){
                    for(j=1; j<=i; j++){
                        printf("%d",j);
                    }
                    printf("\n");
                }
            break;
       }

     printf("1 para salir 2 para repetir");
     scanf("%d",&m);
    }while(m != 1);
}
