#include <stdio.h>
#include<stdlib.h>

int main() {

	float nota1, nota2, media;

	printf("Digite a primeira nota do aluno: ");
	scanf_s("%f", &nota1);

	printf("Digite a segunda nota do aluno: ");
	scanf_s("%f", &nota2);


	media = (nota1 + nota2) / 2;

	//Saída
	printf("Media do aluno = %.1f\n", media);

	if (media >= 6) {
		printf("\nparabens, voce passou de ano\n");
	}
	else {
		printf("\n Reprovado!\n");
	}



	system("pause");
	return 0;
}