#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação de espaço em memória
#include <locale.h> // Biblioteca de alocação de texto por região
#include <string.h> // Biblioteca responsável pela criação de strings

int registro() // Função responsável por cadastrar usuários no sistema
{
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
	// Início da criação de variáveis e strings

	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char telefone[40];
	char curso[40];

	// Final da criação de variáveis e strings

	printf("Digite o CPF a ser cadastrado: "); // Coletar informação do Usuário
	scanf("%s", cpf); // %s = strings
	
	strcpy(arquivo, cpf); // Responsável por copiar o valor das strings
	
	FILE *file; // Criar o arquivo
	file = fopen(arquivo, "w"); // Abrir e escrever arquivo
	fprintf(file,cpf); // Salvar o valor da variável
	fclose(file); // Fechar o arquivo
	
	file = fopen(arquivo, "a"); // Atualizar 
	fprintf(file, ","); // Separar variável
	fclose(file); // Fechar o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // Coletar informação do Usuário
	scanf("%s",nome); // %s = strings
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,nome); // Salvar o valor da variável
	fclose(file); // Fechar o arquivo
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,","); // Separar variável
	fclose(file); // Fechar o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // Coletar informação do Usuário
	scanf("%s",sobrenome); // %s = strings
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,sobrenome); // Salvar o valor da variável
	fclose(file); // Fechar o arquivo
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,","); // Separar variável
	fclose(file); // Fechar o arquivo
	
	printf("Digite o telefone a ser cadastrado: "); // Coletar informação do Usuário
	scanf("%s",telefone); // %s = strings
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,telefone); // Salvar o valor da variável
	fclose(file); // Fechar o arquivo
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,","); // Separar variável
	fclose(file); // Fechar o arquivo
	
	printf("Digite o curso de ingresso do aluno: "); // Coletar informação do Usuário
	scanf("%s",curso); // %s = strings
	
	file = fopen(arquivo, "a"); // Abrir e atualizar o arquivo
	fprintf(file,curso); // Salvar o valor da variável
	fclose(file); // Fechar o arquivo
		
	system("pause"); // Pausa a execução e aguarda comando
	
}

int consulta() // Função responsável por consultar usuários no sistema
{
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
	
	// Início da criação de variáveis e strings
	
	char cpf[40];
	char conteudo[200];
	
	// Fim da criação de variáveis e strings
	
	printf("Digite o CPF a ser consultado: "); // Coletar informação do Usuário
	scanf("%s",cpf); // %s = strings
	
	FILE * file; // Criar o arquivo
	file = fopen(cpf, "r"); // Abrir e ler o arquivo
	
	if(file == NULL) // Caso o valor seja nulo
	{
		printf("Arquivo não localizado!\n"); // Transmitir informação do Usuário
	}
	
	while(fgets(conteudo, 200, file) != NULL) // Enquanto o valor for... 
	{
		printf("\n Essas são as informações do usuário: "); // Transmitir informação do Usuário
		printf("%s", conteudo); // Imprime a string armazenada em 'conteudo' na saída padrão
		printf("\n\n"); // Pula linhas
	}
	
	system("pause"); // Pausa a execução e aguarda comando
}

int deletar() // Função responsável por deletar usuários no sistema
{
	// Início da criação de variáveis e strings
	
	char cpf[40];
	
	// Fim da criação de variáveis e strings
	
	printf("Digite o CPF a ser deletado: "); // Colocar informação do Usuário
	scanf("%s", cpf); // %s = strings
	
	remove(cpf); // Responsável por remover o CPF
	
	FILE * file; // Criar o arquivo
	file = fopen(cpf,"r"); // Abrir e ler o arquivo
	fclose(file); // Fechar o arquivo
	
	if(file == NULL) // Caso o valor seja nulo
	{
		printf("O aluno não se encontra no sistema!\n"); // Transmitir informação do Usuário
		system("pause"); // Pausa a execução e aguarda comando
	}
	
}

int main()
{
	int opcao=0; // Definindo as variáveis
	int laco=1; // Declara e inicializa o contador 'laco' com 1 para controle de um loop

	for(laco=1;laco=1;) // Inicia um laço infinito / Bloco de código que será repetido indefinidamente
	{
		
		system("cls"); // Responsável por limpar a tela
		
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem

		printf("### Cartório da EBAC ###\n"); // Início do menu
		printf("Escolha a opção desejada do menu:\n\n");
		printf("\t1 - Registrar Aluno\n");
		printf("\t2 - Consultar Aluno\n");
		printf("\t3 - Deletar Aluno\n\n"); // Fim do menu
		printf("Digite o número da opção: "); // Dar opções ao navegante

		scanf("%d", &opcao); // %d para inteiros
	
		system("cls"); // Responsável por limpar a tela
	
		switch (opcao) // Início da seleção do menu
		{
			case 1:
			registro(); // Chamada de funções
			break;
			
			case 2:
			consulta(); // Chamada de funções
			break;
			
			case 3:
			deletar(); // Chamada de funções
			break;
			
			default:
			printf("Essa opção não está disponível!\n"); // Transmite informação sobre os dados indisponíveis no sistema
			system("pause"); // Pausa a execução e aguarda comando
			break;	
		} // Fim da seleção do menu
	
	
	}

}


