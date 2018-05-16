/* R.O Valentin Alejandro
    F: 04/02/18
    DP: Suma de Numeros De Centenas
*/

#include <stdio.h>
#include <stdlib.h>


main(){
    int m, w, pot, c, i, n, cC, suma;
    do{
    printf("1 for\n");
    printf("2 while\n");
    printf("3 do while\n");
    scanf("%d",&m);
    system("cls");
    printf("Porfavor introdusca su numero\n");
    scanf("%d",&n);


    pot=10; c=1; i=1;
    suma=0;
    i=n/pot;
    while(i!=0){
        pot=pot*10;
        i=n/pot;
        c++;
    }

    system("cls");
        switch(m){
            case 1:
                printf("El resulatado de la suma de %d es: ",n);
                cC=c;
                while(cC != 0){
                    suma=suma+(n%10);
                    n=n/10;
                    cC--;
                }
                printf("%d",suma);
                break;
            case 2:
                printf("El resulatado de la suma de %d es: ",n);
                cC=c;
                do{
                    suma=suma+(n%10);
                    n=n/10;
                    cC--;
                }while(cC != 0);
                printf("%d",suma);

                break;
            case 3:
                printf("El resulatado de la suma de %d es: ",n);
                for(cC;cC!=0;c--){
                    suma=suma+(n%10);
                    n=n/10;
                    cC--;
                }
                printf("%d",suma);
                break;


            default:
                printf("\n Incorrecta opcion");

        }
      printf("\ndesea repetir ingrese 2 otro para salir 1\n");
      scanf("%d",&w);
      system("cls");
    }while(w != 1);


}
