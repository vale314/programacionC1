#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
    int n1,i;
    printf("Porfavor introdusca su numero\n");
    scanf("%d",&n1);

    system("cls");

    printf("\t\tSu raiz cuadrado y al cubo de %d es:\n", n1);

    for(i=1;i<=n1;i++){
        printf("%*s",20,"\t*Numero*\t*Cuadrado*\t*Cubo*\n");
        printf("\t%d\t\t%d\t\t%d\t\n",i,i*i,i*i*i);
    }
}
