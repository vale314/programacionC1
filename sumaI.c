#include <stdio.h>
#include <stdlib.h>


main(){
    int m, w, i, iM;
    do{
    printf("1 for\n");
    printf("2 while\n");
    printf("3 do while\n");
    scanf("%d",&m);
    system("cls");

    i=75; iM=0;
    system("cls");

        switch(m){
            case 1:
                for(i;i<=120; i++){
                    if(i%2 == 1){
                        if(i != 85 || i != 96 || i !=111)
                            iM=iM+i;
                    }
                }
                printf("\nLa suma entre 75 y 120 de numeros impares sin contar 85, 96 y 111 es %d",iM);
                break;
            case 2:
                while(i<=120){
                     if(i%2 == 1){
                        if(i != 85 || i != 96 || i !=111)
                            iM=iM+i;
                    }
                    i++;
                }
                printf("\nLa suma entre 75 y 120 de numeros impares sin contar 85, 96 y 111 es %d",iM);
                break;
            case 3:
                do{
                     if(i%2 == 1){
                        if(i != 85 || i != 96 || i !=111)
                            iM=iM+i;
                    }
                    i++;
                }while(i<=120);
                printf("\nLa suma entre 75 y 120 de numeros impares sin contar 85, 96 y 111 es %d",iM);
                break;


            default:
                printf("\n Incorrecta opcion");

        }
      printf("\ndesea repetir ingrese 2 otro para salir 1\n");
      scanf("%d",&w);
      system("cls");
    }while(w != 1);


}
