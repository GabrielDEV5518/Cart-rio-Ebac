#include <stdio.h> //biblioteca de comunicação com o usuario
#include <stdlib.h>// biblioteca de alocação de espaço em memória
#include <locale.h>//biblioteca de alocações de texto por região
#include <string.h>//biblioteca responsável por cuidar das strings




int registro() //FUnçao responsaveç por casdastrar ususarios no sistema
{
	setlocale(LC_ALL, "Portuguese");// Definção de nomes
	
	//inicio de crição de variávis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim de crição de variávis/string
	
	printf("Digite o CPF a ser cadastrado: ");//coletar informção do usuário
	scanf("%s", cpf); //%s refere-se ao string
	

    strcpy(arquivo, cpf); //responsavel por copiar valores das stings
     
    FILE *file; //Cria o arquivo
    file = fopen(arquivo, "w"); // cria o arquivo "w" sgnifica escrever
    fprintf(file,cpf); //salvo o valor da varialvel   
    fclose(file); //fecho o arquivo
     
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
     
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
     
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
     
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s",sobrenome);
     
    file = fopen(arquivo, "a");
	fprintf(file,sobrenome);    
    fclose(file);
	 
	file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
     
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);	 
     
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
     
    system("pause");
	 
	
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese");// Definção de nomes
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == 	NULL)
    {
    	printf("Arquivo não localizado!./n ");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssa são informações do usuário: ");
		printf("%s", conteudo);
		printf("/n/n");
	}
	
	system("pause");
	

}

int deletar()
{
	char cpf[40];
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	printf("usuário deletado com sucesso!");

	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
    {
		printf("O CPF não se encontra no sistema!");
	}
	
    system("pause");

}

 int main()
 {
    setlocale(LC_ALL, "Portuguese");
 

	int opcao=0;// definir variaveis
	int laco=1;
	char senhadigitada[10]="a";
	int comparacao;
	
	
	printf("Cartório EBAC");
	printf("Login de adiministrador:\n\nDigite a sua seha: ");
	scanf("%s,",senhadigitada);
	
	comparacao = strcmp(senhadigitada,"admin");
	
	if(comparacao == 0)	
	{
	
       system("cls");	
	   for(laco=1;laco=1;)
	   {
	    	system("cls"); //responsavel por limpar a tela
	
 	        setlocale(LC_ALL, "Portuguese");// Definção de nomes
	
	         printf("\tCartório da EBAC \n\n");// Inicio do menu
	
	         printf(" Escolha a opção desejada do menu:\n\n");
	
	         printf("\t1 - Registro de nomes:\n");
	         printf("\t2 - Consultar nomes:\n");
	         printf("\t3 - Deletar nomes:\n\n");
	         printf("\t4 - sair do sistema\n\n");
	         printf(" Digite a opção:");//fim do menu
	    
 
              scanf("%d",&opcao);// Armazenando escolha o usuário
    
             system("cls");
       
             switch(opcao)
            {
            	case 1:
	            registro(); //chamada de funçoes
	            break;
	     
	             case 2:
		        consultar();// chamada de funções
                break;
         
                case 3:
		        deletar();// chamada de funções
                break;
        
                case 4:
		    	printf("obrigado por utilizar nosso sistema!");// finalizar programa
		        return 0;
                break;
            
                default:  printf("Opção não disponível\n");
                system("pause");
                
            }
            
        } 
        
    }
    
    else
        printf("senha incorreta!");
    
  

}	 
	 

    
    

