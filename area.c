#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define pi 3.14


main(){
    int b,a,bM;
    printf("Por favor introduce la base\n");
    scanf("%d", &b);

    printf("Por favor introduce la altura\n");
    scanf("%d", &a);


    printf("Su area es: %d \n", b*a/2);

    system("pause");
    system("cls");

    printf("Area de Trapecio\n");
    printf("Por favor introdusca la altura\n");
    scanf("%d",&a);

    printf("Por favor introdusca la base mayor\n");
    scanf("%d",&b);

    printf("Por favor introdusca la base menor\n");
    scanf("%d", &bM);

    printf("Trapecio Area es: %d\n", (b+bM)*a/2 );

    system("pause");
    system("cls");

    printf(" Area de circulo\n");
    printf("Por favor introdusca su radio\n");
    scanf("%d", &b);


    printf("Su area es : %.2f\n", b*b*pi);

    system("pause");
    system("cls");


    printf("Area de cuadrado\n");
    printf("Por favor introsdusca su lado\n");
    scanf("%d", &a);

    printf("Total de area: %d\n", a*a);
    system("pause");

}
