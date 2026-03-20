#include <stdio.h> //biblioteca de comunicação com o usúario
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por regiões
#include <string.h> //biblioteca responsável por cuidar das strings



int Registro() // Responsável por cadastrar os clientes no sistema

{
	// início criação de variavéis/strings 
 char arquivo[40];
 char cpf[40];
 char nome[40];
 char sobrenome[40];
 char cargo[40]; 
 
 printf("digite o CPF a ser cadastrado: "); //colentando informação do usuário
 scanf("%s",  cpf);	// %s refere-se a string
 
 strcpy(arquivo, cpf); 
 
 FILE *file; //cria o arquivo
 file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
 fprintf(file,cpf); //salva o valor da variavel
 fclose(file); //fecha o arquivo
 
 file = fopen(arquivo, "a");
 fprintf(file, ","); 
 fclose(file); 
 
 printf("digite o nome a ser cadastrado: ");
 scanf("%s",   nome);
 
 file= fopen(arquivo, "a");
 fprintf(file, nome);
 fclose(file);
 
 file= fopen(arquivo, "a");
 fprintf(file,",");
 fclose(file);
 
 printf("digite o sobrenome a ser cadastrado: ");
 scanf("%s", sobrenome);
 
 file = fopen(arquivo, "a");
 fprintf(file,sobrenome);
 fclose(file);
 
 file = fopen(arquivo, "a");
 fprintf(file,",");
 fclose(file);
 
 printf("digite o cargo a ser cadastrado: "); 
 scanf("%s", cargo); 
 
 file = fopen(arquivo, "a");
 fprintf(file, cargo);
 fclose(file);
 
 system ("pause"); 
 
 
 
}
int Consulta()
{
	setlocale(LC_ALL, "Portuguese");
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL);
	{
		printf("Não foi possivel abrir o arquivo, não localizado!.\n");
		
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuario: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system ("pause"); 
}
int Deletar()
{
	printf("Você escolheu deletar nomes!\n"); 
   	system("pause");
}
int main() 	
    {
    int opcao=0; //definindo variaveis		
	int laco=1;
	
	 for(laco=1;laco=1; )
    {
	
	setlocale(LC_ALL, "Portuguese"); // definindo a linguagem
	
	
	
	printf("### Cartório da EBAC ###\n\n"); //inicio do menu
    printf("Escolha a opção desejada do menu:\n\n");
    printf("\t1 - Registrar nomes\n");
    printf("\t2 - Consultar nomes\n");
    printf("\t3 - Deletar nomes\n\n");
    printf("Opção: ");//fim do menu
    
	scanf("%d", &opcao); // inicio da selecao
   
   system("cls"); //responsável por limpar a tela
	
	switch(opcao)
	{
	
	case 1:
	Registro(); //registro de funções 
   	break;
   	
   	case 2:
	Consulta();
	break;
	
	case 3:
	Deletar();
   	break;
   	
    
   	
   	default:
   	printf("Essa opção não esta disponível!\n"); // fim da selecao
   system("pause"); 
   break;
   
    }
	
 }

}

  




 
