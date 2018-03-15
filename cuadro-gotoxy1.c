/*R.O Valentin Alejandro
    F:13/03/18
    DP:Cuadro-Gotoxy 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 10 * number_of_seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds);
}
main(){
    int i,j,k,l,m ,r, tam;

        do{
    system("cls");
    printf("\tEsperial\n");
    printf("1 For\n");
    printf("2 While\n");
    printf("3 Do While\n");
    scanf("%d",&m);
    system("cls");
            HANDLE hCon;
            hCon = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD dwPos;
            dwPos.Y = 0;
            tam=0;
    switch(m){
        case 1:
            printf("Introdusca su Base\n");
            scanf("%d",&tam);
            system("cls");

                for(i=1;i<tam;i++){
                    for(j=1;j<=tam-1;j++){
                        dwPos.X = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                    }
                    for(j=1;j<=tam-1;j++){
                        dwPos.Y = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                    }
                    for(j=tam-1;j>0;j--){
                        if(j<i){
                            break;
                        }
                        dwPos.X = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                    }

                    for(j=tam-1;j>0;j--){
                        if(j<i){
                            break;
                        }
                        dwPos.Y = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                    }
                    tam--;

                }

            printf("\n\n\n");
        break;
        case 2:
            printf("Introdusca su Base\n");
            scanf("%d",&tam);
            system("cls");

            i=1;
                while(i<tam){
                    j=1;
                    while(j<=tam-1){
                        dwPos.X = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                        j++;
                    }
                    j=1;
                    while(j<=tam-1){
                        dwPos.Y = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                        j++;
                    }
                    j=tam-1;
                    while(j>0){
                        if(j<i){
                            break;
                        }
                        dwPos.X = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                        j--;
                    }
                    j=tam-1;
                    while(j>0){
                        if(j<i){
                            break;
                        }
                        dwPos.Y = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                        j--;
                    }
                    tam--;
                    i++;
                }

            printf("\n\n\n");
        break;
        case 3:
            printf("Introdusca su Base\n");
            scanf("%d",&tam);
            system("cls");

            i=1;
                do{
                    j=1;
                    do{
                        dwPos.X = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                        j++;
                    }while(j<=tam-1);
                    j=1;
                    do{
                        dwPos.Y = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                        j++;
                    }while(j<=tam-1);
                    j=tam-1;
                    do{
                        if(j<i){
                            break;
                        }
                        dwPos.X = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                        j--;
                    }while(j>0);
                    j=tam-1;
                    do{
                        if(j<i){
                            break;
                        }
                        dwPos.Y = j;
                        delay(1);
                        SetConsoleCursorPosition(hCon,dwPos);
                        printf("*");
                        j--;
                    }while(j>0);
                    tam--;
                    i++;
                }while(i<tam);


        break;
        default:
                printf("Por favor selecione una opcion correcta\n");

    }
    if(tam>0)
        dwPos.Y=tam*2;
    SetConsoleCursorPosition(hCon,dwPos);
    printf("Desea repetir 1\n");
    scanf("%d",&r);
    system("cls");

    }
    while(r == 1);

}
