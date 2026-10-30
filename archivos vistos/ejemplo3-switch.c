#include <stdio.h>

int main(int argc, char *argv[]) {
	int opcion=0;
	
	printf("------MENU-----\n");
	printf("1)sumar-----\n");
	printf("2-restar-----\n");
	printf("3-salir-----\n");
	printf(">> ");
	
	scanf("%d",&opcion);
	
	switch(opcion){
		case 1:
			printf("estoy sumando algo...\n");
			break;
		case 2:
			printf("estoy restando algo...\n");
			break;
		default:
			printf("el valor ingresado es incorrecto\n");
	}
	return 0;
}

