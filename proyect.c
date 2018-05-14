#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>



void subMenu1(){
    int m1;
    do{
        system("cls");
        printf("1 SPSR\n2 SPCR\n3 CPSR\n4 CPCR\n5 SALIR\n");
        scanf("%d",&m1);
        system("cls");
        switch(m1){
            case 1:
                operacionesSPSR();
            break;
            case 2:
                operacionesSPCR();
            break;
            case 3:
                operacionesCPSR();
            break;
            case 4:
                operacionesCPCR();
            break;
            case 5:
            break;
            default:
                printf("Invalido\n");
        }
    }while(m1!=5);
}

void subMenu2(){
    int m1;
    do{
        printf("1 SPSR\n2 SPCR\n3 CPSR\n4 CPCR\n5 SALIR\n");
        scanf("%d",&m1);
        switch(m1){
            case 1:
                operacionesASPSR();
            break;
            case 2:
                operacionesASPCR();
            break;
            case 3:
                operacionesACPSR();
            break;
            case 4:
                operacionesACPCR();
            break;
            case 5:
            break;
            default:
                printf("Invalido\n");
        }
    }while(m1!=5);
}

void subMenu3(){
    int m1;
    do{
        printf("1 SPSR\n2 SPCR\n3 CPSR\n4 CPCR\n5 SALIR\n");
        scanf("%d",&m1);
        switch(m1){
            case 1:
                operacionesRSPSR();
            break;
            case 2:
                operacionesRSPCR();
            break;
            case 3:
                operacionesRCPSR();
            break;
            case 4:
                operacionesRCPCR();
            break;
            case 5:
            break;
            default:
                printf("Invalido\n");
        }
    }while(m1!=5);
}

void subMenu4(){
    int m1;
    do{
        printf("1 SPSR\2 SPCR\n3 CPSR\n4 CPCR\n5 SALIR\n");
        scanf("%d",&m1);
        switch(m1){
            case 1:
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
            break;
            default:
                printf("Invalido\n");
        }
    }while(m1!=5);
}

void subMenu5(){
    int m1;
    do{
        printf("1 SPSR\2 SPCR\n3 CPSR\n4 CPCR\n5 SALIR\n");
        scanf("%d",&m1);
        switch(m1){
            case 1:
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
            break;
            default:
                printf("Invalido\n");
        }
    }while(m1!=5);
}

/***SubMenu1**/
void operacionesSPSR();
void operacionesSPCR();
void operacionesCPSR();
void operacionesCPCR();

/***SPSR**/
    void sumSPSR();
    void resSPSR();
    void mulSPSR();
    void divSPSR();
    void modSPSR();
    void raiSPSR();
    void potSPSR();
    void senSPSR();
    void cosSPSR();
    void tanSPSR();

/***FIN**/

/***SPCR**/
    int sumSPCR();
    int resSPCR();
    int mulSPCR();
    float divSPCR();
    int modSPCR();
    float raiSPCR();
    float potSPCR();
    float senSPCR();
    float cosSPCR();
    float tanSPCR();

/***FIN**/

/***CPSR**/
    void sumCPSR(int,int);
    void resCPSR(int,int);
    void mulCPSR(int,int);
    void divCPSR(int,int);
    void modCPSR(int,int);
    void raiCPSR(int);
    void potCPSR(int,int);
    void senCPSR(int);
    void cosCPSR(int);
    void tanCPSR(int);

/***FIN**/

/***CPCR**/
    int sumCPCR(int,int);
    int resCPCR(int,int);
    int mulCPCR(int,int);
    int divCPCR(int,int);
    int modCPCR(int,int);
    float raiCPCR(int);
    float potCPCR(int,int);
    float senCPCR(int);
    float cosCPCR(int);
    float tanCPCR(int);

/***FIN**/

/*** Fin**/

/***SubMenu2**/
void operacionesASPSR();
void operacionesASPCR();
void operacionesACPSR();
void operacionesACPCR();

/***FIN**/


/***SubMenu3**/

/***funcionTime**/
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 10 * number_of_seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds);
}
/***Fin**/




/***RSPSR**/
void operacionesRSPSR();


    /***For**/
    void cuadroFRSPSR();
    /***Fin**/

    /***While**/
    void cuadroWRSPSR();
    /***Fin**/

    /***Do-While**/
    void cuadroDWRSPSR();
/***Fin**/



/***Fin**/

/***RSPCR**/
void operacionesRSPCR();

    /***For**/
    int cuadroFRSPCR();
    /***Fin**/

    /***While**/
    int cuadroWRSPCR();
    /***Fin**/

    /***Do-While**/
    int cuadroDWRSPCR();
    /***Fin**/

/***Fin**/

/***RCPSR**/
void operacionesRCPSR();

    /***For**/
    void cuadroFRCPSR();
    /***Fin**/

    /***While**/
    void cuadroWRCPSR();
    /***Fin**/

    /***Do-While**/
    void cuadroDWRCPSR();
    /***Fin**/

/***fIN**/

/***RCPCR**/
void operacionesRCPCR();

    /***For**/
    int cuadroFRCPCR();
    /***Fin**/

    /***While**/
    int cuadroWRCPCR();
    /***Fin**/

    /***Do-While**/
    int cuadroDWRCPCR();
    /***Fin**/

/***Fin**/

/***FIN**/


main(){
    int m1;
    do{
        system("cls");
        printf("1 Secuencial\n2 Alernativas\n3 Repetitivas\n4 Arreglos\n5 Registros\n6 Salir\n");
        scanf("%d",&m1);
        system("cls");
        switch(m1){
            case 1:
                subMenu1();
            break;
            case 2:
                subMenu2();
            break;
            case 3:
                subMenu3();
            break;
            case 4:
                subMenu4();
            break;
            case 5:
            break;
            case 6:
            break;
            default:
                printf("Invalido\n");
        }
    }while(m1!=6);
}




/***SubMenu1**/

/***SPSR**/
    void sumSPSR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("%d + %d es = %d\n",n1, n2, n1+n2);
    }
    void resSPSR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("%d - %d es = %d\n",n1, n2, n1-n2);
    }
    void mulSPSR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

         printf(" %d * %d es = %d\n",n1, n2, n1*n2);
    }
    void divSPSR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("%d / %d es = %d\n",n1, n2, n1/n2);
    }
    void modSPSR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("%d modulo %d es = %d\n",n1, n2, n1%n2);
    }
    void raiSPSR(){
        int n1;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);

        printf("Raiz %.2f\n", sqrt(n1));
    }
    void potSPSR(){
        int n1, n2, n3;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("Intrudusca la potencia\n");
        scanf("%d",&n3);

        printf("potencia de %d a la %d = %.2f\npotencia de %d a la %d = %.2f\n",n1,n3, pow(n1,n3), n2,n3, pow(n2,n3));
    }
    void senSPSR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("seno de %d es %.2f\nseno de %d es %.2f\n",n1, sin(n1),n2, sin(n2));
    }
    void cosSPSR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("coseno de %d es %.2f\ncoseno de %d es %.2f\n",n1, cos(n1),n2, cos(n2));
    }
    void tanSPSR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("tangente de %d es %.2f\ntangente de %d es %.2f\n",n1, tan(n1),n2, tan(n2));
    }
/***FIN**/


void operacionesSPSR(){
    int m;
    do{
        system("cls");
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
        printf("11 salir\n");
        scanf("%d",&m);
        system("cls");
        switch(m){
                case 1:
                    sumSPSR();
                break;
                case 2:
                    resSPSR();
                break;
                case 3:
                    mulSPSR();
                break;
                case 4:
                    divSPSR();
                break;
                case 5:
                    modSPSR();
                break;
                case 6:
                    raiSPSR();
                break;
                case 7:
                    potSPSR();
                break;
                case 8:
                    senSPSR();
                break;
                case 9:
                    cosSPSR();
                break;
                case 10:
                    tanSPSR();
                break;
                case 11:
                break;
                default:
                    printf("Invalido\n");
        }
        if(m!=11)
            getch();
    }while(m!=11);

}

/***SPCR**/
    int sumSPCR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("%d + %d es =",n1, n2);

         return(n1+n2);
    }
    int resSPCR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("%d - %d =", n1,n2);

        return(n1-n2);
    }
    int mulSPCR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("%d * %d es =",n1, n2);

        return(n1*n2);
    }
    float divSPCR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("%d / %d es =",n1, n2);

        return(n1/n2);
    }
    int modSPCR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("%d modulo %d es =",n1, n2);

        return( n1%n2);
    }
    float raiSPCR(){
        int n1, n2;
        printf("Introsuca su numero\n");
        scanf("%d",&n1);
        printf("raiz =");

        return(sqrt(n1));
    }
    float potSPCR(){
        int n1,n2;
        printf("Introsuca su numero\n");
        scanf("%d",&n1);
        printf("Introsuca la potencia\n");
        scanf("%d",&n2);
        printf("potencia de %d a la %d =",n1,n2);

        return(pow(n1,n2));
    }
    float senSPCR(){
        int n1;
        printf("Introsuca su numero\n");
        scanf("%d",&n1);
        printf("seno de %d =",n1);

        return(sin(n1));
    }
    float cosSPCR(){
        int n1;
        printf("Introsuca su numero\n");
        scanf("%d",&n1);
        printf("coseno de %d =",n1);

        return(cos(n1));
    }
    float tanSPCR(){
        int n1;
        printf("Introsuca su numero\n");
        scanf("%d",&n1);
        printf("tangente de %d =",n1);

        return(tan(n1));
    }
/***FIN**/



void operacionesSPCR(){
    int m;
    do{
        system("cls");
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
        printf("11 salir\n");
        scanf("%d",&m);
        system("cls");
        switch(m){
                case 1:
                    printf(" %d\n",sumSPCR());
                break;
                case 2:
                    printf(" %d\n",resSPCR());
                break;
                case 3:
                    printf(" %d\n",mulSPCR());
                break;
                case 4:
                    printf(" %d\n",divSPCR());
                break;
                case 5:
                    printf(" %d\n", modSPCR());
                break;
                case 6:
                    printf(" %.2f\n", raiSPCR());
                break;
                case 7:
                    printf(" %.2f\n",potSPCR());
                break;
                case 8:
                    printf(" %.2f\n", senSPCR());
                break;
                case 9:
                    printf(" %.2f\n",cosSPCR());
                break;
                case 10:
                    printf(" %.2f\n",tanSPCR());
                break;
                case 11:
                break;
                default:
                    printf("Invalido\n");
        }
        if(m!=11)
            getch();
    }while(m!=11);
}


/***CPSR*/
    void sumCPSR(int n1,int n2){
         printf("%d + %d es %d\n",n1,n2, n1+n2);
    }
    void resCPSR(int n1,int n2){
         printf("%d - %d es %d\n",n1,n2, n1-n2);
    }
    void mulCPSR(int n1,int n2){
         printf("%d * %d es %d\n",n1,n2, n1*n2);
    }
    void divCPSR(int n1,int n2){
         printf("%d / %d es %d\n",n1,n2, n1/n2);
    }
    void modCPSR(int n1,int n2){
         printf("%d modulo %d es %d\n",n1,n2, n1%n2);
    }
    void raiCPSR(int n1){
         printf("%d Raiz es %.2f\n",n1,sqrt(n1));
    }
    void potCPSR(int n1,int n2){
         printf("%d pot %d es %.2f\n",n1,n2,pow(n1,n2));
    }
    void senCPSR(int n1){
        printf("%d seno es %.2f\n",n1, sin(n1));
    }
    void cosCPSR(int n1){
        printf("%d coseno es %.2f\n",n1, cos(n1));
    }
    void tanCPSR(int n1){
        printf("%d tan es %.2f\n",n1, tan(n1));
    }

/***FIN**/


void operacionesCPSR(){
    int m,n1,n2;
    do{
        system("cls");
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
        printf("11 salir\n");
        scanf("%d",&m);
        system("cls");
        switch(m){
                case 1:
                     printf("Introsuca su primer numero\n");
                     scanf("%d",&n1);
                     printf("Introdusca su segundo numero\n");
                     scanf("%d",&n2);
                     sumCPSR(n1,n2);
                break;
                case 2:
                     printf("Introsuca su primer numero\n");
                     scanf("%d",&n1);
                     printf("Introdusca su segundo numero\n");
                     scanf("%d",&n2);
                     resCPSR(n1,n2);
                break;
                case 3:
                     printf("Introsuca su primer numero\n");
                     scanf("%d",&n1);
                     printf("Introdusca su segundo numero\n");
                     scanf("%d",&n2);
                     mulCPSR(n1,n2);
                     break;
                case 4:
                     printf("Introsuca su primer numero\n");
                     scanf("%d",&n1);
                     printf("Introdusca su segundo numero\n");
                     scanf("%d",&n2);
                     divCPSR(n1,n2);
                     break;
                case 5:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    printf("Introsuca la potencia\n");
                    scanf("%d",&n2);
                    modCPSR(n1,n2);
                break;
                case 6:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    raiCPSR(n1);
                    break;
                case 7:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    printf("Introsuca la potencia\n");
                    scanf("%d",&n2);
                    potCPSR(n1,n2);
                break;
                case 8:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    senCPSR(n1);
                break;
                case 9:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    cosCPSR(n1);
                break;
                case 10:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    tanCPSR(n1);
                break;
                case 11:
                break;

                default:
                    printf("Invalido\n");
        }
        if(m!=11)
            getch();
    }while(m!=11);
}

/***CPCR**/
    int sumCPCR(int n1,int n2){
         return(n1+n2);
    }
    int resCPCR(int n1,int n2){
        return(n1-n2);
    }
    int mulCPCR(int n1,int n2){
         return(n1*n2);
    }
    int divCPCR(int n1,int n2){
         return(n1/n2);
    }
    int modCPCR(int n1,int n2){
          return( n1%n2);
    }
    float raiCPCR(int n1){
        return(sqrt(n1));
    }
    float potCPCR(int n1,int n2){
        return(pow(n1,n2));
    }
    float senCPCR(int n1){
        return(sin(n1));
    }
    float cosCPCR(int n1){
        return(cos(n1));
    }
    float tanCPCR(int n1){
        return(tan(n1));
    }
/***FIN**/

void operacionesCPCR(){
    int m,n1,n2;
    do{
        system("cls");
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
        printf("11 salir\n");
        scanf("%d",&m);
        system("cls");
        switch(m){
                case 1:
                     printf("Introsuca su primer numero\n");
                     scanf("%d",&n1);
                     printf("Introdusca su segundo numero\n");
                     scanf("%d",&n2);
                     printf("%d + %d es %d\n",n1,n2,sumCPCR(n1,n2));
                break;
                case 2:
                     printf("Introsuca su primer numero\n");
                     scanf("%d",&n1);
                     printf("Introdusca su segundo numero\n");
                     scanf("%d",&n2);
                     printf("%d - %d es %d\n",n1,n2,resCPCR(n1,n2));
                break;
                case 3:
                     printf("Introsuca su primer numero\n");
                     scanf("%d",&n1);
                     printf("Introdusca su segundo numero\n");
                     scanf("%d",&n2);
                     printf("%d * %d es %d\n",n1,n2,mulCPCR(n1,n2));
                     break;
                case 4:
                     printf("Introsuca su primer numero\n");
                     scanf("%d",&n1);
                     printf("Introdusca su segundo numero\n");
                     scanf("%d",&n2);
                     printf("%d / %d es %d\n",n1,n2,divCPCR(n1,n2));
                     break;
                case 5:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    printf("Introsuca el divisor\n");
                    scanf("%d",&n2);
                    printf("%d modulo %d es %d\n",n1,n2,modCPCR(n1,n2));
                break;
                case 6:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    printf("%d Raiz es %.2f\n",n1,raiCPCR(n1));
                    break;
                case 7:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    printf("Introsuca la potencia\n");
                    scanf("%d",&n2);
                    printf("%d pot %d es %.2f\n",n1,n2,potCPCR(n1,n2));
                break;
                case 8:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    printf("%d seno es %.2f\n",n1,senCPCR(n1));
                break;
                case 9:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    printf("%d coseno es %.2f\n",n1,cosCPCR(n1));
                break;
                case 10:
                    printf("Introsuca su numero\n");
                    scanf("%d",&n1);
                    printf("%d tangente es %.2f\n",n1,tanCPCR(n1));
                break;
                case 11:
                break;

                default:
                    printf("Invalido\n");
        }
        if(m!=11)
            getch();
    }while(m!=11);

}
/*** Fin**/



/***SubMenu**/

/***Fin**/




/***SubMenu2**/
void operacionesASPSR(){
}
void operacionesASPCR(){
}
void operacionesACPSR(){
}
void operacionesACPCR(){
}

/***FIN**/










/***SubMenu3**/


/***RSPSR**/
    /***FOR**/
        void cuadroFRSPSR(){
            HANDLE hCon;
            hCon = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD dwPos;
            dwPos.Y = 0;
            int tam,i,j, k,l,m ,r;
            tam=0;
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
        }
    /***While**/
        void cuadroWRSPSR(){
        HANDLE hCon;
        hCon = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos;
        dwPos.Y = 0;
        int tam,i,j, k,l,m ,r;
        tam=0;
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
        }
    /***Do-While**/
        void cuadroDWRSPSR(){
        HANDLE hCon;
        hCon = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos;
        dwPos.Y = 0;
        int tam,i,j, k,l,m ,r;
        tam=0;
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
        }



void operacionesRSPSR(){
    int m,m5;
    do{
        system("cls");
        printf("1 For\n2 While\n3 Do-While\n4 Salir");
        scanf("%d",&m);
        switch(m){
            case 1:
                do{
                    printf("1 Cuadro\n2 \n3 Salir\n");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            cuadroFRSPSR();
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case 2:
                do{
                    printf("1 Cuadro\n2 \n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            cuadroWRSPSR();
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case 3:
                do{
                    printf("1 Cuadro\n2 While\n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            cuadroDWRSPSR();
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case  4:
            break;
            default:
                printf("Incorrecto/n");
        }
    }while(m!=4);
}
/***Fin**/







/***RCPSR**/
    /***FOR**/
    void cuadroFRCPSR(int tam){
            HANDLE hCon;
            hCon = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD dwPos;
            dwPos.Y = 0;
            int i,j, k,l,m ,r;
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
        }
    /***While**/
    void cuadroWRCPSR(int tam){
            HANDLE hCon;
            hCon = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD dwPos;
            dwPos.Y = 0;
            int i,j, k,l,m ,r;

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
        }
    /***Do-While**/
    void cuadroDWRCPSR(int tam){
        HANDLE hCon;
        hCon = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos;
        dwPos.Y = 0;
        int i,j, k,l,m ,r;

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
        }



    void operacionesRCPSR(){
   int m,m5,tam;
    do{
        system("cls");
        printf("1 For\n2 While\n3 Do-While\n4 Salir");
        scanf("%d",&m);
        switch(m){
            case 1:
                do{
                    printf("1 Cuadro\n2 \n3 Salir\n");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            cuadroFRCPSR(tam);
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case 2:
                do{
                    printf("1 Cuadro\n2 \n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            cuadroWRCPSR(tam);
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case 3:
                do{
                    printf("1 Cuadro\n2 While\n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            cuadroDWRCPSR(tam);
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case  4:
            break;
            default:
                printf("Incorrecto/n");
        }
    }while(m!=4);
}
/***Fin**/





/***RSPCR**/
    /***FOR**/
        int cuadroFRSPCR(){
            HANDLE hCon;
            hCon = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD dwPos;
            dwPos.Y = 0;
            int tam,i,j, k,l,m ,r;
            tam=0;
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

            return(1);
        }
    /***While**/
        int cuadroWRSPCR(){
            HANDLE hCon;
            hCon = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD dwPos;
            dwPos.Y = 0;
            int tam,i,j, k,l,m ,r;
            tam=0;
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

                return(1);
        }
    /***Do-While**/
        int cuadroDWRSPCR(){


        HANDLE hCon;
        hCon = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos;
        dwPos.Y = 0;
        int tam,i,j, k,l,m ,r;
        tam=0;
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

            return(1);
        }



void operacionesRSPCR(){
    int m,m5;
    do{
        system("cls");
        printf("1 For\n2 While\n3 Do-While\n4 Salir");
        scanf("%d",&m);
        switch(m){
            case 1:
                do{
                    printf("1 Cuadro\n2 \n3 Salir\n");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            if(cuadroFRSPCR())
                                printf("\n\n\n");
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case 2:
                do{
                    printf("1 Cuadro\n2 \n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            if(cuadroWRSPCR())
                                printf("\n\n\n");
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case 3:
                do{
                    printf("1 Cuadro\n2 While\n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            if(cuadroDWRSPCR())
                                printf("\n\n\n");
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case  4:
            break;
            default:
                printf("Incorrecto/n");
        }
    }while(m!=4);
}
/***Fin**/




/***RCPCR**/
    /***FOR**/
        int cuadroFRCPCR(int tam){
           HANDLE hCon;
            hCon = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD dwPos;
            dwPos.Y = 0;
            int i,j, k,l,m ,r;
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

            return(1);
        }
    /***While**/
        int cuadroWRCPCR(int tam){
         HANDLE hCon;
            hCon = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD dwPos;
            dwPos.Y = 0;
            int i,j, k,l,m ,r;

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

                return(1);
                }
    /***Do-While**/
        int cuadroDWRCPCR(int tam){
        HANDLE hCon;
        hCon = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos;
        dwPos.Y = 0;
        int i,j, k,l,m ,r;

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
                return(1);
        }


void operacionesRCPCR(){
 int m,m5,tam;
    do{
        system("cls");
        printf("1 For\n2 While\n3 Do-While\n4 Salir");
        scanf("%d",&m);
        switch(m){
            case 1:
                do{
                    printf("1 Cuadro\n2 \n3 Salir\n");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            if(cuadroFRCPCR(tam))
                                printf("\n\n\n");
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case 2:
                do{
                    printf("1 Cuadro\n2 \n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            if(cuadroWRCPCR(tam))
                                printf("\n\n\n");
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case 3:
                do{
                    printf("1 Cuadro\n2 While\n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            if(cuadroDWRCPCR(tam))
                                printf("\n\n\n");
                        break;
                        case 2:
                        break;
                        case 3:
                        break;
                        default:
                            printf("Incorrecto/n");
                    }
                }while(m5!=3);
            break;
            case  4:
            break;
            default:
                printf("Incorrecto/n");
        }
    }while(m!=4);
}
/***Fin**/

/***FIN**/
