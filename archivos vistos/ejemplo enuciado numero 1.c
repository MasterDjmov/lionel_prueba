#include <stdio.h>
#include <stdlib.h>	//srand y la rand 
#include <time.h>	//time

int main(int argc, char *argv[]) {
	//colocar la generadora aleatoria o semilla
	srand(time(NULL));
	
	int vida =100;
	//enunciado numero 1
	//int danio= 25;
	//    entre 5 mas 0-25
	int danio = 5 + rand()%26;
	printf("rand: %d\n",rand()%10);
	printf("tengo %d de vida y me golpean con %d danio y me quedan %d\n",vida,danio,(vida-danio));
	return 0;
}

