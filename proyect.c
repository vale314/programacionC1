#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>



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
        printf("1 SPSR\2 SPCR\n3 CPSR\n4 CPCR\n5 SALIR\n");
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
