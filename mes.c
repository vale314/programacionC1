/* R.O Valentin Alejandro
    F: 04/02/18
    dp: mes
*/

#include <stdio.h>
#include <conio.h>


main(){
    int mes;
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
}
