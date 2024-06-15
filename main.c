#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	char nome1[50];
	char nome2[50];
	char nome3[50];
	int i;
	
	printf("Digite um nome: ");
	fgets(nome1, sizeof(nome1), stdin);
	nome1[strcspn(nome1, "\n")] = '\0';

	printf("Digite outro nome: ");
	fgets(nome2, sizeof(nome2), stdin);
	nome2[strcspn(nome2, "\n")] = '\0';

	printf("Digite outro nome: ");
	fgets(nome3, sizeof(nome3), stdin);
	nome3[strcspn(nome3, "\n")] = '\0';

	if(strcmp(nome1, nome2) < 0 && strcmp(nome2, nome3) < 0){
		printf("%s\n%s\n%s", nome1, nome2, nome3);
	}
	else if(strcmp(nome1, nome3) < 0 && strcmp(nome3, nome2) < 0){
		printf("%s\n%s\n%s", nome1, nome3, nome2);
	}
	else if(strcmp(nome2, nome1) < 0 && strcmp(nome1, nome3) < 0){
		printf("%s\n%s\n%s", nome2, nome1, nome3);
	}
	else if(strcmp(nome2, nome3) < 0 && strcmp(nome3, nome1) < 0){
		printf("%s\n%s\n%s", nome2, nome3, nome1);
	}
	else if(strcmp(nome3, nome1) < 0 && strcmp(nome1, nome2) < 0){
		printf("%s\n%s\n%s", nome3, nome1, nome2);
	}
	else if(strcmp(nome3, nome2) < 0 && strcmp(nome2, nome1) < 0){
		printf("%s\n%s\n%s", nome3, nome2, nome1);
	}
	return 0;
}