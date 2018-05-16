/* R.O Valentin Alejandro
    F: 04/02/18
    DP: Sumatoria Con Repetitivas
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


main(){
    int num, i, max=0;
    char rep, opC;

   do{
    printf("\t\n");
    printf("1 para ciclos de for\n f\n F\n");
    printf("2 para ciclos de while\n w\n W\n");
    printf("3 para ciclos de do while\n d\n D\n");
    fflush(stdin);
    scanf("%c",&opC);

    system("cls");

    printf("Por favor introdusca el numero a repetir\n");
    fflush(stdin);
    scanf("%d",&num);

    i=num; max=0;
    switch(opC){
        case '1': case 'f': case 'F':
            for(i;i>=0;i--){
                    if(i%2==0){
                        printf(" el numero es %d\n",i);
                        max=i+max;
                    }


            }
            printf("La suma es: %d\nLa suma fue hecha con for\n", max);
            system("pause");
           break;

        case '2': case 'w': case 'W':
            while(i>0){
                 if(i%2==0){
                        printf(" el numero es %d\nLa suma fue hecha con while\n",i);
                        max=i+max;
                    }

                i--;
            }
            printf("La suma es: %d\n", max);
            system("pause");

           break;

        case '3': case 'd': case 'D':
            do{
                if(i%2==0){
                        printf(" el numero es %d\nLa suma fue hecha con do\n",i);
                        max=i+max;
                    }

                i--;
            }while(i>0);
            printf("La suma es: %d\n", max);
            system("pause");
            break;

        default:
            printf("Incorrecto Ninguna Opcion Del Menu \n");
            system("pause");
            break;

    }
    i=0;
    system("cls");
    printf("presione Y para salir y N Para proseguir\n");
    fflush(stdin);
    scanf("%c",&rep);
    system("cls");
    }while(rep == 'N' || rep == 'n');

}
