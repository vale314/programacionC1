/* R.O Valentin Alejandro
    F: 04/02/18
    DP: Cantidad De Digitos De Entrada
*/
#include <stdio.h>
#include <stdlib.h>

main(){
    int m,i,j,k,c,e,w;
    do{
       printf("1 For\n");
       printf("2 While\n");
       printf("3 Do-While\n");
       scanf("%d",&m);

       c=0;
       e=6;

       k=6;
       w=1;

       switch(m){
            case 1:


                for(i=0;i<=6;i++){

                    for(j=0;j<=6;j++){


                        if((i>=c && i<=e) && (j==e || j>e)){
                            printf("%c",32);
                            printf("|");

                        }
                        if((i>=c && i>=e) && (j<=e || j==e)){
                            printf("%c",32);
                            printf("|");
                            e=e+2;


                        }





                        if((i>=1 && i<=6) && j==0){
                            printf("%c",32);
                            printf("|");
                        }
                         if((i>=2 && i<=5) && j==1){
                            printf("%c",32);
                            printf("|");
                        }
                        if((i>=3 && i<=4) && j==2){
                            printf("%c",32);
                            printf("|");
                        }






                        if(!((i>0 && i<6) && j==5) && !((i>=0 && i<=6) && j==6) && !((i>1 && i<5) && j==4) && !((i>2 && i<4) && j==3) && !((i>=1 && i<=6) && j==0) &&!((i>=2 && i<=5) && j==1) && !((i>=3 && i<=4) && j==2) ){
                            printf("%c",32);
                            printf("-");

                        }

                    }
                    c++;
                    e--;
                    k--;

                    printf("\n");
                }

            break;
            case 2:
                i=0;
                while(i<=6){

                    j=0;
                    while(j<=6){


                        if((i>=c && i<=e) && (j==e || j>e)){
                            printf("%c",32);
                            printf("|");

                        }
                        if((i>=c && i>=e) && (j<=e)){
                            printf("%c",32);
                            printf("|");
                            e=e+2;


                        }





                        if((i>=1 && i<=6) && j==c){
                            printf("%c",32);
                            printf("|");
                        }
                         if((i>=2 && i<=5) && j==1){
                            printf("%c",32);
                            printf("|");
                        }
                        if((i>=3 && i<=4) && j==2){
                            printf("%c",32);
                            printf("|");
                        }






                        if(!((i>0 && i<6) && j==5) && !((i>=0 && i<=6) && j==6) && !((i>1 && i<5) && j==4) && !((i>2 && i<4) && j==3) && !((i>=1 && i<=6) && j==0) &&!((i>=2 && i<=5) && j==1) && !((i>=3 && i<=4) && j==2) ){
                            printf("%c",32);
                            printf("-");

                        }
                        j++;

                    }
                    c++;
                    e--;
                    k--;

                    printf("\n");
                    i++;
                }
                break;
            case 3:

                i=0;
                do{

                    j=0;
                    do{


                        if((i>=c && i<=e) && (j==e || j>e)){
                            printf("%c",32);
                            printf("|");

                        }
                        if((i>=c && i>=e) && (j<=e)){
                            printf("%c",32);
                            printf("|");
                            e=e+2;


                        }





                        if((i>=1 && i<=6) && j==c){
                            printf("%c",32);
                            printf("|");
                        }
                         if((i>=2 && i<=5) && j==1){
                            printf("%c",32);
                            printf("|");
                        }
                        if((i>=3 && i<=4) && j==2){
                            printf("%c",32);
                            printf("|");
                        }






                        if(!((i>0 && i<6) && j==5) && !((i>=0 && i<=6) && j==6) && !((i>1 && i<5) && j==4) && !((i>2 && i<4) && j==3) && !((i>=1 && i<=6) && j==0) &&!((i>=2 && i<=5) && j==1) && !((i>=3 && i<=4) && j==2) ){
                            printf("%c",32);
                            printf("-");

                        }
                        j++;

                    }while(j<=6);
                    c++;
                    e--;
                    k--;

                    printf("\n");
                    i++;
                }while(i<=6);
                break;
            default:
                printf("Por Favor Selecione Una opcion correcta\n");

       }

     printf("1 para salir 2 para repetir");
     scanf("%d",&m);
    }while(m != 1);
}
