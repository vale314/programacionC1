#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 50 * number_of_seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds)
        ;
}
main(){
    int i,j,k,l;
    int tam;

    printf("Introdusca su Base\n");
    scanf("%d",&tam);
    system("cls");
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.Y = 0;
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

}
