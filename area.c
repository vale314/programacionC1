#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define pi 3.14


main(){
    int b,a,bM, d;

    printf("Por favor introsuca el numero de su menu\n");
    printf("1 Triangulo\n");
    printf("2 Trapecio\n");
    printf("3 Circulo\n");
    printf("4 Cuadrado\n");
    scanf("%d",&d);
    system("cls");

    switch(d){
            case (1):
                printf("Por favor introduce la base\n");
                scanf("%d", &b);

                printf("Por favor introduce la altura\n");
                scanf("%d", &a);
                printf("Su area es: %d \n", b*a/2);
                break;
            case(2):
                printf("Area de Trapecio\n");
                printf("Por favor introdusca la altura\n");
                scanf("%d",&a);

                printf("Por favor introdusca la base mayor\n");
                scanf("%d",&b);

                printf("Por favor introdusca la base menor\n");
                scanf("%d", &bM);

                printf("Trapecio Area es: %d\n", (b+bM)*a/2 );
                break;
            case(3):
                printf(" Area de circulo\n");
                printf("Por favor introdusca su radio\n");
                scanf("%d", &b);


                printf("Su area es : %.2f\n", b*b*pi);
                break;
            case(4):
                printf("Area de cuadrado\n");
                printf("Por favor introsdusca su lado\n");
                scanf("%d", &a);

                printf("Total de area: %d\n", a*a);
                break;

            default:
                break;

    }

    system("pause");

}
