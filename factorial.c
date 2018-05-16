/* R.O Valentin Alejandro
    F: 04/02/18
    DP: Factorial
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


main(){
    int num, i;
    long long max=1;
    char rep, opC;

   do{
    printf("\t\n");
    printf("1 para ciclos de for\n f\n F\n");
    printf("2 para ciclos de while\n w\n W\n");
    printf("3 para ciclos de do while\n d\n D\n");
    fflush(stdin);
    scanf("%c",&opC);

    system("cls");

    printf("Por favor introdusca el numero\n");
    fflush(stdin);
    scanf("%d",&num);
    system("cls");
    i=num; max=1;
    switch(opC){
        case '1': case 'f': case 'F':
            printf("La Operacion Factorial fue hecha con For\n");
            for(i;i>0;i--){
                printf(" el numero es %d\n",i);
                max=i*max;
            }
            printf("La Operacion Factorial es: %d\n", max);
            system("pause");
           break;

        case '2': case 'w': case 'W':
            printf("La Operacion Factorial fue hecha con While\n");
            while(i>0){
                printf(" el numero es %d\n",i);
                max=i*max;

                i--;
            }
           printf("La Operacion Factorial es: %d\n", max);
           system("pause");

           break;

        case '3': case 'd': case 'D':
            printf("La Operacion Factorial fue hecha con Do-While\n");
            do{
                printf(" el numero es %d\n",i);
                max=i*max;

                i--;
            }while(i>0);
            printf("La Operacion Factorial es: %d\n", max);
            system("pause");
            break;

        default:
            printf("Incorrecto Ninguna Opcion Del Menu \n");
            system("pause");
            break;

    }
    i=0;
    system("cls");
    printf("\npresione Y para salir y N Para proseguir\n");
    fflush(stdin);
    scanf("%c",&rep);
    system("cls");
    }while(rep == 'N' || rep == 'n');

}
