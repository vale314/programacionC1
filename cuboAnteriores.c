#include <stdio.h>
#include <stdlib.h>


main(){
    int m, w, i,n1, cC, cCu;
    do{
    printf("1 for\n");
    printf("2 while\n");
    printf("3 do while\n");
    scanf("%d",&m);
    system("cls");
    printf("Porfavor introdusca su numero\n");
    scanf("%d",&n1);


    i=1; cC=0; cCu=0;
    system("cls");
    printf("\t\tSu raiz cuadrado y al cubo de %d es:\n", n1);

        switch(m){
            case 1:
                 for(i=1;i<=n1;i++){
                    printf("%*s",20,"\t*Numero*\t*Cuadrado*\t*Cubo*\n");
                    printf("\t%d\t\t%d\t\t%d\t\n",i,i*i,i*i*i);
                    if(n1 < i*i)
                        cC++;
                    if(n1 < i*i*i)
                        cCu++;
                }
                break;
            case 2:

                while(i<=n1){
                    printf("%*s",20,"\t*Numero*\t*Cuadrado*\t*Cubo*\n");
                    printf("\t%d\t\t%d\t\t%d\t\n",i,i*i,i*i*i);
                    if(n1 < i*i)
                        cC++;
                    if(n1 < i*i*i)
                        cCu++;
                    i++;
                }

                break;
            case 3:
                do{
                    printf("%*s",20,"\t*Numero*\t*Cuadrado*\t*Cubo*\n");
                    printf("\t%d\t\t%d\t\t%d\t\n",i,i*i,i*i*i);
                    if(n1 < i*i)
                        cC++;
                    if(n1 < i*i*i)
                        cCu++;
                    i++;
                }while(i<=n1);
                break;


            default:
                printf("\n Incorrecta opcion");

        }

      printf("Numeros al cuadrado Mayores a %d son %d\nNumero al cubo mayores a %d son %d",n1,cC,n1,cCu);


      printf("\ndesea repetir ingrese 2 otro para salir 1\n");
      scanf("%d",&w);
      system("cls");
    }while(w != 1);


}
