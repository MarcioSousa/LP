#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const float pi = 3.14;

int main() {
	int escolha;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Os exerc�cios de Revis�o da aula 01 s�o:\n");
	printf("1 - Fa�a um programa que calcule e exiba a �rea de uma regi�o retangular.\n");
	printf("Considere que a largura da regi�o � 7cm, o comprimento � 8cm e a f�rmula para calcular a �rea �: A = LxC.\n");
	printf("=================================================================\n");
	printf("2 - Fa�a um programa que receba um n�mero e calcule o seu dobro.\n");
	printf("=================================================================\n");
	printf("3 - Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas.\n");
	printf("Fa�a um programa que receba o sal�rio fixo de um funcion�rio e o valor de suas vendas,\n");
	printf("calcule e mostre a comiss�o e o sal�rio final do funcion�rio.\n");
	printf("=================================================================\n");
	printf("4 - Fa�a um programa que calcule e exiba o volume de uma lata de �leo,\n");
	printf("utilizando a f�rmula: VOLUME = PI * RAIO2 * ALTURA e considerando que PI = 3,14.\n");
	printf("=================================================================\n\n");
	printf("Esolha um dos exerc�cios acima:");
	scanf("%i", &escolha);
	
	if(escolha == 1){
		int l = 7;
		int c = 8;
		int a = l*c;
		printf("%.i", a);
	}else if(escolha == 2){
		int numero;
		scanf("%i", &numero);
		int dobro = numero *2;
		printf("%.i", dobro);
	}else if(escolha == 3){
		float salario;
		float vendas;
		float sf;
		
		printf("Digite o valor do sal�rio:");
		scanf("%f", &salario);
		printf("Digite o valor de venda: ");
		scanf("%f", &vendas);
		sf = ((vendas/100)*4) + salario;
		printf("%.2f", sf);
	}else{
		float raio, altura, volume;
	
		printf ("Informe o raio: ");
		scanf ("%f", &raio);
		printf ("Informe a altura: ");
		scanf ("%f", &altura);
	
		volume = pi * (raio*raio) * altura;
	
		printf ("\nO volume da lata de oleo eh: %.2f", volume);	
	}
	
	return 0;
}

