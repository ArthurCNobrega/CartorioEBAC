#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��o de texto por regi�o
#include <string.h> // Biblioteca respons�vel pela cria��o de strings

int registro() // Fun��o respons�vel por cadastrar usu�rios no sistema
{
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
	// In�cio da cria��o de vari�veis e strings

	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char telefone[40];
	char curso[40];

	// Final da cria��o de vari�veis e strings

	printf("Digite o CPF a ser cadastrado: "); // Coletar informa��o do Usu�rio
	scanf("%s", cpf); // %s = strings
	
	strcpy(arquivo, cpf); // Respons�vel por copiar o valor das strings
	
	FILE *file; // Criar o arquivo
	file = fopen(arquivo, "w"); // Abrir e escrever arquivo
	fprintf(file,cpf); // Salvar o valor da vari�vel
	fclose(file); // Fechar o arquivo
	
	file = fopen(arquivo, "a"); // Atualizar 
	fprintf(file, ","); // Separar vari�vel
	fclose(file); // Fechar o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // Coletar informa��o do Usu�rio
	scanf("%s",nome); // %s = strings
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,nome); // Salvar o valor da vari�vel
	fclose(file); // Fechar o arquivo
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,","); // Separar vari�vel
	fclose(file); // Fechar o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // Coletar informa��o do Usu�rio
	scanf("%s",sobrenome); // %s = strings
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,sobrenome); // Salvar o valor da vari�vel
	fclose(file); // Fechar o arquivo
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,","); // Separar vari�vel
	fclose(file); // Fechar o arquivo
	
	printf("Digite o telefone a ser cadastrado: "); // Coletar informa��o do Usu�rio
	scanf("%s",telefone); // %s = strings
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,telefone); // Salvar o valor da vari�vel
	fclose(file); // Fechar o arquivo
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,","); // Separar vari�vel
	fclose(file); // Fechar o arquivo
	
	printf("Digite o curso de ingresso do aluno: "); // Coletar informa��o do Usu�rio
	scanf("%s",curso); // %s = strings
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,curso); // Salvar o valor da vari�vel
	fclose(file); // Fechar o arquivo
		
	system("pause"); // Pausa a execu��o e aguarda comando
	
}

int consulta() // Fun��o respons�vel por consultar usu�rios no sistema
{
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
	
	// In�cio da cria��o de vari�veis e strings
	
	char cpf[40];
	char conteudo[200];
	
	// Fim da cria��o de vari�veis e strings
	
	printf("Digite o CPF a ser consultado: "); // Coletar informa��o do Usu�rio
	scanf("%s",cpf); // %s = strings
	
	FILE * file; // Criar o arquivo
	file = fopen(cpf, "r"); // Abrir e ler o arquivo
	
	if(file == NULL) // Caso o valor seja nulo
	{
		printf("Arquivo n�o localizado!\n"); // Transmitir informa��o do Usu�rio
	}
	
	while(fgets(conteudo, 200, file) != NULL) // Enquanto o valor for... 
	{
		printf("\n Essas s�o as informa��es do usu�rio: "); // Transmitir informa��o do Usu�rio
		printf("%s", conteudo); // Imprime a string armazenada em 'conteudo' na sa�da padr�o
		printf("\n\n"); // Pula linhas
	}
	
	system("pause"); // Pausa a execu��o e aguarda comando
}

int deletar() // Fun��o respons�vel por deletar usu�rios no sistema
{
	// In�cio da cria��o de vari�veis e strings
	
	char cpf[40];
	
	// Fim da cria��o de vari�veis e strings
	
	printf("Digite o CPF a ser deletado: "); // Colocar informa��o do Usu�rio
	scanf("%s", cpf); // %s = strings
	
	remove(cpf); // Respons�vel por remover o CPF
	
	FILE * file; // Criar o arquivo
	file = fopen(cpf,"r"); // Abrir e ler o arquivo
	fclose(file); // Fechar o arquivo
	
	if(file == NULL) // Caso o valor seja nulo
	{
		printf("O aluno n�o se encontra no sistema!\n"); // Transmitir informa��o do Usu�rio
		system("pause"); // Pausa a execu��o e aguarda comando
	}
	
}

int main()
{
	int opcao=0; // Definindo as vari�veis
	int laco=1; // Declara e inicializa o contador 'laco' com 1 para controle de um loop

	for(laco=1;laco=1;) // Inicia um la�o infinito / Bloco de c�digo que ser� repetido indefinidamente
	{
		
		system("cls"); // Respons�vel por limpar a tela
		
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem

		printf("### Cart�rio da EBAC ###\n"); // In�cio do menu
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1 - Registrar Aluno\n");
		printf("\t2 - Consultar Aluno\n");
		printf("\t3 - Deletar Aluno\n\n"); // Fim do menu
		printf("Digite o n�mero da op��o: "); // Dar op��es ao navegante

		scanf("%d", &opcao); // %d para inteiros
	
		system("cls"); // Respons�vel por limpar a tela
	
		switch (opcao) // In�cio da sele��o do menu
		{
			case 1:
			registro(); // Chamada de fun��es
			break;
			
			case 2:
			consulta(); // Chamada de fun��es
			break;
			
			case 3:
			deletar(); // Chamada de fun��es
			break;
			
			default:
			printf("Essa op��o n�o est� dispon�vel!\n"); // Transmite informa��o sobre os dados indispon�veis no sistema
			system("pause"); // Pausa a execu��o e aguarda comando
			break;	
		} // Fim da sele��o do menu
	
	
	}

}


