#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct amigo
{
    int id; // identificador do amigo
    char nome[40];
    char fone[14];
    char email[30];
};

int main()
{

    FILE *arq;
    FILE *copia;
    int ret;
    int op;
    while(op != 0){
    printf("<1> Cadastrar\n<2> Listar todos\n<3> Consultar amigo\n<4>Alterar:\n");
    scanf("%d", &op);
    if (op == 1)
    {

        struct amigo controle;

        arq = fopen("lista_amg.txt", "rb");
        struct amigo friend;
        ret = fread(&controle, sizeof(struct amigo), 10, arq);

        friend.id = ret + 1;
        printf("Nome:");
        scanf("%s", friend.nome);
        printf("Telefone:");
        scanf("%s", friend.fone);
        printf("Email:");
        scanf("%s", friend.email);

        if (arq == NULL)
        {
            printf("ERRO!");
            return 0;
        }
        arq = fopen("lista_amg.txt", "ab");
        fwrite(&friend, sizeof(struct amigo), 1, arq);

        fclose(arq);
    }
    else if (op == 2)
    {
        int i;
        arq = fopen("lista_amg.txt", "rb");
        struct amigo friend[100];
        ret = fread(&friend, sizeof(struct amigo), 100, arq);

        for (i = 0; i < ret; i++)
        {
            printf("id:%d nome: %s  email: %s fone: %s\n", friend[i].id, friend[i].nome, friend[i].email, friend[i].fone);
        }
    }
    else if (op == 3)
    {
        char nome_u[40];
        int id_u;
        op = 0;
        printf("<1>Consulta via id\n<2>Consulta via nome:\n");
        scanf("%d", &op);
        if (op == 1)
        {
            printf("Digite o id:");
            scanf("%d", &id_u);

            int i;
            arq = fopen("lista_amg.txt", "rb");
            struct amigo friend[100];
            ret = fread(&friend, sizeof(struct amigo), 100, arq);

            for (i = 0; i < ret; i++)
            {
                if (friend[i].id == id_u)
                    printf("id:%d %s \n", friend[i].id, friend[i].nome);
            }
        }
        else if (op == 2)
        {
            printf("Digite o nome:");
            scanf("%s", nome_u);

            int i;
            arq = fopen("lista_amg.txt", "rb");
            struct amigo friend[100];
            ret = fread(&friend, sizeof(struct amigo), 100, arq);

            for (i = 0; i < ret; i++)
            {
                if (strcmp(friend[i].nome, nome_u) == 0)
                    printf("id:%d %s \n", friend[i].id, friend[i].nome);
            }
        }
    }
    else if (op == 4)
    {
        arq = fopen("lista_amg.txt", "rb");
    

        char nomeU[40];
        int id_U;

        op = 0;

        printf("<1>Mudar por id\n<2>Mudar com o nome:\n");
        scanf("%d", &op);

        if (op == 1)
        {
            int rat;
            int i;
            struct amigo friend[1000];

            printf("Digite o id:");
            scanf("%d", &id_U);

            rat = fread(&friend, sizeof(struct amigo), 1000, arq);

            // printf("%d",rat);
            char new_fone[10];
            char new_email[40];
            op = 0;
            for (i = 0; i < rat; i++)
            {

                if (friend[i].id == id_U)
                {
                    printf("<1> Alterar Fone\n<2>Alterar email:\n");
                    scanf("%d", &op);
                    if (op == 1)
                    {
                        printf("Digite o fone:");
                        scanf("%s", new_fone);

                        int id;
                        char nome_p[40];
                        char email2[40];
                        strcpy(nome_p, friend[i].nome);
                        strcpy(email2, friend[i].email);
                        id = friend[i].id;
                        //printf("id: %d  nome: %s email:  %s fone: %s ",id,nome_p,email2,friend[i].fone);
                        arq = fopen("lista_amg.txt", "wb");

                        struct amigo new;
                        strcpy(new.email, email2);
                        strcpy(new.nome, nome_p);
                        new.id += id;
                        strcpy(new.fone, new_fone);

                        printf("id: %d  nome: %s email:  %s fone: %s ", new.id, new.nome, new.email, new.fone);

                        fwrite(&new, sizeof(struct amigo), 1, arq);
                    }
                    else if (op == 2)
                    {
                        printf("Digite o Email:");
                        scanf("%s", new_email);

                        int id;
                        char nome_p[40];
                        char email2[40];
                        strcpy(nome_p, friend[i].nome);
                        strcpy(email2, new_email);
                        id = friend[i].id;
                        //printf("id: %d  nome: %s email:  %s fone: %s ",id,nome_p,email2,friend[i].fone);
                        copia = fopen("lista_amg.txt", "wb");

                        struct amigo new;
                        strcpy(new.email, email2);
                        strcpy(new.nome, nome_p);
                        new.id += id;
                        strcpy(new.fone, friend[i].fone);

                        printf("id: %d  nome: %s email:  %s fone: %s ", new.id, new.nome, new.email, new.fone);

                        fwrite(&new, sizeof(struct amigo), 1, arq);
                    }
                    // printf("id:%d  %s",friend[i].id, friend[i].nome);
                }
                else
                {
                    fwrite(&friend[i], sizeof(struct amigo), 1, arq);
                }
            }
        }
        else if (op == 2)
        {
            int rat;
            int i;
            struct amigo friend[1000];

            printf("Digite o Nome:");
            scanf("%s", nomeU);

            rat = fread(&friend, sizeof(struct amigo), 1000, arq);

            // printf("%d",rat);
            char new_fone[10];
            char new_email[40];
            op = 0;
            for (i = 0; i < rat; i++)
            {

                if (strcmp(friend[i].nome, nomeU) == 0)
                {
                    printf("<1> Alterar Fone\n<2>Alterar email:\n");
                    scanf("%d", &op);
                    if (op == 1)
                    {
                        printf("Digite o fone:");
                        scanf("%s", new_fone);

                        int id;
                        char nome_p[40];
                        char email2[40];
                        strcpy(nome_p, friend[i].nome);
                        strcpy(email2, friend[i].email);
                        id = friend[i].id;
                        //printf("id: %d  nome: %s email:  %s fone: %s ",id,nome_p,email2,friend[i].fone);
                        arq = fopen("lista_amg.txt", "wb");

                        struct amigo new;
                        strcpy(new.email, email2);
                        strcpy(new.nome, nome_p);
                        new.id += id;
                        strcpy(new.fone, new_fone);

                        printf("id: %d  nome: %s email:  %s fone: %s ", new.id, new.nome, new.email, new.fone);

                        fwrite(&new, sizeof(struct amigo), 1, arq);
                    }
                    else if (op == 2)
                    {
                        printf("Digite o Email:");
                        scanf("%s", new_email);

                        int id;
                        char nome_p[40];
                        char email2[40];
                        strcpy(nome_p, friend[i].nome);
                        strcpy(email2, new_email);
                        id = friend[i].id;
                        //printf("id: %d  nome: %s email:  %s fone: %s ",id,nome_p,email2,friend[i].fone);
                        arq = fopen("lista_amg.txt", "wb");

                        struct amigo new;
                        strcpy(new.email, email2);
                        strcpy(new.nome, nome_p);
                        new.id += id;
                        strcpy(new.fone, friend[i].fone);

                        printf("id: %d  nome: %s email:  %s fone: %s ", new.id, new.nome, new.email, new.fone);

                        fwrite(&new, sizeof(struct amigo), 1, arq);
                    }
                    // printf("id:%d  %s",friend[i].id, friend[i].nome);
                }
                else
                {
                    fwrite(&friend[i], sizeof(struct amigo), 1, arq);
                }
              
            }
              
        }
    }
    }
}