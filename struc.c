#include <conio.h>
#include <stdio.h>
#include <string.h>
/*
##########################################
#### EXERCICIOS EM C BY LUIZ FERNANDO ####
##########################################

1. O que está errado nas definições das estruturas em C abaixo:
    a) structure ponto { int x, y; };
    b) struct { int x; int y; };
    c) struct ponto ( int x; int y; );
    d) struct ponto { int x; int y; }


        R:
            a)a variavel y deveria conter o seu tipo. int y;

            b) a struc nao esta sendo referencia por uma etiqueta ou typeof;

            c) o conteudo da struc esta entre parenteses quando deveria estar ntre cahves;

            d)estaria certa se nao estivesse faltando um ponto e virgula no final ";";




2. Considere a estrutura data abaixo:
    struct data {
    int dia;
    char mes[10];
    int ano;
    };
    Quais instruções inicializam corretamente o valor do membro dia com 13, o de mes
    "maio" e o valor de ano com 2021?
    a) struct data dt1 = { 13, "maio", 2021 };
    b) struct data dt2 = { 13, .ano = 2021, "maio" };
    c) struct data dt3 = { .mes = "maio", 2021, .dia = 13 };
    d) struct data dt4 = { .ano = 2021, .dia = 13, "maio" };
    e) struct data dt5 = { .ano = 2021, .mes = "maio", 13 };
        R:
            a unica que aceita condição e a letra "A";

3. Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os
seguintes campos: 
    • marca: string de tamanho 30
    • ano: inteiro 
    • cor: string de tamanho 15 
    • preco: real

    a) Escrever a definição da estrutura carro. 
    b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20.
    Crie um menu para: 
    c) Cadastrar um carro no vetor vetcarros. 
    d) Listar todos os carros com preço menor ou igual a um valor fornecido pelo usuário;
    e) Listar todos os carros de uma determinada marca fornecida pelo usuário


    struct carro
{
    char marca[30];
    int ano;
    char cor[15];
    float preco;
};

int main()
{
    int op, n, f = 0, j;
    char marca_p[30];
    float preco;
    struct carro vetcarros[20];

    for (int i = 0; i < 20; i++)
    {
        vetcarros[i].preco = 0;
    }

    while (1)
    {
        printf("Bem vindo\n");
        printf("1-cadastrar\n2-Consultar preco\n3-Consultar marca\n");
        scanf("%d", &op);

        if (op == 1)
        {
            printf("Digite o numero de carros a cadastrar:\n");
            scanf("%d", &n);

            for (int i = 0; i < 20; i++)
            {
                if (f != n)
                {
                    printf("%do. carro\n", i + 1);
                    printf("Marca:");
                    scanf("%s", vetcarros[i].marca);
                    printf("ano:");
                    scanf("%d", &vetcarros[i].ano);

                    printf("Cor:");
                    scanf("%s", vetcarros[i].cor);
                    printf("Preco:");
                    scanf("%f", &vetcarros[i].preco);
                    f++;
                }
                else
                {
                    f = 0;
                    break;
                }
            }
        }
        else if (op == 2)
        {
            printf("Digite o valor:");
            scanf("%f", &preco);

            for (int i = 0; i < 20; i++)
            {
                if (vetcarros[i].preco <= preco && vetcarros[i].preco != 0)
                {
                    printf(" Marca: %s   Ano: %d   Cor: %s   Preco: %f \n", vetcarros[i].marca, vetcarros[i].ano, vetcarros[i].cor, vetcarros[i].preco);
                }
            }
        }
        else if (op == 3)
        {
            printf("Digite a marca a ser pesquisa:\n");
            scanf("%s", marca_p);

            for ( int i = 0; i < 20; i++)
            {
                if (strcmp(vetcarros[i].marca, marca_p) == 0)
                {
                    printf(" Marca: %s   Ano: %d   Cor: %s   Preco: %f \n", vetcarros[i].marca, vetcarros[i].ano, vetcarros[i].cor, vetcarros[i].preco);
                }
            }
        }
    }
}


4. Escreva um programa em C que define estruturas para representar as seguintes entidades:
    a) Processador: tem como características a frequência e o fabricante;
    b) Monitor: tem como características o tamanho (em polegadas), o tipo (LCD, CRT,Plasma, LED, etc.) e o fabricante;
    c) Computador: tem como características o processador, o monitor, a capacidade de disco
    rígido e de memória RAM.
    O programa deve cadastrar n computadores e depois listar os dados daqueles computadores
    com processador com frequência superior 2 GHz, com monitor maior que 17” e capacidade
    de memória RAM maior ou igual a 4 GB.


struct processador
{
    char fabricante[50];
    float frequencia;
};

struct monitor
{
    int tamanho;
    char tipo[10];
};

struct computador
{
    struct processador cpu;
    struct monitor tela;
    int memoria;
};

int main()
{
    int n;

    printf("Digite o numero de Pc's a registrar :");
    scanf("%d", &n);
    struct computador pc[n];
    for (int i = 0; i < n; i++)
    {
        printf("cadastrar cpu:\n");
        printf("Fabricante:");
        scanf("%s", pc[i].cpu.fabricante);
        printf("Frequencia:");
        scanf("%f", &pc[i].cpu.frequencia);
        printf("cadastrar monitor:\n");
        printf("tamanho em polegadas:");
        scanf("%d", &pc[i].tela.tamanho);
        printf("Tipo de tela:");
        scanf("%s", pc[i].tela.tipo);
        printf("Quantidade de emoria ram:");
        scanf("%d",&pc[i].memoria);
    }

    size_t tamanho = sizeof(pc) / sizeof(pc[0]);
    printf(" tamanho: %d\n", tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        if(pc[i].cpu.frequencia >= 2 &&  pc[i].tela.tamanho >=17  && pc[i].memoria > 3 )
            printf("Cpu: %s  frequencia: %f  Monitor: %d  tipo: %s  memoria: %d GB\n", pc[i].cpu.fabricante, pc[i].cpu.frequencia, pc[i].tela.tamanho, pc[i].tela.tipo, pc[i].memoria);
    }
}

5. Considere que exista uma estrutura com os seguintes membros: codigo_cliente e
nome_cliente e uma outra estrutura com os seguintes membros: num_compra,
valor_compra, codigo_cliente. Faça um programa que:
     Inclua clientes, não permitindo que dois clientes possuam o mesmo código;
     Inclua compras, verificando se o código do cliente informado já está cadastrado. Caso não
    esteja, não permita a inclusão. O número da compra deve ser um número sequencial gerado
    pelo programa;
     Liste todos os clientes cadastrados;
     Liste todas as compras de um determinado cliente, dado seu código;
     Remova um determinado cliente. Antes de executar a remoção, verifique se o cliente possui
    alguma compra. Se possuir, mostrar a mensagem “Exclusão não permitida”. Caso contrário,
    proceder a exclusão.

*/

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>



#define MAX_CLIENTES 10
#define MAX_COMPRAS 100


typedef struct 
{
    int codigo_cliente;
    char nome_cliente[41];
} cliente ;


typedef struct {
    int num_compra;
    float valor_compra;
    int codigo_cliente;
} compra;


int procurar_cliente(int,const cliente [],int);

int main(){
    int op, num_clientes = 0, num_compras = 0;

    cliente clientes[MAX_CLIENTES];
    compra compras[MAX_COMPRAS];

    do{

    }while (op!=0)
    {
        
    }
    



}


int procurar_cliente(int n_cliente, const cliente clientes[],int cod_cliente){
    int i;
    for ( i = 0; i < n_cliente; i++)
    {
        if (clientes[i].codigo_cliente == cod_cliente)
        {
            return i;
        }
        
    }
    return -1;
}
