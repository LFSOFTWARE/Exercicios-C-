#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	FILE *copia;
	FILE *original;
	
	
	char n1[30];
	char n2[30];
	
	printf("Digite o arquivo Original:");
	scanf("%s",n1);
	printf("Digite o arquivo copia:");
	scanf("%s",n2);
	
	copia = fopen(n2,"w");
	original = fopen(n1,"r");
	
	if (copia == NULL || original == NULL){
		
		printf("Erro!");
	}	


	char frase[100];
	char frase2[100];
	
	while(fgets(frase,100,original)  != NULL ){
		int i;
		for( i=0;i<100;i++){
			frase2[i] = toupper(frase[i]);
		}
		
		
		fprintf(copia,"%s",frase2);
	}
	
	printf("Arquivo %s Copiado com sucesso...",n1);
	fclose(copia);
	fclose(original);
}
