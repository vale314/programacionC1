#include <stdio.h>
#include <stdlib.h>


main(){
    int m1, w, i, n;
    do{
    printf("1 for\n");
    printf("2 while\n");
    printf("3 do while\n");
    scanf("%d",&m1);
    system("cls");

    printf("Porfavor introdusca su numero\n");
    scanf("%d",&n);


    i=1;
    system("cls");

    printf("\t tablas de multiplicar de %d\n",n);
        switch(m1){
            case 1:
                for(i=1;i<=10;i++){
                        printf("\t\t%d \tx \t %d\t%d\n",i,n,n*i);
                    }
                break;
            case 2:
                while(i<=10){
                    printf("\t\t%d \tx \t %d\t%d\n",i,n,n*i);
                    i++;
                }
                break;
            case 3:
                do{
                    printf("\t\t%d \tx \t %d\t%d\n",i,n,n*i);
                    i++;
                }while(i<=10);
                break;


            default:
                printf("\n Incorrecta opcion");

        }

      printf("\ndesea repetir ingrese 2 otro para salir 1\n");
      scanf("%d",&w);
      system("cls");
    }while(w != 1);


}
