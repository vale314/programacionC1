#include <stdio.h>
#include <stdlib.h>


main(){
    int m, w, m5;
    char a ='a';
    do{
    printf("1 for\n");
    printf("2 while\n");
    printf("3 do while\n");
    scanf("%d",&m);
    system("cls");
    printf("1 Ascendente o 2 Descendente\n");
    scanf("%d",&m5);
    system("cls");
        switch(m){
            case 1:
                if(m5 == 1){
                    for(a; a<='z'; a++){
                        printf("%c ",a);
                    }
                }else{
                    for(a='z'; a>='a'; a--){
                        printf("%c ",a);
                    }
                }
                break;
            case 2:
                if(m5 == 1){
                    a='a';
                    while(a <= 'z'){
                        printf("%c ",a);
                        a++;
                    }
                }else{
                    a='z';
                    while(a >= 'a'){
                        printf("%c ",a);
                        a--;
                    }
                }

                break;
            case 3:
                if(m5 == 1){
                    a='a';
                    do{
                        printf("%c ",a);
                        a++;
                    }while(a <= 'z');
                }else{
                    a='z';
                    do{
                        printf("%c ",a);
                        a--;
                    }while(a >= 'a');
                }
                break;


            default:
                break;
        }
      printf("\ndesea repetir ingrese 2 otro para salir 1\n");
      scanf("%d",&w);
      system("cls");
    }while(w != 1);


}
