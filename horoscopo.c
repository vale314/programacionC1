#include <stdio.h>
#include <conio.h>


main(){
    int d, m, a;
    printf("Por favor introdusca su dia\n");
    scanf("%d", &d);

    printf("Por favor introdusca su mes \n");
    scanf("%d", &m);

    printf("Por favor introdusca su a%co \n", 164);
    scanf("%d", &a);

    switch(m){
        case 1 :
            if(d<10)
                printf("Lagarto");
            else
                printf("Mono");
            break;
        case 2:
            if(d<27)
                printf("Mono");
            else
                printf("Alcon");
            break;
        case 3:
            if(d<27)
                printf("Halcon");
            else
                printf("Jaguar");
            break;
        case 4:
            if(d<3)
                printf("Jaguar");
            else
                printf("Zorro");
            break;
        case 5:
            if(d == 1)
                printf("Zorro");
            if(d>=2 && d<=20)
                printf("Serpiente");
            if(d == 30)
                printf("Ardilla");
            break;
        case 6:
            if(d<28)
                printf("Ardilla");
            else
                printf("Tortuga");
             break;
        case 7:
            if(d<=25)
                printf("Tortuga");
            else
                printf("Murcielago");
            break;
        case 8:
            if(d<=26)
                printf("Murcielago");
            else
            printf("Escorpion");
            break;
        case 9:
            if(d<=23)
               printf("Escorpion");
            else
                printf("Venado");
            break;
        case 10:
            if(d<=20)
                printf("Venado");
            else
                printf("Lechuza");
            break;
        case 11:
            if(d<=14)
                printf("Lechuza");
            else
                printf("Pavo real");
            break;
        case 12:
            if(d<=13)
                printf("Pavo real");
            else
                printf("Lagarto");
            break;

        default:
            printf("No reconocido horoscopo");
    }

    getch();
}
