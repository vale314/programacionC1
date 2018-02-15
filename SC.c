#include <stdio.h>
#include <stdlib.h>


main(){
    int n1, t, i;
    printf("Por favor inrgrese su digito\n");
    scanf("%d",&n1);
    system("cls");
    t=0;
    printf("La suma de todos los cuadrados.\n\n\n");
        for(i=1;i<=n1;i++){
        printf("%d%c%d +",i,94,i);
        t=t+i*i;

    }
    printf("\n \n \nTu suma es: %d\n\n", t);
    system("pause");
}
