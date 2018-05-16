/* R.O Valentin Alejandro
    F: 04/02/18
    DP: Suma DE Cubos
*/

#include <stdio.h>
#include <stdlib.h>


main(){
    int m1, w, i, n, t;
    do{
    printf("1 for\n");
    printf("2 while\n");
    printf("3 do while\n");
    scanf("%d",&m1);
    system("cls");

    printf("Porfavor introdusca su numero\n");
    scanf("%d",&n);


    t=0; i=1;
    system("cls");

     printf("La suma de todos los cuadrados.\n\n\n");

        switch(m1){
            case 1:
                for(i;i<=n;i++){
                        printf("%d%c%d +",i,94,i);
                        t=t+i*i;

                    }
                break;
            case 2:
                while(i<=n){
                    printf("%d%c%d +",i,94,i);
                    t=t+i*i;
                    i++;
                }
                break;
            case 3:
                do{
                    printf("%d%c%d +",i,94,i);
                    t=t+i*i;
                    i++;
                }while(i<=n);
                break;


            default:
                printf("\n Incorrecta opcion");

        }
      printf("\n \n \nTu suma es: %d\n\n", t);

      printf("\ndesea repetir ingrese 2 otro para salir 1\n");
      scanf("%d",&w);
      system("cls");
    }while(w != 1);


}
