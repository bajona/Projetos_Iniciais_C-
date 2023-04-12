#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	float nota1, nota2, media;

	//Entrada de dados
	printf("Digite a primeira nota do aluno: ");
	scanf_s("%f", &nota1);

	printf("Digite a segunda nota do aluno: ");
	scanf_s("%f", &nota2);


	media = (nota1 + nota2) / 2;

	printf("\nAluno, sua media foi: %.1f\n", media);

	if (media >= 6)
	{
		printf("\nAprovado\n");
	}
	else if (media <= 3) {
		printf("\nReprovado\n");
	}
	else {
		printf("\nExame\n");
	}
	


	system("pause");
	return 0;
}