#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
    int n,i;
    printf("Por favor introdusca su numero\n");
    scanf("%d",&n);
    system("cls");

    printf("\t tablas de multiplicar de %d\n",n);


    for(i=1;i<=10;i++){
        printf("\t\t%d \tx \t %d\t%d\n",i,n,n*i);
    }
    printf("");
}
