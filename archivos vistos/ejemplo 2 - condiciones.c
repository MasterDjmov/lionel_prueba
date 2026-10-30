#include <stdio.h>
//estructuras condicionantes

int main(int argc, char *argv[]) {
	int valor=15;
	//operaciones como argumento
	/*
	== 	igual	
	= 	asignar
	<	menor
	>	mayor
	<=	menor o igual
	>= 	mayor o igual
	<>	distinto
	!=	distinto
	!	negacion
	%	resto		
	/	division
	+	suma
	-	resta
	*	multiplicacion
	*/
	if(valor==10){
		printf("es 10\n");
	}
	
	//operadores logicos &&=Y o and 
	//OR o o logico ||
	if(valor>5 && valor<12){
		printf("el valor es mayor a 5 y menor a 12");
	}else{
		printf("el valor es menor a 5 o mayor a 12");
	}
	
	return 0;
}

