/*R.O Valentin Alejandro
    F:16/03/18
    DP:Proyecto
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>




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

/***ASPSR**/
    void simplesAbecedarioSPSR();
    void simplesParesImparesSPSR();
/***Dobles**/
    void doblesAbecedarioSPSR();
    void doblesParesImparesSPSR();
/***Multiples**/
    void MultiplesMesSPSR();
    void MultiplesteclaSCPSR();
void operacionesASPSR();

/***ASPCR**/
    int simplesAbecedarioSPCR();
    int simplesParesImparesSPCR();
/***Dobles**/
    int doblesAbecedarioSPCR();
    int doblesParesImparesSPCR();
/***Multiples**/
    int MultiplesMesSPCR();
    int MultiplesteclasSPCR();

void operacionesASPCR();


/***ACPSR**/
    void simplesAbecedarioCPSR(int);
    void simplesParesImparesCPSR(int);
/***Dobles**/
    void doblesAbecedarioCPSR(int);
    void doblesParesImparesCPSR(int);
/***Multiples**/
    void MultiplesMesCPSR(int);
    void MultiplesteclasCPSR(char);

void operacionesACPSR();


/***ACPCR**/
    int simplesAbecedarioCPCR(int);
    int simplesParesImparesCPCR(int);
/***Dobles**/
    int doblesAbecedarioCPCR(int);
    int doblesParesImparesCPCR(int);
/***Multiples**/
    int MultiplesMesCPCR(int);
    int MultiplesteclasCPCR(char);

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


    /***For**/
    void felchaFRSPSR();

    /***While**/
    void flechaWRSPSR();

    /***Do-While**/
    void flechaDWRSPSR();

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

    /***For**/
    int flechaFRSPCR();

    /***While**/
    int flechaWRSPCR();

    /***Do-While**/
    int flechaDWRSPCR();

/***Fin**/

/***RCPSR**/
void operacionesRCPSR();

    /***For**/
    void cuadroFRCPSR(int);
    /***Fin**/

    /***While**/
    void cuadroWRCPSR(int);
    /***Fin**/

    /***Do-While**/
    void cuadroDWRCPSR(int);
    /***Fin**/


    /***For**/
    void flechaFRCPSR(int);

    /***While**/
    void flechaWRCPSR(int);

    /***Do-While**/
    void flechaDWRCPSR(int);


/***fIN**/

/***RCPCR**/
void operacionesRCPCR();

    /***For**/
    int cuadroFRCPCR(int);
    /***Fin**/

    /***While**/
    int cuadroWRCPCR(int);
    /***Fin**/

    /***Do-While**/
    int cuadroDWRCPCR(int);
    /***Fin**/



    /***For**/
    int flechaFRCPCR(int);

    /***While**/
    int flechaWRCPCR(int);

    /***Do-While**/
    int flechaDWRCPCR(int);


/***Fin**/

/***FIN**/



/***SubMenu 4**/

/***ARSPSR**/
    /***For**/
        void sumaArreglosFARSPSR();
    /***While**/
        void sumaArreglosWARSPSR();
    /***Do-While**/
        void sumaArreglosDWARSPSR();

    /***For**/
        void sumaParesImparesFARSPSR();
    /***While**/
        void sumaParesImparesWARSPSR();
    /***Do-While**/
        void sumaParesImparesDWARSPSR();
    void operacionesARSPSR();
/***Fin**/

/***ARSPCR**/
    /***For**/
        int sumaArreglosFARSPCR();
    /***While**/
        int sumaArreglosWARSPCR();
    /***Do-While**/
        int sumaArreglosDWARSPCR();

    /***For**/
        int sumaParesImparesFARSPCR();
    /***While**/
        int sumaParesImparesWARSPCR();
    /***Do-While**/
        int sumaParesImparesDWARSPCR();
    void operacionesARSPCR();
/***Fin**/

/***ARCPSR**/
    /***For**/
        void sumaArreglosFARCPSR(int);
    /***While**/
        void sumaArreglosWARCPSR(int);
    /***Do-While**/
        void sumaArreglosDWARCPSR(iny);

    /***For**/
        void sumaParesImparesFARCPSR(int);
    /***While**/
        void sumaParesImparesWARCPSR(int);
    /***Do-While**/
        void sumaParesImparesDWARCPSR(int);
    void operacionesARCPSR();
/***Fin**/

/***ARCPCR**/
    /***For**/
        int sumaArreglosFARCPCR(int);
    /***While**/
        int sumaArreglosWARCPCR(int);
    /***Do-While**/
        int sumaArreglosDWARCPCR(int);

    /***For**/
        int sumaParesImparesFARCPCR(int);
    /***While**/
        int sumaParesImparesWARCPCR(int);
    /***Do-While**/
        int sumaParesImparesDWARCPCR(int);
    void operacionesARCPCR();
/***Fin**/


/***Fin**/




/***SubMenu 5**/

/***ARSPSR**/
    /***For**/
        void oneFARSPSR();
    /***While**/
        void oneWARSPSR();
    /***Do-While**/
        void oneDWARSPSR();
    /***For**/
        void arrayFARSPSR();
    /***While**/
        void arrayWARSPSR();
    /***Do-While**/
        void arrayDWARSPSR();

    void operacionesRRSPSR();
/***Fin**/

/***ARSPCR**/
    /***For**/
        int oneFARSPCR();
    /***While**/
        int oneWARSPCR();
    /***Do-While**/
        int oneDWARSPCR();
    /***For**/
        int arrayFARSPCR();
    /***While**/
        int arrayWARSPCR();
    /***Do-While**/
        int arrayDWARSPCR();

    void operacionesRRSPCR();
/***Fin**/

/***ARCPSR**/
        void oneFARCPSR(float);
    /***While**/
        void oneWARCPSR(float);
    /***Do-While**/
        void oneDWARCPSR(float);
    /***For**/
        void arrayFARCPSR(int);
    /***While**/
        void arrayWARCPSR(int);
    /***Do-While**/
        void arrayDWARCPSR(int);

    void operacionesRRCPSR();
/***Fin**/

/***ARCPCR**/

    /***For**/
        int oneFARCPCR(float);
    /***While**/
        int oneWARCPCR(float);
    /***Do-While**/
        int oneDWARCPCR(float);
    /***For**/
        int arrayFARCPCR(int);
    /***While**/
        int arrayWARCPCR(int);
    /***Do-While**/
        int arrayDWARCPCR(int);
    void operacionesRRCPCR();
/***Fin**/


/***Fin**/

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
        system("cls");
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
        system("cls");
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
        system("cls");
        printf("1 SPSR\n2 SPCR\n3 CPSR\n4 CPCR\n5 SALIR\n");
        scanf("%d",&m1);
        switch(m1){
            case 1:
                operacionesARSPSR();
            break;
            case 2:
                operacionesARSPCR();
            break;
            case 3:
                operacionesARCPSR();
            break;
            case 4:
                operacionesARCPCR();
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
        system("cls");
        printf("1 SPSR\n2 SPCR\n3 CPSR\n4 CPCR\n5 SALIR\n");
        scanf("%d",&m1);
        switch(m1){
            case 1:
                operacionesRRSPSR();
            break;
            case 2:
                operacionesRRSPCR();
            break;
            case 3:
                operacionesRRCPSR();
            break;
            case 4:
                operacionesRRCPCR();
            break;
            case 5:
            break;
            default:
                printf("Invalido\n");
        }
    }while(m1!=5);
}



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
                subMenu5();
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
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("%d + %d es = %d\n",n1, n2, n1+n2);
        getch();
    }
    void resSPSR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("%d - %d es = %d\n",n1, n2, n1-n2);
        getch();
    }
    void mulSPSR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

         printf(" %d * %d es = %d\n",n1, n2, n1*n2);
         getch();
    }
    void divSPSR(){
        int n1, n2;
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("%d / %d es = %d\n",n1, n2, n1/n2);
        getch();
    }
    void modSPSR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("%d modulo %d es = %d\n",n1, n2, n1%n2);
        getch();
    }
    void raiSPSR(){
        int n1;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);

        printf("Raiz %.2f\n", sqrt(n1));
        getch();
    }
    void potSPSR(){
        int n1, n2, n3;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("Intrudusca la potencia\n");
        scanf("%d",&n3);

        printf("potencia de %d a la %d = %.2f\npotencia de %d a la %d = %.2f\n",n1,n3, pow(n1,n3), n2,n3, pow(n2,n3));
        getch();
    }
    void senSPSR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("seno de %d es %.2f\nseno de %d es %.2f\n",n1, sin(n1),n2, sin(n2));
        getch();
    }
    void cosSPSR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("coseno de %d es %.2f\ncoseno de %d es %.2f\n",n1, cos(n1),n2, cos(n2));
        getch();
    }
    void tanSPSR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);

        printf("tangente de %d es %.2f\ntangente de %d es %.2f\n",n1, tan(n1),n2, tan(n2));
        getch();
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
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("%d + %d es =",n1, n2);


         return(n1+n2);
    }
    int resSPCR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("%d - %d =", n1,n2);


        return(n1-n2);
    }
    int mulSPCR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("%d * %d es =",n1, n2);


        return(n1*n2);
    }
    float divSPCR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("%d / %d es =",n1, n2);


        return(n1/n2);
    }
    int modSPCR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su primer numero\n");
        scanf("%d",&n1);
        printf("Introdusca su segundo numero\n");
        scanf("%d",&n2);
        printf("%d modulo %d es =",n1, n2);


        return( n1%n2);
    }
    float raiSPCR(){
        int n1, n2;
        system("cls");
        printf("Introsuca su numero\n");
        scanf("%d",&n1);
        printf("raiz =");


        return(sqrt(n1));
    }
    float potSPCR(){
        int n1,n2;
        system("cls");
        printf("Introsuca su numero\n");
        scanf("%d",&n1);
        printf("Introsuca la potencia\n");
        scanf("%d",&n2);
        printf("potencia de %d a la %d =",n1,n2);


        return(pow(n1,n2));
    }
    float senSPCR(){
        int n1;
        system("cls");
        printf("Introsuca su numero\n");
        scanf("%d",&n1);
        printf("seno de %d =",n1);
        getch();

        return(sin(n1));
    }
    float cosSPCR(){
        int n1;
        system("cls");
        printf("Introsuca su numero\n");
        scanf("%d",&n1);
        printf("coseno de %d =",n1);


        return(cos(n1));
    }
    float tanSPCR(){
        int n1;
        system("cls");
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
        system("cls");
         printf("%d + %d es %d\n",n1,n2, n1+n2);
         getch();
    }
    void resCPSR(int n1,int n2){
        system("cls");
         printf("%d - %d es %d\n",n1,n2, n1-n2);
         getch();
    }
    void mulCPSR(int n1,int n2){
        system("cls");
         printf("%d * %d es %d\n",n1,n2, n1*n2);
         getch();
    }
    void divCPSR(int n1,int n2){
        system("cls");
         printf("%d / %d es %d\n",n1,n2, n1/n2);
         getch();
    }
    void modCPSR(int n1,int n2){
        system("cls");
         printf("%d modulo %d es %d\n",n1,n2, n1%n2);
         getch();
    }
    void raiCPSR(int n1){
        system("cls");
         printf("%d Raiz es %.2f\n",n1,sqrt(n1));
         getch();
    }
    void potCPSR(int n1,int n2){
        system("cls");
         printf("%d pot %d es %.2f\n",n1,n2,pow(n1,n2));
         getch();
    }
    void senCPSR(int n1){
        system("cls");
        printf("%d seno es %.2f\n",n1, sin(n1));
        getch();
    }
    void cosCPSR(int n1){
        system("cls");
        printf("%d coseno es %.2f\n",n1, cos(n1));
        getch();
    }
    void tanCPSR(int n1){
        system("cls");
        printf("%d tan es %.2f\n",n1, tan(n1));
        getch();
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

/***ASPSR**/


/***Simples**/
    void simplesAbecedarioSPSR(){
        int m, w, m5;
        char a ='a';
        system("cls");
        printf("1 Ascendente o 2 Descendente\n");
        scanf("%d",&m5);
        if(m5 == 1){
            for(a; a<='z'; a++){
                printf("%c ",a);
            }
        }if(m5!=1){
            for(a='z'; a>='a'; a--){
                printf("%c ",a);
            }
        }
        getch();
    }
    void simplesParesImparesSPSR(){
        int i;
        system("cls");
        printf("Introduzca número:");
        scanf("%d",&i);

        if (i%2==0) {
           printf("Es par.");
        }
        else
        {
           printf("Es impar.");
        }
        getch();

    }
/***Dobles**/
    void doblesAbecedarioSPSR(){
        int m5;
        char a='a';
        system("cls");
        printf("1 Ascendente o 2 Descendente\n");
        scanf("%d",&m5);
        if(m5 == 1){
                    for(a; a<='z'; a++){
                        printf("%c ",a);
                    }
                }else{
                    for(a='z'; a>='a'; a--){
                        printf("%c ",a);
                    }
                }
                getch();
    }
    void doblesParesImparesSPSR(){
        int i;
        system("cls");
        printf("Introduzca número:");
        scanf("%d",&i);

        if (i%2==0) {
           printf("Es par.");
        }
        else
        {
           printf("Es impar.");
        }
        getch();

    }
/***Multiples**/
    void doblesMesSPSR(){
        int mes;
        system("cls");
        printf("Por favor introdusca el numero del mes \n");
        scanf("%d",&mes);

        switch(mes){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Tu mes tiene 31 dias");
                break;

            case 2:
                printf("Tu mes tiene 28 dias");
                break;
            case 4 : case 6: case 9: case 11:
                printf("Tu mes tiene 30 dias");
                break;


            default:
                printf("Mes no encontrado");

        }
        getch();
    }
    void doblesteclasSPSR(){
        char letra;
        system("cls");
        printf("TECLEA UNA TECLA\n");
        fflush(stdin);
        scanf("%c",&letra);
        switch(letra)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("VOCAL"); break;
        case 'b': case 'c': case 'd': case 'f': case 'g': case 'h':
        case 'j': case 'k': case 'l': case 'm':
        case 'n': case 'p': case 'q': case 'r': case 's':
        case 't': case 'w': case 'x': case 'y': case 'z':
        case 'B': case 'C': case 'D': case 'F': case 'G':
        case 'H': case 'J': case 'K': case 'L': case 'M': case 'N':
        case 'P': case 'Q': case 'R': case 'S': case 'T':
        case 'W': case 'X': case 'Y': case 'Z':
            printf("CONSONANTE"); break;
        case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9': case '0':
            printf("DIGITO");break;
        default:
            printf("CARACTER");

        }
        getch();
    }

void operacionesASPSR(){
    int m,m5;
        do{
            system("cls");
            printf("1 Simples\n2 Dobles\n3 Multiples\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        system("cls");
                        printf("1 Abecedario\n2 Par O Impar\n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                simplesAbecedarioSPSR();
                            break;
                            case 2:
                                simplesParesImparesSPSR();
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
                        system("cls");
                        printf("1 Abecedario\n2 Par O Impar \n3 Salir");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                doblesAbecedarioSPSR();
                            break;
                            case 2:
                                doblesParesImparesSPSR();
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
                        system("cls");
                        printf("1 Mes\n2 Teclas \n3 Salir");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                doblesMesSPSR();
                            break;
                            case 2:
                                doblesteclasSPSR();
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


/***ASPCR**/
/***Simples**/
    int simplesAbecedarioSPCR(){
        int m, w, m5;
        char a ='a';
        system("cls");
        printf("1 Ascendente o 2 Descendente\n");
        scanf("%d",&m5);
        if(m5 == 1){
            for(a; a<='z'; a++){
                printf("%c ",a);
            }
        }if(m5!=1){
            for(a='z'; a>='a'; a--){
                printf("%c ",a);
            }
        }
        getch();
        return(1);
    }
    int simplesParesImparesSPCR(){
        int i;
        system("cls");
        printf("Introduzca número:");
        scanf("%d",&i);

        if (i%2==0) {
           printf("Es par.");
        }
        if(i%2!=0)
        {
           printf("Es impar.");
        }
        getch();
        return(1);
    }
/***Dobles**/
    int doblesAbecedarioSPCR(){
        int m5;
        char a='a';
        system("cls");
        printf("1 Ascendente o 2 Descendente\n");
        scanf("%d",&m5);
        if(m5 == 1){
                for(a; a<='z'; a++){
                    printf("%c ",a);
                }
        }else{
            for(a='z'; a>='a'; a--){
                    printf("%c ",a);
                }
            }
            getch();
                return(1);
    }
    int doblesParesImparesSPCR(){
        int i;
        system("cls");
        printf("Introduzca número:");
        scanf("%d",&i);

        if (i%2==0) {
           printf("Es par.");
        }
        else
        {
           printf("Es impar.");
        }
        getch();
        return(1);

    }
/***Multiples**/
    int MultiplessMesSPCR(){
        int mes;
        system("cls");
        printf("Por favor introdusca el numero del mes \n");
        scanf("%d",&mes);

        switch(mes){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Tu mes tiene 31 dias");
                break;

            case 2:
                printf("Tu mes tiene 28 dias");
                break;
            case 4 : case 6: case 9: case 11:
                printf("Tu mes tiene 30 dias");
                break;


            default:
                printf("Mes no encontrado");

        }
        getch();
        return(1);
    }
    int MultiplesteclasSPCR(){
        char letra;
        system("cls");
        printf("TECLEA UNA TECLA\n");
        fflush(stdin);
        scanf("%c",&letra);
        switch(letra)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("VOCAL"); break;
        case 'b': case 'c': case 'd': case 'f': case 'g': case 'h':
        case 'j': case 'k': case 'l': case 'm':
        case 'n': case 'p': case 'q': case 'r': case 's':
        case 't': case 'w': case 'x': case 'y': case 'z':
        case 'B': case 'C': case 'D': case 'F': case 'G':
        case 'H': case 'J': case 'K': case 'L': case 'M': case 'N':
        case 'P': case 'Q': case 'R': case 'S': case 'T':
        case 'W': case 'X': case 'Y': case 'Z':
            printf("CONSONANTE"); break;
        case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9': case '0':
            printf("DIGITO");break;
        default:
            printf("CARACTER");

        }
        getch();
        return(1);
    }




void operacionesASPCR(){
        int m,m5;
        do{
            system("cls");
            printf("1 Simples\n2 Dobles\n3 Multiples\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        system("cls");
                        printf("1 Abecedario\n2 Par O Impar \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                if(simplesAbecedarioSPCR())
                                    printf("\n\n\n");
                            break;
                            case 2:
                                if(simplesParesImparesSPCR())
                                    printf("\n\n\n");
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
                        system("cls");
                        printf("1 Abecedario\n2 Par O Impar \n3 Salir");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                if(doblesAbecedarioSPCR())
                                    printf("\n\n\n");
                            break;
                            case 2:
                                if(doblesParesImparesSPCR())
                                    printf("\n\n\n");
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
                        system("cls");
                        printf("1 Mes\n2 Teclas \n3 Salir");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                if(MultiplessMesSPCR())
                                    printf("\n\n\n");
                            break;
                            case 2:
                                if(MultiplesteclasSPCR())
                                    printf("\n\n\n");
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





/***ACPSR**/

    void simplesAbecedarioCPSR(int m5){
        int m, w;
        char a ='a';
        if(m5 == 1){
            for(a; a<='z'; a++){
                printf("%c ",a);
            }
        }if(m5!=1){
            for(a='z'; a>='a'; a--){
                printf("%c ",a);
            }
        }
        getch();
    }
    void simplesParesImparesCPSR(int i){
        if (i%2==0) {
           printf("Es par.");
        }
        if(i%2!=0)
        {
           printf("Es impar.");
        }
        getch();
    }

/***Dobles**/
    void doblesAbecedarioCPSR(int m5){
        char a='a';
        system("cls");
        if(m5 == 1){
                    for(a; a<='z'; a++){
                        printf("%c ",a);
                    }
                }else{
                    for(a='z'; a>='a'; a--){
                        printf("%c ",a);
                    }
                    getch();
                }
    }
    void doblesParesImparesCPSR(int i){
        system("cls");
        if (i%2==0) {
           printf("Es par.");
        }
        else
        {
           printf("Es impar.");
        }
        getch();
    }
/***Multiples**/
    void MultiplesMesCPSR(int mes){

        system("cls");
        switch(mes){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Tu mes tiene 31 dias");
                break;

            case 2:
                printf("Tu mes tiene 28 dias");
                break;
            case 4 : case 6: case 9: case 11:
                printf("Tu mes tiene 30 dias");
                break;


            default:
                printf("Mes no encontrado");

        }
        getch();
    }
    void MultiplesteclasCPSR(char letra){
        system("cls");
        switch(letra)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("VOCAL"); break;
        case 'b': case 'c': case 'd': case 'f': case 'g': case 'h':
        case 'j': case 'k': case 'l': case 'm':
        case 'n': case 'p': case 'q': case 'r': case 's':
        case 't': case 'w': case 'x': case 'y': case 'z':
        case 'B': case 'C': case 'D': case 'F': case 'G':
        case 'H': case 'J': case 'K': case 'L': case 'M': case 'N':
        case 'P': case 'Q': case 'R': case 'S': case 'T':
        case 'W': case 'X': case 'Y': case 'Z':
            printf("CONSONANTE"); break;
        case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9': case '0':
            printf("DIGITO");break;
        default:
            printf("CARACTER");

        }
        getch();
    }


void operacionesACPSR(){
        int m,m5,mes,i;
        char letra;
        do{
            system("cls");
            printf("1 Simples\n2 Dobles\n3 Multiples\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        system("cls");
                        printf("1 Abecedario\n2 Par O Impar \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("1 Ascendente o 2 Descendente\n");
                                scanf("%d",&m5);
                                simplesAbecedarioCPSR(m5);

                            break;
                            case 2:
                                printf("Introduzca número:");
                                scanf("%d",&i);
                                simplesParesImparesCPSR(i);
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
                        system("cls");
                        printf("1 Abecedario\n2 Par O Impar \n3 Salir");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("1 Ascendente o 2 Descendente\n");
                                scanf("%d",&m5);
                                doblesAbecedarioCPSR(m5);

                            break;
                            case 2:
                                printf("Introduzca número:");
                                scanf("%d",&i);
                                doblesParesImparesCPSR(i);
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
                        system("cls");
                        printf("1 Mes\n2 Teclas \n3 Salir");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Por favor introdusca el numero del mes \n");
                                scanf("%d",&mes);
                                MultiplesMesCPSR(mes);

                            break;
                            case 2:
                                printf("TECLEA UNA TECLA\n");
                                fflush(stdin);
                                scanf("%c",&letra);
                                MultiplesteclasCPSR(letra);

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





/***ACPCR**/
    int simplesAbecedarioCPCR(int m5){
        int m, w;
        char a ='a';
        system("cls");
        if(m5 == 1){
            for(a; a<='z'; a++){
                printf("%c ",a);
            }
        }if(m5!=1){
            for(a='z'; a>='a'; a--){
                printf("%c ",a);
            }
        }
        getch();
        return(1);
    }
    int simplesParesImparesCPCR(int i){
        system("cls");
        if (i%2==0) {
           printf("Es par.");
        }
        if(i%2!=0)
        {
           printf("Es impar.");
        }
        getch();
        return(1);
    }
/***Dobles**/
    int doblesAbecedarioCPCR(int m5){
        char a='a';
        system("cls");
        if(m5 == 1){
                    for(a; a<='z'; a++){
                        printf("%c ",a);
                    }
                }else{
                    for(a='z'; a>='a'; a--){
                        printf("%c ",a);
                    }
                }
                getch();
                return(1);
    }
    int doblesParesImparesCPCR(int i){
        system("cls");
        if (i%2==0) {
           printf("Es par.");
        }
        else
        {
           printf("Es impar.");
        }
        getch();
        return(1);
    }
/***Multiples**/
    int MultiplesMesCPCR(int mes){
        system("cls");

        switch(mes){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Tu mes tiene 31 dias");
                break;

            case 2:
                printf("Tu mes tiene 28 dias");
                break;
            case 4 : case 6: case 9: case 11:
                printf("Tu mes tiene 30 dias");
                break;


            default:
                printf("Mes no encontrado");

        }
        getch();
        return(1);
    }
    int MultiplesteclasCPCR(char letra){
        system("cls");
        switch(letra)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("VOCAL"); break;
        case 'b': case 'c': case 'd': case 'f': case 'g': case 'h':
        case 'j': case 'k': case 'l': case 'm':
        case 'n': case 'p': case 'q': case 'r': case 's':
        case 't': case 'w': case 'x': case 'y': case 'z':
        case 'B': case 'C': case 'D': case 'F': case 'G':
        case 'H': case 'J': case 'K': case 'L': case 'M': case 'N':
        case 'P': case 'Q': case 'R': case 'S': case 'T':
        case 'W': case 'X': case 'Y': case 'Z':
            printf("CONSONANTE"); break;
        case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9': case '0':
            printf("DIGITO");break;
        default:
            printf("CARACTER");

        }
        getch();
        return(1);
    }




void operacionesACPCR(){
            int m,m5,mes,i;
            char letra;
        do{
            system("cls");
            printf("1 Simples\n2 Dobles\n3 Multiples\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        system("cls");
                        printf("1 Abecedario\n2 Par O Impar \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("1 Ascendente o 2 Descendente\n");
                                scanf("%d",&m5);
                                if(simplesAbecedarioCPCR(m5))
                                    printf("\n\n\n");
                            break;
                            case 2:
                                printf("Introduzca número:");
                                scanf("%d",&i);
                                if(simplesParesImparesCPCR(i))
                                    printf("\n\n\n");
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
                        system("cls");
                        printf("1 Abecedario\n2 Par O Impar \n3 Salir");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("1 Ascendente o 2 Descendente\n");
                                scanf("%d",&m5);
                                if(doblesAbecedarioCPCR(m5))
                                    printf("\n\n\n");

                            break;
                            case 2:
                                printf("Introduzca número:");
                                scanf("%d",&i);
                                if(doblesParesImparesCPCR(i))
                                    printf("\n\n\n");
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
                        system("cls");
                        printf("1 Mes\n2 Teclas \n3 Salir");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Por favor introdusca el numero del mes \n");
                                scanf("%d",&mes);
                                if(MultiplesMesCPCR(mes))
                                    printf("\n\n\n");

                            break;
                            case 2:
                                printf("TECLEA UNA TECLA\n");
                                fflush(stdin);
                                scanf("%c",&letra);
                                if(MultiplesteclasCPCR(letra))
                                    printf("\n\n\n");

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
            getch();
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
            getch();
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
                getch();
        }

    /***For**/
        void flechaFRSPSR(){
            int m,i,j,k,c,e,t;
            printf("Introdusca su Tamaño\n");
            scanf("%d",&t);
            system("cls");
            printf("\toperacion realizada con el ciclo For\n");
                c=t+1;
                e=t;
                for(i=0; i<=t;i++){

                //for espacio antes
                    if(c != 0){
                        for(k=0;k<=e;k++){
                            printf("%c",32);
                        }
                    }

                    //for espacio entre
                    for(j=1; j<=i; j++){
                        printf("%c",32);
                        printf("*");
                    }
                            c--;
                            e--;

                    printf("\n");
                }


                //for despues
                e=0;

                for(i=0; i<=2;i++){
                    for(k=0;k<=t-1;k++){
                        printf("%c",32);
                    }
                //for espacio entre
                    for(j=1; j<=2; j++){
                        printf("*");
                        printf("%c",32);
                    }
                    printf("\n");
                }
                getch();
        }
    /***While**/
        void flechaWRSPSR(){
            int m,i,j,k,c,e,t;
            printf("Introdusca su Tamaño\n");
            scanf("%d",&t);
            system("cls");
            printf("\toperacion realizada con el ciclo While\n");
                c=t+1;
                e=t;
                i=0;
                while(i<=t){

                //for espacio antes
                    if(c != 0){
                        k=0;
                        while(k<=e){
                            printf("%c",32);
                            k++;
                        }
                    }

                    //for espacio entre
                    j=1;
                    while(j<=i){
                        printf("%c",32);
                        printf("*");
                        j++;
                    }
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }


                //for despues
                e=0;
                i=0;
                while(i<=2){
                    k=0;
                    while(k<=t-1){
                        printf("%c",32);
                        k++;
                    }
                //for espacio entre
                    j=1;
                    while(j<=2){
                        printf("*");
                        printf("%c",32);
                        j++;
                    }
                    printf("\n");
                    i++;
                }
                getch();

        }
    /***Do-While**/
        void flechaDWRSPSR(){
            int m,i,j,k,c,e,t;
            printf("Introdusca su Tamaño\n");
            scanf("%d",&t);
            printf("\toperacion realizada con el ciclo Do-While\n");
            system("cls");
                c=t+1;
                e=t;
                i=1;
                do{

                //for espacio antes
                    if(c != 0){
                        k=1;
                        do{
                            printf("%c",32);
                            k++;
                        }while(k<=e);
                    }

                    //for espacio entre
                    j=1;
                    do{
                        printf("%c",32);
                        printf("*");
                        j++;
                    }while(j<=i);
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }while(i<=t);


                //for despues
                e=0;
                i=0;
               do{
                    k=0;
                    do{
                        printf("%c",32);
                        k++;
                    }while(k<=t-1);
                //for espacio entre
                    j=1;
                    do{
                        printf("*");
                        printf("%c",32);
                        j++;
                    }while(j<=2);
                    printf("\n");
                    i++;
                } while(i<=2);
                getch();
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
                    system("cls");
                    printf("1 Cuadro\n2 Flecha \n3 Salir\n");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            cuadroFRSPSR();
                        break;
                        case 2:
                            flechaFRSPSR();
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
                    system("cls");
                    printf("1 Cuadro\n2 Flecha \n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            cuadroWRSPSR();
                        break;
                        case 2:
                            flechaWRSPSR();
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
                    system("cls");
                    printf("1 Cuadro\n2 Flecha\n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            cuadroDWRSPSR();
                        break;
                        case 2:
                            flechaDWRSPSR();
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
            getch();
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
                getch();
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
                getch();
        }

    /***For**/
        void flechaFRCPSR(int t){
            int m,i,j,k,c,e;
            system("cls");
                printf("\toperacion realizada con el ciclo For\n");
                c=t+1;
                e=t;
                for(i=0; i<=t;i++){

                //for espacio antes
                    if(c != 0){
                        for(k=0;k<=e;k++){
                            printf("%c",32);
                        }
                    }

                    //for espacio entre
                    for(j=1; j<=i; j++){
                        printf("%c",32);
                        printf("*");
                    }
                            c--;
                            e--;

                    printf("\n");
                }


                //for despues
                e=0;

                for(i=0; i<=2;i++){
                    for(k=0;k<=t-1;k++){
                        printf("%c",32);
                    }
                //for espacio entre
                    for(j=1; j<=2; j++){
                        printf("*");
                        printf("%c",32);
                    }
                    printf("\n");
                }
                getch();
        }
    /***While**/
        void flechaWRCPSR(int t){
            int m,i,j,k,c,e;
            system("cls");
                printf("\toperacion realizada con el ciclo While\n");
                c=t+1;
                e=t;
                i=0;
                while(i<=t){

                //for espacio antes
                    if(c != 0){
                        k=0;
                        while(k<=e){
                            printf("%c",32);
                            k++;
                        }
                    }

                    //for espacio entre
                    j=1;
                    while(j<=i){
                        printf("%c",32);
                        printf("*");
                        j++;
                    }
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }


                //for despues
                e=0;
                i=0;
                while(i<=2){
                    k=0;
                    while(k<=t-1){
                        printf("%c",32);
                        k++;
                    }
                //for espacio entre
                    j=1;
                    while(j<=2){
                        printf("*");
                        printf("%c",32);
                        j++;
                    }
                    printf("\n");
                    i++;
                }
                getch();
        }
    /***Do-While**/
        void flechaDWRCPSR(int t){
            int m,i,j,k,c,e;
            system("cls");
                printf("\toperacion realizada con el ciclo Do-While\n");
                c=t+1;
                e=t;
                i=1;
                do{

                //for espacio antes
                    if(c != 0){
                        k=1;
                        do{
                            printf("%c",32);
                            k++;
                        }while(k<=e);
                    }

                    //for espacio entre
                    j=1;
                    do{
                        printf("%c",32);
                        printf("*");
                        j++;
                    }while(j<=i);
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }while(i<=t);


                //for despues
                e=0;
                i=0;
               do{
                    k=0;
                    do{
                        printf("%c",32);
                        k++;
                    }while(k<=t-1);
                //for espacio entre
                    j=1;
                    do{
                        printf("*");
                        printf("%c",32);
                        j++;
                    }while(j<=2);
                    printf("\n");
                    i++;
                } while(i<=2);
                getch();
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
                    system("cls");
                    printf("1 Cuadro\n2 Flecha \n3 Salir\n");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            cuadroFRCPSR(tam);
                        break;
                        case 2:
                            printf("Introdusca su Tamaño\n");
                            scanf("%d",&tam);
                            flechaFRCPSR(tam);
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
                    system("cls");
                    printf("1 Cuadro\n2 \n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            cuadroWRCPSR(tam);
                        break;
                        case 2:
                            printf("Introdusca su Tamaño\n");
                            scanf("%d",&tam);
                            flechaWRCPSR(tam);
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
                    system("cls");
                    printf("1 Cuadro\n2 While\n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            cuadroDWRCPSR(tam);
                        break;
                        case 2:
                            printf("Introdusca su Tamaño\n");
                            scanf("%d",&tam);
                            flechaDWRCPSR(tam);
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
            getch();
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
                getch();
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
            getch();
            return(1);
        }

    /***For**/
        int flechaFRSPCR(){
            int m,i,j,k,c,e,t;
            printf("Introdusca su Tamaño\n");
            scanf("%d",&t);

            printf("\toperacion realizada con el ciclo For\n");
            system("cls");
                c=t+1;
                e=t;
                for(i=0; i<=t;i++){

                //for espacio antes
                    if(c != 0){
                        for(k=0;k<=e;k++){
                            printf("%c",32);
                        }
                    }

                    //for espacio entre
                    for(j=1; j<=i; j++){
                        printf("%c",32);
                        printf("*");
                    }
                            c--;
                            e--;

                    printf("\n");
                }


                //for despues
                e=0;

                for(i=0; i<=2;i++){
                    for(k=0;k<=t-1;k++){
                        printf("%c",32);
                    }
                //for espacio entre
                    for(j=1; j<=2; j++){
                        printf("*");
                        printf("%c",32);
                    }
                    printf("\n");
                }
                getch();
                return(1);
        }
    /***While**/
        int flechaWRSPCR(){
            int m,i,j,k,c,e,t;
            printf("Introdusca su Tamaño\n");
            scanf("%d",&t);

            printf("\toperacion realizada con el ciclo While\n");
            system("cls");
                c=t+1;
                e=t;
                i=0;
                while(i<=t){

                //for espacio antes
                    if(c != 0){
                        k=0;
                        while(k<=e){
                            printf("%c",32);
                            k++;
                        }
                    }

                    //for espacio entre
                    j=1;
                    while(j<=i){
                        printf("%c",32);
                        printf("*");
                        j++;
                    }
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }


                //for despues
                e=0;
                i=0;
                while(i<=2){
                    k=0;
                    while(k<=t-1){
                        printf("%c",32);
                        k++;
                    }
                //for espacio entre
                    j=1;
                    while(j<=2){
                        printf("*");
                        printf("%c",32);
                        j++;
                    }
                    printf("\n");
                    i++;
                }
                getch();
                return(1);
        }
    /***Do-While**/
        int flechaDWRSPCR(){
            int m,i,j,k,c,e,t;
            printf("Introdusca su Tamaño\n");
            scanf("%d",&t);
            printf("\toperacion realizada con el ciclo Do-While\n");
            system("cls");

                c=t+1;
                e=t;
                i=1;
                do{

                //for espacio antes
                    if(c != 0){
                        k=1;
                        do{
                            printf("%c",32);
                            k++;
                        }while(k<=e);
                    }

                    //for espacio entre
                    j=1;
                    do{
                        printf("%c",32);
                        printf("*");
                        j++;
                    }while(j<=i);
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }while(i<=t);


                //for despues
                e=0;
                i=0;
               do{
                    k=0;
                    do{
                        printf("%c",32);
                        k++;
                    }while(k<=t-1);
                //for espacio entre
                    j=1;
                    do{
                        printf("*");
                        printf("%c",32);
                        j++;
                    }while(j<=2);
                    printf("\n");
                    i++;
                } while(i<=2);
                getch();
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
                    system("cls");
                    printf("1 Cuadro\n2 \n3 Salir\n");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            if(cuadroFRSPCR())
                                printf("\n\n\n");
                        break;
                        case 2:
                            if(flechaFRSPCR())
                                 printf("\n\n\n");
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
                    system("cls");
                    printf("1 Cuadro\n2 \n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            if(cuadroWRSPCR())
                                printf("\n\n\n");
                        break;
                        case 2:
                            if(flechaWRSPCR())
                                 printf("\n\n\n");
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
                    system("cls");
                    printf("1 Cuadro\n2 While\n3 Salir");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            if(cuadroDWRSPCR())
                                printf("\n\n\n");
                        break;
                        case 2:
                            if(flechaDWRSPCR())
                                 printf("\n\n\n");
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
            getch();
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
                getch();
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
                getch();
                return(1);
        }

    /***For**/
        int flechaFRCPCR(int t){
            int m,i,j,k,c,e;


            printf("\toperacion realizada con el ciclo For\n");
            system("cls");
                c=t+1;
                e=t;
                for(i=0; i<=t;i++){

                //for espacio antes
                    if(c != 0){
                        for(k=0;k<=e;k++){
                            printf("%c",32);
                        }
                    }

                    //for espacio entre
                    for(j=1; j<=i; j++){
                        printf("%c",32);
                        printf("*");
                    }
                            c--;
                            e--;

                    printf("\n");
                }


                //for despues
                e=0;

                for(i=0; i<=2;i++){
                    for(k=0;k<=t-1;k++){
                        printf("%c",32);
                    }
                //for espacio entre
                    for(j=1; j<=2; j++){
                        printf("*");
                        printf("%c",32);
                    }
                    printf("\n");
                }
                getch();
                return(1);
        }
    /***While**/
        int flechaWRCPCR(int t){
            int m,i,j,k,c,e;


            printf("\toperacion realizada con el ciclo While\n");
            system("cls");
                c=t+1;
                e=t;
                i=0;
                while(i<=t){

                //for espacio antes
                    if(c != 0){
                        k=0;
                        while(k<=e){
                            printf("%c",32);
                            k++;
                        }
                    }

                    //for espacio entre
                    j=1;
                    while(j<=i){
                        printf("%c",32);
                        printf("*");
                        j++;
                    }
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }


                //for despues
                e=0;
                i=0;
                while(i<=2){
                    k=0;
                    while(k<=t-1){
                        printf("%c",32);
                        k++;
                    }
                //for espacio entre
                    j=1;
                    while(j<=2){
                        printf("*");
                        printf("%c",32);
                        j++;
                    }
                    printf("\n");
                    i++;
                }
                getch();
                return(1);
        }
    /***Do-While**/
        int flechaDWRCPCR(int t){
            int m,i,j,k,c,e;
            printf("\toperacion realizada con el ciclo Do-While\n");
            system("cls");

                c=t+1;
                e=t;
                i=1;
                do{

                //for espacio antes
                    if(c != 0){
                        k=1;
                        do{
                            printf("%c",32);
                            k++;
                        }while(k<=e);
                    }

                    //for espacio entre
                    j=1;
                    do{
                        printf("%c",32);
                        printf("*");
                        j++;
                    }while(j<=i);
                            c--;
                            e--;

                    printf("\n");
                    i++;
                }while(i<=t);


                //for despues
                e=0;
                i=0;
               do{
                    k=0;
                    do{
                        printf("%c",32);
                        k++;
                    }while(k<=t-1);
                //for espacio entre
                    j=1;
                    do{
                        printf("*");
                        printf("%c",32);
                        j++;
                    }while(j<=2);
                    printf("\n");
                    i++;
                } while(i<=2);
                getch();
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
                    system("cls");
                    printf("1 Cuadro\n2 Flecha \n3 Salir\n");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            if(cuadroFRCPCR(tam))
                                printf("\n\n\n");
                        break;
                        case 2:
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            if(flechaFRCPCR(tam))
                                printf("\n\n\n");
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
                    system("cls");
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
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            if(flechaWRCPCR(tam))
                                printf("\n\n\n");
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
                    system("cls");
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
                            printf("Introdusca su Base\n");
                            scanf("%d",&tam);
                            if(flechaDWRCPCR(tam))
                                printf("\n\n\n");
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



/***SubMenu 4**/


/***ARSPSR**/
    /***For**/
        void sumaArreglosFARSPSR(){
            int tam=100;
            int t, lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
            }

            for(i=0;i<t;i++){
                lista3[i] = lista[i] + lista2[i];
            }

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            for(i=0;i<t;i++){
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
            }
                            getch();

        }
    /***While**/
        void sumaArreglosWARSPSR(){
            int tam=100;
            int t, lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
                i++;
            }
            i=0;
            while(i<t){
                lista3[i] = lista[i] + lista2[i];
                i++;
            }

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            i=0;
            while(i<t){
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
                i++;
            }
            getch();
        }
    /***Do-While**/
        void sumaArreglosDWARSPSR(){
            int tam=100;
            int t, lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
                i++;
            }while(i<t);
            i=0;
            do{
                lista3[i] = lista[i] + lista2[i];
                i++;
            }while(i<t);

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            i=0;
            do{
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
                i++;
            }while(i<t);
            getch();
        }

    /***For**/
        void sumaParesImparesFARSPSR(){
            int tam=100;
            int t, lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }

            for(i=0;i<t;i++){
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }

            }

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
        }
    /***While**/
        void sumaParesImparesWARSPSR(){
            int tam=100;
            int t, lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            i=0;
            while(i<t){
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }
                i++;
            }

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
        }
    /***Do-While**/
        void sumaParesImparesDWARSPSR(){
            int tam=100;
            int t, lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            i=0;
            do{
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }
                i++;
            }while(i<t);

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
        }

    void operacionesARSPSR(){
        int m,m5;
        do{
            system("cls");
            printf("1 For\n2 While\n3 Do-While\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        system("cls");
                        printf("1 Suma Arreglos(Bidimensional)\n2 Mostrar(Unidimensional) \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                sumaArreglosFARSPSR();
                            break;
                            case 2:
                                sumaParesImparesFARSPSR();
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
                        system("cls");
                        printf("1 Suma Arreglos (Bidimensional)\n2 Pares E Impares (Unidimensional) \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                sumaArreglosWARSPSR();
                            break;
                            case 2:
                                sumaParesImparesWARSPSR();
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
                        system("cls");
                        printf("1 Suma Arreglos (Bidimensional)\n2 Pares E Impares (Unidimensional) \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                sumaArreglosDWARSPSR();
                            break;
                            case 2:
                                sumaParesImparesDWARSPSR();
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



/***ARSPCR**/

    /***For**/
        int sumaArreglosFARSPCR(){
            int tam=100;
            system("cls");
            int t, lista[tam],lista2[tam], lista3[tam],m,i,r;
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);

            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
            }

            for(i=0;i<t;i++){
                lista3[i] = lista[i] + lista2[i];
            }

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            for(i=0;i<t;i++){
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
            }
            getch();
            return(1);
        }
    /***While**/
        int sumaArreglosWARSPCR(){
            int tam=100;
            int t, lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
                i++;
            }
            i=0;
            while(i<t){
                lista3[i] = lista[i] + lista2[i];
                i++;
            }

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            i=0;
            while(i<t){
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
                i++;
            }
            getch();
            return(1);
        }
    /***Do-While**/
        int sumaArreglosDWARSPCR(){
            int tam=100;
            int t, lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
                i++;
            }while(i<t);
            i=0;
            do{
                lista3[i] = lista[i] + lista2[i];
                i++;
            }while(i<t);

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            i=0;
            do{
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
                i++;
            }while(i<t);
            getch();
            return(1);
        }

    /***For**/
        int sumaParesImparesFARSPCR(){
            int tam=100;
            int t, lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }

            for(i=0;i<t;i++){
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }

            }

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
            return(1);
        }
    /***While**/
        int sumaParesImparesWARSPCR(){
            int tam=100;
            int t, lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            i=0;
            while(i<t){
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }
                i++;
            }

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
            return(1);
        }
    /***Do-While**/
        int sumaParesImparesDWARSPCR(){
            int tam=100;
            int t, lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Por favor ingrese el tamaño de la lista \n");
            scanf("%d",&t);
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            i=0;
            do{
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }
                i++;
            }while(i<t);

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
            return(1);
        }

    void operacionesARSPCR(){
        int m,m5;
        do{
            system("cls");
            printf("1 For\n2 While\n3 Do-While\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        system("cls");
                        printf("1 Suma Arreglos\n2 Pares E Impares \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                if(sumaArreglosFARSPCR())
                                    printf("\n\n\n");
                            break;
                            case 2:
                                if(sumaParesImparesFARSPCR())
                                    printf("\n\n\n");
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
                        system("cls");
                        printf("1 Suma Arreglos\n2 Pares E Impares \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                if(sumaArreglosWARSPCR())
                                    printf("\n\n\n");
                            break;
                            case 2:
                                if(sumaParesImparesWARSPCR())
                                    printf("\n\n\n");
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
                        system("cls");
                        printf("1 Suma Arreglos\n2 Pares E Impares \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                if(sumaArreglosDWARSPCR())
                                    printf("\n\n\n");
                            break;
                            case 2:
                                if(sumaParesImparesDWARSPCR())
                                    printf("\n\n\n");
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

/***ARCPSR**/

    /***For**/
        void sumaArreglosFARCPSR(int t){
            int tam=100;
            int lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
            }

            for(i=0;i<t;i++){
                lista3[i] = lista[i] + lista2[i];
            }

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            for(i=0;i<t;i++){
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
            }
            getch();
        }
    /***While**/
        void sumaArreglosWARCPSR(int t){
            int tam=100;
            int lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
                i++;
            }
            i=0;
            while(i<t){
                lista3[i] = lista[i] + lista2[i];
                i++;
            }

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            i=0;
            while(i<t){
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
                i++;
            }
            getch();
        }
    /***Do-While**/
        void sumaArreglosDWARCPSR(int t){
            int tam=100;
            int lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
                i++;
            }while(i<t);
            i=0;
            do{
                lista3[i] = lista[i] + lista2[i];
                i++;
            }while(i<t);

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            i=0;
            do{
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
                i++;
            }while(i<t);
            getch();
        }

    /***For**/
        void sumaParesImparesFARCPSR(int t){
            int tam=100;
            int lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }

            for(i=0;i<t;i++){
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }

            }

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
        }
    /***While**/
        void sumaParesImparesWARCPSR(int t){
            int tam=100;
            int lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            i=0;
            while(i<t){
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }
                i++;
            }

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
        }
    /***Do-While**/
        void sumaParesImparesDWARCPSR(int t){
            int tam=100;
            int lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            i=0;
            do{
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }
                i++;
            }while(i<t);

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
        }

    void operacionesARCPSR(){
        int m,m5,tam;
        do{
            system("cls");
            printf("1 For\n2 While\n3 Do-While\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        system("cls");
                        printf("1 Suma Arreglos\n2 Pares E Impares \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                sumaArreglosFARCPSR(tam);

                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                sumaParesImparesFARCPSR(tam);

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
                        system("cls");
                        printf("1 Suma Arreglos\n2 Pares E Impares \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                sumaArreglosWARCPSR(tam);

                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                sumaParesImparesWARCPSR(tam);

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
                        system("cls");
                        printf("1 Suma Arreglos\n2 Pares E Impares \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                sumaArreglosDWARCPSR(tam);

                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                sumaParesImparesDWARCPSR(tam);

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

/***ARCPCR**/
    /***For**/
        int sumaArreglosFARCPCR(int t){
            int tam=100;
            int lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
            }

            for(i=0;i<t;i++){
                lista3[i] = lista[i] + lista2[i];
            }

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            for(i=0;i<t;i++){
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
            }
            getch();
            return(1);
        }
    /***While**/
        int sumaArreglosWARCPCR(int t){
                        int tam=100;
            int lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
                i++;
            }
            i=0;
            while(i<t){
                lista3[i] = lista[i] + lista2[i];
                i++;
            }

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            i=0;
            while(i<t){
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
                i++;
            }
            getch();
            return(1);
        }
    /***Do-While**/
        int sumaArreglosDWARCPCR(int t){
            int tam=100;
            int lista[tam],lista2[tam], lista3[tam],m,i,r;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            system("cls");
            printf("Ingrese Los Elementos de lista 2\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista2[i]);
                i++;
            }while(i<t);
            i=0;
            do{
                lista3[i] = lista[i] + lista2[i];
                i++;
            }while(i<t);

            printf("\n");
            printf("Posicion\t Arreglo 1\t Arreglo 2\t Arreglo 3\n");
            i=0;
            do{
                printf("%d\t\t  %d\t\t %d\t\t %d\n", i,lista[i],lista2[i],lista3[i]);
                i++;
            }while(i<t);
            getch();
            return(1);
        }

    /***For**/
        int sumaParesImparesFARCPCR(int t){
            int tam=100;
            int lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            for(i=0;i<t;i++){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
            }

            for(i=0;i<t;i++){
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }

            }

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
            return(1);
        }
    /***While**/
        int sumaParesImparesWARCPCR(int t){
            int tam=100;
            int lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            while(i<t){
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }
            i=0;
            while(i<t){
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }
                i++;
            }

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
            return(1);
        }
    /***Do-While**/
        int sumaParesImparesDWARCPCR(int t){
            int tam=100;
            int lista[tam], m, i, r, par, impar, parC, imparC;
            parC=0;
            imparC=0;
            par=0;
            impar=0;
            system("cls");
            printf("Ingrese Los Elementos de lista 1\n");
            i=0;
            do{
                printf("Elemento %d ",i+1);
                scanf("%d",&lista[i]);
                i++;
            }while(i<t);
            i=0;
            do{
               if(lista[i] % 2 == 0){
                    parC++;
                    par=par+lista[i];
               }
               if(lista[i] % 2 == 1){
                    imparC++;
                    impar=impar+lista[i];
               }
                i++;
            }while(i<t);

            printf("\n");
            printf("suma de pares:%d\ncantidad de pares:%d\nsuma de impares:%d\ncantidad de impares:%d\n",par,parC,impar,imparC);
            getch();
            return(1);
        }

    void operacionesARCPCR(){
        int m,m5,tam;
        do{
            system("cls");
            printf("1 For\n2 While\n3 Do-While\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        system("cls");
                        printf("1 Suma Arreglos\n2 Pares E Impares \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                if(sumaArreglosFARCPCR(tam))
                                    printf("\n\n\n");
                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                if(sumaParesImparesFARCPCR(tam))
                                    printf("\n\n\n");
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
                        system("cls");
                        printf("1 Suma Arreglos\n2 Pares E Impares \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                if(sumaArreglosWARCPCR(tam))
                                    printf("\n\n\n");
                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                if(sumaParesImparesWARCPCR(tam))
                                    printf("\n\n\n");
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
                        system("cls");
                        printf("1 Suma Arreglos\n2 Pares E Impares \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                if(sumaArreglosDWARCPCR(tam))
                                printf("\n\n\n");
                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                if(sumaParesImparesDWARCPCR(tam))
                                    printf("\n\n\n");
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


/***Fin**/



/***SubMenu 5**/

/***ARSPSR**/
    /***For**/
        void oneFARSPSR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
            printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            scanf("%f",&trabajador.costoHr);

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
        }
    /***While**/
        void oneWARSPSR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
            printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            scanf("%f",&trabajador.costoHr);

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
        }
    /***Do-While**/
        void oneDWARSPSR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
            printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            scanf("%f",&trabajador.costoHr);

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
        }
    /***For**/
        void arrayFARSPSR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            int i,num;
            system("cls");
            printf("Usuarios a registrar\n");
            scanf("%d",&num);
            for(i=0;i<num;i++){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
            }
            system("cls");
            for(i=0;i<num;i++){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
            }
            getch();
        }
    /***While**/
        void arrayWARSPSR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            int i,num;
            system("cls");
            printf("Usuarios a registrar\n");
            scanf("%d",&num);
            i=0;
            while(i<num){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
                i++;
            }
            system("cls");
            i=0;
            while(i<num){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
                i++;
            }
            getch();
        }
    /***Do-While**/
        void arrayDWARSPSR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            int i,num;
            system("cls");
            printf("Usuarios a registrar\n");
            scanf("%d",&num);
            i=0;
            do{
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
                i++;
            }while(i<num);
            system("cls");
            i=0;
            do{
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
                i++;
            }while(i<num);
        }
    void operacionesRRSPSR(){
        int m,m5;
        do{
            system("cls");
            printf("1 For\n2 While\n3 Do-While\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        system("cls");
                        printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                oneFARSPSR();
                            break;
                            case 2:
                                arrayFARSPSR();
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
                        system("cls");
                        printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                oneWARSPSR();
                            break;
                            case 2:
                                arrayWARSPSR();
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
                        system("cls");
                        printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                oneDWARSPSR();
                            break;
                            case 2:
                                arrayDWARSPSR();
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

/***ARSPCR**/
    /***For**/
        int oneFARSPCR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
            printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            scanf("%f",&trabajador.costoHr);

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
            return(1);
        }
    /***While**/
        int oneWARSPCR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
            printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            scanf("%f",&trabajador.costoHr);

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
            return(1);
        }
    /***Do-While**/
        int oneDWARSPCR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
            printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            scanf("%f",&trabajador.costoHr);

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
            return(1);
        }
    /***For**/
        int arrayFARSPCR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            int i,num;
            system("cls");
            printf("Usuarios a registrar\n");
            scanf("%d",&num);
            for(i=0;i<num;i++){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
            }
            system("cls");
            for(i=0;i<num;i++){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
            }
            getch();
            return(1);
        }
    /***While**/
        int arrayWARSPCR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            int i,num;
            system("cls");
            printf("Usuarios a registrar\n");
            scanf("%d",&num);
            i=0;
            while(i<num){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
                i++;
            }
            system("cls");
            i=0;
            while(i<num){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
                i++;
            }
            getch();
            return(1);
        }
    /***Do-While**/
        int arrayDWARSPCR(){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            int i,num;
            system("cls");
            printf("Usuarios a registrar\n");
            scanf("%d",&num);
            i=0;
            while(i<num){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
                i++;
            }
            system("cls");
            i=0;
            while(i<num){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
                i++;
            }
            getch();
            return(1);
        }
    void operacionesRRSPCR(){
        int m,m5;
        do{
            system("cls");
            printf("1 For\n2 While\n3 Do-While\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        system("cls");
                        printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                if(oneFARSPCR())
                                    printf("\n\n\n");
                            break;
                            case 2:
                                if(arrayFARSPCR())
                                    printf("\n\n\n");
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
                        system("cls");
                        printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                if(oneWARSPCR())
                                   printf("\n\n\n");
                            break;
                            case 2:
                                if(arrayWARSPCR())
                                    printf("\n\n\n");
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
                        system("cls");
                        printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                if(oneDWARSPCR())
                                    printf("\n\n\n");
                            break;
                            case 2:
                                if(arrayDWARSPCR())
                                    printf("\n\n\n");
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

/***ARCPSR**/
 /***For**/
        void oneFARCPSR(float c){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
            printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            trabajador.costoHr=c;

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
        }
    /***While**/
        void oneWARCPSR(float c){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
            printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            trabajador.costoHr=c;

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
        }
    /***Do-While**/
        void oneDWARCPSR(float c){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
            printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            trabajador.costoHr=c;

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
        }
    /***For**/
        void arrayFARCPSR(int num){
             struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            int i;
            system("cls");
            for(i=0;i<num;i++){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
            }
            system("cls");
            for(i=0;i<num;i++){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
            }
            getch();
        }
    /***While**/
        void arrayWARCPSR(int num){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            int i;
            system("cls");

            i=0;
            while(i<num){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
                i++;
            }
            system("cls");
            i=0;
            while(i<num){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
                i++;
            }
            getch();
        }
    /***Do-While**/
        void arrayDWARCPSR(int num){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            int i;
            system("cls");
            i=0;
            while(i<num){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
                i++;
            }
            system("cls");
            i=0;
            while(i<num){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
                i++;
            }
            getch();
        }
    void operacionesRRCPSR(){
        int m,m5,tam;
        float a;
        system("cls");
        do{
            system("cls");
            printf("1 For\n2 While\n3 Do-While\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Costo Hora\n");
                                scanf("%f",&a);
                                oneFARCPSR(a);
                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                arrayFARCPSR(tam);
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
                         printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Costo Hora\n");
                                scanf("%f",&a);
                                oneWARCPSR(a);
                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                arrayWARCPSR(tam);
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
                         printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Costo Hora\n");
                                scanf("%f",&a);
                                oneDWARCPSR(a);
                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                arrayDWARCPSR(tam);
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

/***ARCPCR**/
    /***For**/
        int oneFARCPCR(float c){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
            printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            trabajador.costoHr=c;

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
            return(1);
        }
    /***While**/
        int oneWARCPCR(float c){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
                        printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            trabajador.costoHr=c;

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
            return(1);
        }
    /***Do-While**/
        int oneDWARCPCR(float c){
            struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador;
            system("cls");
                        printf("Ingresa el Nombre\n");
            fflush(stdin);
            gets(trabajador.nombre);
            printf("Ingresa el Departamento\n");
            fflush(stdin);
            gets(trabajador.departamento);
            printf("Ingresa el puesto\n");
            fflush(stdin);
            gets(trabajador.puesto);

            printf("Ingrese las horas trabajadas\n");
            scanf("%d",&trabajador.hrsT);
            printf("Ingrese El costo de hora\n");
            trabajador.costoHr=c;

            trabajador.sueldoB=trabajador.costoHr*trabajador.hrsT;
            trabajador.impuestos=trabajador.sueldoB*.30;
            trabajador.total=trabajador.sueldoB-trabajador.impuestos;

            printf("El Nombre es %s\n",trabajador.nombre);
            printf("El Departamento es %s\n",trabajador.departamento);
            printf("El Puesto es %s\n",trabajador.puesto);
            printf("Las Horas son %d\n",trabajador.hrsT);
            printf("El Costo de horas es %.2f\n",trabajador.costoHr);
            printf("El Sueldo Base es %.2f\n",trabajador.sueldoB);
            printf("Los Impuestos son %.2f\n",trabajador.impuestos);
            printf("El Sueldo Total es %.2f\n",trabajador.total);
            getch();
            return(1);
        }
    /***For**/
        int arrayFARCPCR(int num){
              struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            system("cls");
            int i;
            for(i=0;i<num;i++){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
            }
            system("cls");
            for(i=0;i<num;i++){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
            }
            getch();
            return(1);
        }
    /***While**/
        int arrayWARCPCR(int num){
              struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            system("cls");
            int i;

            i=0;
            while(i<num){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
                i++;
            }
            system("cls");
            i=0;
            while(i<num){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
                i++;
            }
            getch();
            return(1);
        }
    /***Do-While**/
        int arrayDWARCPCR(int num){
              struct{
                char nombre[20], departamento[20], puesto[20];
                int hrsT;
                float costoHr, sueldoB, impuestos, total;
            } trabajador[100];
            system("cls");
            int i;
            i=0;
            while(i<num){
                system("cls");
                printf("Ingresa el Nombre\n");
                fflush(stdin);
                gets(trabajador[i].nombre);
                printf("Ingresa el Departamento\n");
                fflush(stdin);
                gets(trabajador[i].departamento);
                printf("Ingresa el puesto\n");
                fflush(stdin);
                gets(trabajador[i].puesto);

                printf("Ingrese las horas trabajadas\n");
                scanf("%d",&trabajador[i].hrsT);
                printf("Ingrese El costo de hora\n");
                scanf("%f",&trabajador[i].costoHr);

                printf("\n");
                trabajador[i].sueldoB=trabajador[i].costoHr*trabajador[i].hrsT;
                trabajador[i].impuestos=trabajador[i].sueldoB*.30;
                trabajador[i].total=trabajador[i].sueldoB-trabajador[i].impuestos;
                i++;
            }
            system("cls");
            i=0;
            while(i<num){
                printf("El Nombre es %s\n",trabajador[i].nombre);
                printf("El Departamento es %s\n",trabajador[i].departamento);
                printf("El Puesto es %s\n",trabajador[i].puesto);
                printf("Las Horas son %d\n",trabajador[i].hrsT);
                printf("El Costo de horas es %.2f\n",trabajador[i].costoHr);
                printf("El Sueldo Base es %.2f\n",trabajador[i].sueldoB);
                printf("Los Impuestos son %.2f\n",trabajador[i].impuestos);
                printf("El Sueldo Total es %.2f\n",trabajador[i].total);

                printf("\n\n");
                i++;
            }
            getch();
            return(1);
        }
    void operacionesRRCPCR(){
        int m,m5,tam;
        float a;
        system("cls");
        do{
            system("cls");
            printf("1 For\n2 While\n3 Do-While\n4 Salir");
            scanf("%d",&m);
            switch(m){
                case 1:
                    do{
                        printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Costo Hora\n");
                                scanf("%f",&a);
                                if(oneFARCPCR(a))
                                    printf("\n\n\n");
                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                if(arrayFARCPCR(tam))
                                    printf("\n\n\n");
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
                         printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Costo Hora\n");
                                scanf("%f",&a);
                                if(oneWARCPCR(a))
                                    printf("\n\n\n");
                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                if(arrayWARCPCR(tam))
                                    printf("\n\n\n");
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
                         printf("1 Estructura\n2 Arreglo De Estructura \n3 Salir\n");
                        scanf("%d",&m5);
                        switch(m5){
                            case 1:
                                printf("Introdusca su Costo Hora\n");
                                scanf("%f",&a);
                                if(oneDWARCPCR(a))
                                    printf("\n\n\n");
                            break;
                            case 2:
                                printf("Introdusca su Tamaño\n");
                                scanf("%d",&tam);
                                if(arrayDWARCPCR(tam))
                                    printf("\n\n\n");
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


/***Fin**/
