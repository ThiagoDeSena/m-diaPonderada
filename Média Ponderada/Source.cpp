#include <stdio.h>
#include <stdlib.h>
//3. Ler duas notas, calcular a média ponderada (Peso Nota1 = 2 e Peso Nota2 = 3) verificar se o aluno foi aprovado ou reprovado (6,0).

int main(){
	float n1=0,n2=0,mediap=0;
	printf("Ler duas notas, calcular a media ponderada (Peso Nota1 = 2 e Peso Nota2 = 3) verificar se o aluno foi aprovado ou reprovado (6,0).\n\n");
	printf("\nDigite a primeira nota: ");
	scanf("%f",&n1);
	printf("\nDigite a segunda nota: ");
	scanf("%f",&n2);

	mediap=((n1*2)+(n2*3))/5;

	printf("\nA media ponderada do aluno foi %.2f \n",mediap);

	if (mediap>=6)
		printf("\nAluno Aprovado\n");
	else
		printf("\nAluno Reprovado\n");

	system("pause");
}