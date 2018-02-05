/* R.O Valentin Alejandro
    F: 04/02/18
    dp: Caracter
*/



#include <stdio.h>
#include <conio.h>

main(){
    int c;
    char c1;
    printf("Introduce tu caracater \n");
    scanf("%c",&c1);
    c=c1;


    switch(c){
        case(0):
            printf("Tu codigo es Null");
            break;

        case 1 ... 31:
            printf("Tu caracter es de control");
            break;

            ///caracter de impresion

        case 32 ... 47 :
            printf("Es un caracter de impresion");
            break;
        case 58 ... 64:
            printf("Es un caracter de impresion");
            break;
        case 91 ... 96:
            printf("Es un caracter de impresion");
            break;
        case 123 ... 126:
            printf("Es un caracter de impresion");
            break;


        case 65 ... 90:
            printf("Tu caracter es una letra");
            break;
        case 97 ... 122:
            printf("Tu caracter es una letra");
            break;

        case 48 ... 57:
            printf("Numero");
            break;

        default:
            printf("Codigo digitado irrelevante");
    }

    getch();
}
