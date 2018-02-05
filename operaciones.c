/*
    R.O.Valentin Alejandro
    F:04/02/18
    dP:operaciones
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


main(){
    int n1, n2,d;
    float t;

    printf("Por favor introsuca el numero de su menu\n");
    printf("1 suma\n");
    printf("2 resta\n");
    printf("3 multiplicacion\n");
    printf("4 division\n");
    printf("5 modulo\n");
    printf("6 raiz cudrada\n");
    printf("7 potencia\n");
    printf("8 seno\n");
    printf("9 coseno\n");
    printf("10 tan\n");
    scanf("%d",&d);
    system("cls");

    printf("Introsuca su primer numero\n");
    scanf("%d",&n1);
    printf("Introdusca su segundo numero\n");
    scanf("%d",&n2);

    switch(d){
        case 1:
            printf("su resultado es %d", n1+n2);
            break;
        case 2:
            printf("su resultado es %d", n1-n2);
            break;
        case 3:
            printf("su resultado es %d", n1*n2);
            break;
        case 4:
            printf("su resultado es %d", n1/n2);
            break;
        case 5:
            printf("su resultado es %.2f", n1%n2);
            break;
        case 6:
            printf("su resultado es %.2f", sqrt(n1));
            break;
        case 7:
            printf("su resultado de %d es %.0f y de %d es %.0f",n1, pow(n1,2), n2, pow(n2,2));
            break;
        case 8:
            printf("su resultado es %d %.2f es y de %d es %.2f",n1, cos(n1), n2, cos(n2));
            break;
        case 9:
            printf("su resultado es %d %.2f es y de %d es %.2f",n1, sin(n1),n2, sin(n2));
            break;
        case 10:
            printf("su resultado es %d %.2f es y de %d es %.2f",n1, tan(n1) , n2 , tan(n2));
            break;
        default:
            return(0);
    }

    getch();
}
