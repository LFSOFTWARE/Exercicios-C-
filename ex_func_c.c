#include <stdio.h>
#include <conio.h>
#include <math.h>
/*
Exercicio 1
A)
int numzeros(int numA[1]);

int main(){
int a[1];

a[1]=10;

 numzeros(a);
}


int numzeros(int numA[1]){
	int i=0;
	int tamanho =sizeof(numA)/sizeof(numA[0]);
	
	tamanho -= 1; 
	int contador = 0;
	for(i=0; i<=tamanho ; i++){
		if(numA[i]== 0){
			contador += 1 ;
		}
	}
	
	printf("O numero de zeros e %d",contador);

}

B)

void max(int num1, int num2);

void max(int num1, int num2){
 	int x
	....
	return  x;
}



C)

void n_to_char(int num);

void n_to_char(int num){
char x
....
return x;

}


D)

void digitos(int num1 ,float num2);

void digitos(int num1 ,float num2){
	char x
	.....
	return  x;
}


E)

void random();
void random(){
	int x;
	return x;
}



Exercicio 2 


void maior(int a , int b , int c);

int main(){
	maior(1,9,3);
}

void maior(int a , int b , int c){
	if (a > b){
		if (a > c){	
				printf("maior numero e (A)%d",a);
		}
	}else if (b > c){
		printf("maior numero e (B)%d",b);
	}else{
			printf("maior numero e (C)%d",c);
	}
	
	
}


Exericio 3 



void retangulo(int a, int c);

int main(){
	retangulo(5,10);
}


void retangulo(int a, int c){
	int linha, coluna ;
	
	for(linha = 1; linha <= a; linha++ ){
			for(coluna = 1; coluna <= c;coluna++ ){
				printf("*");
	}	
	printf("\n");
}
}



Exercicio 4 

A)
	int soma(int x, y) {
		int resultado;
		 resultado = x + y;
		 return resultado;
	 }

	R: o erro esta na declaração do parametro. todos os argumentos devem conter o seu tipo. 

b) 

	void sq(int a) {
	 	return a * a;
	 }


	R: uma função do tipo void nao pode retornar um valor usando a palavra reservada return.
	
c) 
	int cubo(int x);
	{
	 return x * x * x;
	}


	R: não achei erro :( 
	
	
D) 

d) void salame(int num) {
 int num, i;
 for (i = 1; i <= num; i++)
 printf("Meu salame!\n");
}

R: nao é preciso declarar o tipo do argumento novamente. 



5)


#define PI 3.141592653589



float volume_esfera(int raio );

int main(){
	printf("%f",volume_esfera(10));
}

float volume_esfera(int raio){
	float volume,potencia;
	potencia = pow(raio,3);
	
	volume = (4*PI*potencia)/3;
	return volume;

}

Exercicio 6


int mdc(int a, int b);


int main(){

	mdc(24,15);
	
}

int mdc(int a, int b){
	int x,resto,co;
	co = 5566;
	resto = 676;
	x = 1;

	do{
	
		co = a / b;
		resto = a % b;

		if(resto == 0){
			x = 0;
			printf("%d",b);
		}else{
			
			a = b;
			b = resto;
		}			
	
	}while(x != 0);	
	
}

Exercicio 7

int num_perfeito(int num);


int main(){
	

	num_perfeito(33550336);
}


int num_perfeito(int num){
	int x,soma,sair;

	sair = 0;
	soma = 0;
	x = 1;
	do {
		if(soma == num){
			return true
			sair = 1;
		}else{
		
			if(num % x ==  0){
				soma += x ;
			}else if (soma > num){
				
				return false;
			}
			
		}
		
	x += 1;
	
	
	}while(sair != 1);

}

Exercicio 8 


float peso(float alt, int sexo);

int main(){
	printf("o seu peso ideal e : %f",peso(1.76,1));
}

float peso(float alt, int sexo){
	float	peso_ideal = 0;
	
	if(sexo == 0){
		peso_ideal = (72.7*alt - 58);
		return peso_ideal;
	}else if(sexo == 1){
		peso_ideal = ((62.1*alt) - 44.7);
		return peso_ideal;
	}
}


Exercicio 9 

double fatorial(int n);

int main(){
	fatorial(15);
}



double fatorial(int n){
	double fat;
	
	for(fat = 1; n > 1; n = n - 1){      
	      fat = fat * n;
	  }
		printf("%d",fat);
}

}

Exercicio 10


long int fatorial( int n, int k);

int main(){
	fatorial(7,1);
}

long int fatorial(int n , int k){
	
	long int fat, fat2,fat3, A,arranjo,combinacao;
	int numero ;
	
	numero = n;
	
		for(fat = 1; n > 1; n = n - 1){      
	      fat = fat * n;
	  }
		printf(" permutacao %d",fat);
		A = (numero-k);
		
		for(fat2 = 1; A > 1; A = A - 1){      
	      fat2 = fat2 * A;
	  }
		
		arranjo = fat/fat2;
		
		printf(" \n arranjo %d",arranjo);
		
		for(fat3 = 1; k > 1; k = k - 1){      
		      fat3 = fat3 * k;
		  }
		  
		combinacao = fat/(fat3*fat2);
		
		printf(" \n combinacao %d",combinacao);
}

Exercicio 11


long int  pou(int base, int expoente);

int main(){
	printf("%d",pou(50,6));
}


long int pou(int base, int expoente){
	
	int i=0,som=base,x=0,s=0;
	
	if (expoente == 0){
		return 1;
	}else if (expoente == 1){
		return base;
	}else{
			for(i=2;i<=expoente;i++){
				som = som * base;
				
				printf("i: %d\n",i);
				printf("som: %d\n",som);
				
			}
		return som ;
		}	
		
	}


	Exercicio 12 
	
	
double hipotenusa(double x, double y);

	int main(){
		
		printf("%f",hipotenusa(2,3));
	
	}
	
 double hipotenusa(double x, double y){
 	float soma,hip ;
 	
 	soma = (pow(x,2))+(pow(y,2));
 	
 	hip = sqrt(soma);
 	
 	return hip;
 }

exercicio 13

int arredondar_para_int(double n);


int main(){
	float entrada;
	while (1){
		
		printf("digite um numero para arrendodar:\n");
		scanf("%f",&entrada);
		printf("%d \n",arredondar_para_int(entrada));
	}
	

}
int arredondar_para_int(double n){
	int a ;
	n += 0.9;
	a = floor(n);
	return  a;
}

	 Exercicio 14
	 
	 int arredondar_para_int(double n);
 double arredondar(double n, int c);
 
 int main(){
 	printf("%f \n",arredondar(5.78351, 1));
 	
 }
 
 
  double arredondar(double n, int c){
  	 float mult,div;
  	 n = n*pow(10,c);
  	 
  	 n = arredondar_para_int(n);
  	 
  	 n = n/pow(10,c);
  	 
  	 return n;
  	
  }
  
  
  
  int arredondar_para_int(double n){
	int a ;
	n += 0.9;
	a = floor(n);
	return  a;
}

Exercicio 15


 void init_vetor(int n, int a[], int val);
 
 
 int main(){
 	
 	int a[10],i;
 	init_vetor(10,a,6);
 	
 	
 	 for(i=0;i<=10;i++){
 		printf(" %d-%d\n",i,a[i]);
 }
}

 void init_vetor(int n, int a[], int val){
	int i;
	
	for(i=0;i<=n;i++){
		a[i]=val;
		
	} 		

	return a;
 	
 	
 }


Exercicio 16


char pesquisa(char* palavra, char caractere);


int main(){
	int a;
	 a = pesquisa("luiz",'z');
	 
	 if(a == -1){
	 	printf("-1");
	 }else{
	 		printf("%s",a);
	 }
	 
}
char pesquisa(char* palavra, char caractere){
	int tamanho,i;
	
	
	
	tamanho = strlen(palavra);
	

	for(i=0;i<=tamanho;i++){
		
		if(palavra[i] == caractere){
			printf("a posicao do caractere ' %c' e %d ",caractere,i);
			return;
		}
		
	}
	
	return -1;

}



Exercicio 18 


int matriz(int matriz[][3],int n);

int main(){
	int i,j;
	
	int matri[3][3]={
		{2,3,2},
		{0,3,2},
		{0,0,0}
		
	};
	
	
	matriz(matri,3);
	

}


int matriz(int matriz[][3], int n){
	int i,j,triangularsuperior=-1;

	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
		//printf("%d\t", matriz[i][j]);
			if (i > j && matriz[i][j] != 0){
			
            triangularsuperior = 0; //0 = FALSO
   			 }  
	}
		

	
}
		
if (triangularsuperior)
    printf("\nMATRIZ TRIANGULAR SUPERIOR\n");
else
    printf("\nNAO E UMA MATRIZ TRIANGULAR SUPERIOR\n");

}



Exercicio 19



mult_posi(int A[][3],int x);

int main(){
	int i,j;
	
	int matri[3][3]={
		{1,1,1},
		{1,1,1},
		{1,1,1}
		
	};
	
	mult_posi(matri,3);
}



mult_posi(int A[][3],int x){
	
	int i,j,posicao;
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				posicao = A[i][j]* x;
				 A[i][j] = posicao;
			}
	}
	
	
	for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				printf("%d",A[i][j] );
		}
	printf("\n");
	}
}

Exercicio 20 



int primo(int m);



int main(){
	
	if(primo(31)!= 1){
		printf("nao e primo");
	}else{
		printf("e primo!!!");
	}
	
}


int primo(int m){
	
		if (m < 20){
		
			switch(m){
				case  2: return 1;
				break;
				case  3: return 1;
				break;
				case  7: return 1;
				break;
				case  11: return 1;
				break;
				case  13: return 1;
				break;	
				case  17: return 1;
				break;
				case  19: return 1;	
				break	;
			}
		}else if (m > 10){
			
			if(m%2 != 0 && m%3 != 0 & m%7 != 0 &&m%11 != 0 && m%13 != 0){
				return 1;
			}else{
				return 0;
			}	
		
			
		}
	
	
	
}





Exercicio 21







int primo(int m);
int gera_n_primo(int n);


int main(){
	
	gera_n_primo(100000);
	
}

int gera_n_primo(int n){
	int i;
	printf("os numeros primos ate %d:\n\n",n);
	for(i=0;i<=n;i++){
		if(primo(i)==1) {
				printf("%d\n",i);
	}
	
	
	
}

}


int primo(int m){
	
		if (m < 20){
		
			switch(m){
				case  2: return 1;
				break;
				case  3: return 1;
				break;
				case  7: return 1;
				break;
				case  11: return 1;
				break;
				case  13: return 1;
				break;	
				case  17: return 1;
				break;
				case  19: return 1;	
				break	;
			}
		}else if (m > 10){
			
			if(m%2 != 0 && m%3 != 0 & m%7 != 0 &&m%11 != 0 && m%13 != 0){
				return 1;
			}else{
				return 0;
			}	
		
			
		}
	
}




*/






