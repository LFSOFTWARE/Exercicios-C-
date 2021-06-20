#include <stdio.h>
#include <conio.h>
#include <string.h>

char cript(char frase[1000], int chave);
char descript(char frase[1000], int chave);
int main()
{
    char arquivo[30];
    FILE *file;
    FILE *cifrado;
while (1)
{
    /* code */

    printf("\n");
    while (1)
    {
        printf("Digite o arquivo a ser criptografado: \n");
        scanf("%s", arquivo);

        file = fopen(arquivo, "r");

        if (file == NULL)
        {
            printf("Erro! Arquivo nao existe...");
        }
        else
        {
            break;
        }
    }

    cifrado = fopen(strcat(arquivo, "_cifrado"), "a");
    int chave, op;
    char frase[1000];
    char f_cifrada[1000];

    printf("<1> Crip\n<2> Descript\n");
    scanf("%d",&op);

    printf("Difite a chave:");
    scanf("%i",&chave);

    if(op == 2){
        while (fgets(frase, 1000, file) != NULL)
            {
                descript(frase,chave);
            }
    }else if(op == 1){

            while (fgets(frase, 1000, file) != NULL)
                {
                    cript(frase,chave);
                }
    }
}
}

char cript(char frase[1000], int chave)
{
    int i, j, cont;

    int tamanho;
    char frase_c[1000];
    tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++)
    {
       if(frase[i] != 32) {
            if ((frase[i] + chave) > 122)
            {

                for (j = 1; j < chave; j++)
                {
                    if (frase[i] + j > 122)
                    {
                        frase_c[i] = 'a' + (chave-j);
                        break;
                
                    }
                    else
                    {
                        frase_c[i] = frase[i] + j;
                    }
                    cont++;
                }
            }
            else
            {
                frase_c[i] = frase[i] + chave;
            }
         }else{
             frase_c[i] = ' ';
         }
    }

    printf("%s\n", frase_c);
    
}

char descript(char frase_c[1000], int chave){
    int i, j, cont;

    int tamanho;
    char frase[1000];
    tamanho = strlen(frase_c);

    for (i = 0; i < tamanho; i++)
    {
       if(frase_c[i] != 32) {
            if ((frase_c[i] - chave) < 97)
            {

                for (j = 1; j < chave; j++)
                {
                    if (frase_c[i] - j < 97)
                    {
                        frase[i] = 'z' + (chave-j);
                        break;
                
                    }
                    else
                    {
                        frase[i] = frase_c[i] - j;
                    }
                    cont++;
                }
            }
            else
            {
                frase[i] = frase_c[i] - chave;
            }
         }else{
             frase[i] = ' ';
         }
    }

    printf("%s\n", frase);
    

}