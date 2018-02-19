#include <stdio.h>
#include <stdlib.h>


main(){
    int m, w, n, i, j, res1, res2, res3;
    do{
    printf("1 for\n");
    printf("2 while\n");
    printf("3 do while\n");
    scanf("%d",&m);
    system("cls");
    printf("Porfavor introdusca su numero\n");
    scanf("%d",&n);

    res1=0; res2=1; res3=0; i=0;


    system("cls");
        switch(m){
            case 1:
                    for(i=0; i<=n; i++){
                        res3=res1+res2;
                        res1=res2;
                        res2=res3;
                        if(i<=5)
                            printf("%d     ",res3);
                    }

                printf("...\nLa suma de la serie de %d es: %d",n,res3);
                break;
            case 2:
                    while(i<=n){
                        res3=res1+res2;
                        res1=res2;
                        res2=res3;
                        if(i<=5)
                            printf("%d     ",res3);
                        i++;
                    }
                    printf("...\nLa suma de la serie de %d es: %d",n, res3);
                break;
            case 3:
                    do{
                        res3=res1+res2;
                        res1=res2;
                        res2=res3;
                        if(i<=5)
                            printf("%d     ",res3);
                        i++;
                    }while(i<=n);
                    printf("...\nLa suma de la serie de %d es: %d",n, res3);
                break;


            default:
                printf("\n Incorrecta opcion");

        }
      printf("\ndesea repetir ingrese 2 otro para salir 1\n");
      scanf("%d",&w);
      system("cls");
    }while(w != 1);


}
