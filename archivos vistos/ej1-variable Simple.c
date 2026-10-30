#include <stdio.h>

//variables simples

//alcance global
int circulo;

int main(int argc, char *argv[]) {
	//alcance local
	int edad;
	int fuerza=10;
	char letra ='a';	
	float dinero =10.20;	//10.123456
	double PI = 3.14165289;	//10.......X? 64
	//bool ejecutando=true/false -->1/0;
	
	//128-64-32-16-8-4-2-1 = 256 - 1 = 255 valores
	// 0   1  0 0 0 0 0 0	
	
	//printf("mi circulo es %d--%d",circulo,edad);
	//printf("el valor de la letra %c es %d",letra,letra);
	printf("yo tengo %.2f dinero",dinero);
	return 0;
}

