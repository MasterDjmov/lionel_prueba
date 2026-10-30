#include <stdio.h>
//ciclos o bucles: FOR - WHILE - DO-WHILE 
/*incrementos
	i++		aumenta de 1 en 1
	i=i+1	aumenta de 1 en 1 pero cambia el literal
	i+=1	aumenta de 1 en 1 pero cambia el literal
*/
int main(int argc, char *argv[]) {
	int inicio=0;
	//for es un ciclo finito pero puede ser infinito
	printf("ciclo for, mostrar 10 numeros: ");
	//for(inicio; hasta donde llega o maximo; incremento){...}
	for(inicio=0; inicio < 10; inicio++){
		printf("%d ",inicio);
	}
	//modo infinito
	/*
	for(;;){
		printf("infinito");
	}*/
	
	//while
	//formato
	/*
	inicio
	while(hasta donde llego o maximo){
		incremento
	}
	*/
	printf("\nciclo while, mostrar 10 numeros: ");
	//inicio=0;
	while(inicio<10){
		
		printf("%d ",inicio);
		inicio = inicio + 1;
	}
	
	//do-while
	//formato
	/*
	
	inicio
	do{
		incremento
	}while(hasta donde llego o maximo)
	*/
	printf("\nciclo do-while, mostrar 10 numeros: ");
	//inicio=0;
	do{
		printf("%d ",inicio);
		inicio += 1;
	} while(inicio<10);
	return 0;
}

