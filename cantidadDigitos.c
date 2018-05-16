/* R.O Valentin Alejandro
    F: 04/02/18
    DP: Cantidad De Digitos De Entrada
*/

#include <stdio.h>
#include <stdlib.h>


main(){
    int m1, w, i, n, m, c;
    do{
    printf("1 for\n");
    printf("2 while\n");
    printf("3 do while\n");
    scanf("%d",&m1);
    system("cls");

    printf("Porfavor introdusca su numero\n");
    scanf("%d",&n);

    m=10; c=1; i=1;
    i=n/m;

    system("cls");


        switch(m1){
            case 1:
                for(i;i!=0;i){
                    m=m*10;
                    i=n/m;
                    c++;
                }
                break;
            case 2:
                while(i!=0){
                    m=m*10;
                    i=n/m;
                    c++;
                }
                break;
            case 3:
                do{
                    m=m*10;
                    i=n/m;
                    c++;
                }while(i!=0);
                break;


            default:
                printf("\n Incorrecta opcion");

        }
      system("cls");
      printf("\n\n\n\tpara el numero %d su cantidad de digitos es: %d\n\n\n", n, c);

      printf("\ndesea repetir ingrese 2 otro para salir 1\n");
      scanf("%d",&w);
      system("cls");
    }while(w != 1);


}
