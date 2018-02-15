#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
    /*
    char n[50];
    printf("Porfavor introdusca su numero\n");
    fflush(stdin);
    gets(n);


    printf("su cantidad de elementos es %d",strlen(n));
    */
    int n,m,c,i;
    printf("Porfavor introdusca su numero\n");
    scanf("%d",&n);
    m=10; c=1; i=1;
    i=n/m;
    while(i!=0){
        m=m*10;
        i=n/m;
        c++;
    }
    system("cls");

    printf("\n\n\n\tpara el numero %d su cantidad de digitos es: %d\n\n\n", n, c);
}
