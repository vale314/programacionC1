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
            if(d<10){
                printf("Lagarto");
                break;
            }
                printf("Mono");
                break;
        case 2:
            if(d<27){
                printf("Mono");
                break;
            }
                printf("Alcon");
                break;
        case 3:
            if(d<27){
                printf("Halcon");
                break;
            }
            printf("Jaguar");
            break;
        case 4:
            if(d<3){
                printf("Jaguar");
                break;
            }
            printf("Zorro");
            break;
        case 5:
            if(d == 1){
                printf("Zorro");
                break;
            }
            if(d>=2 && d<=20){
                printf("Serpiente");
                break;
            }
            if(d == 30){
                printf("Ardilla");
                break;
            }
            break;
        case 6:
            if(d<28){
                printf("Ardilla");
                break;
            }
             printf("Tortuga");
             break;
        case 7:
            if(d<=25){
                printf("Tortuga");
                break;
            }
            printf("Murcielago");
            break;
        case 8:
            if(d<=26){
                printf("Murcielago");
                break;
            }
            printf("Escorpion");
            break;
        case 9:
            if(d<=23){
               printf("Escorpion");
               break;
            }
            printf("Venado");
            break;
        case 10:
            if(d<=20){
                printf("Venado");
                break;
            }
            printf("Lechuza");
            break;
        case 11:
            if(d<=14){
                printf("Lechuza");
                break;
            }
            printf("Pavo real");
            break;
        case 12:
            if(d<=13){
                printf("Pavo real");
                break;
            }
            printf("Lagarto");
            break;

        default:
            printf("No reconocido horoscopo");
    }

    getch();
}
