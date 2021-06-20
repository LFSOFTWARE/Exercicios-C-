#include <stdio.h>
#include <string.h>

int main()
{
    FILE *arq;

    char file[30];
    char word[30];
    while (1)
    {

        printf("Digite o arquivo:");
        scanf("%s", file);

        printf("Digite a palavra:");
        scanf("%s", word);

        arq = fopen(file, "r");

        if (arq == NULL)
        {
            printf("Erro!");
        }
        else
        {
            break;
        }
    }
    char frase[1000];

    while (fgets(frase, 1000, arq) != NULL)
    {
        if (strstr(frase, word) != NULL)
        {
            printf("%s", frase);
        }
    }
}