/*
    R.O. Valentin Alejandro
    F: 28/02/18
    D.P: Teclas
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int main() {
	char letra;
	printf("TECLEA UNA TECLA\n");
	scanf("%c",&letra);
	switch(letra)
	{
	case 'a': case 'e': case 'i': case 'o': case 'u':
	case 'A': case 'E': case 'I': case 'O': case 'U':
		printf("VOCAL"); break;
	case 'b': case 'c': case 'd': case 'f': case 'g': case 'h':
	case 'j': case 'k': case 'l': case 'm':
	case 'n': case 'p': case 'q': case 'r': case 's':
	case 't': case 'w': case 'x': case 'y': case 'z':
	case 'B': case 'C': case 'D': case 'F': case 'G':
	case 'H': case 'J': case 'K': case 'L': case 'M': case 'N':
	case 'P': case 'Q': case 'R': case 'S': case 'T':
	case 'W': case 'X': case 'Y': case 'Z':
		printf("CONSONANTE"); break;
	case '1': case '2': case '3': case '4': case '5':
	case '6': case '7': case '8': case '9': case '0':
		printf("DIGITO");break;
	default:
		printf("CARACTER");

	}
	return 0;
}
