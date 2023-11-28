#include <stdio.h> //biblioteca de comunica��o com o usuario
#include <stdlib.h>// biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>//biblioteca de aloca��es de texto por regi�o
#include <string.h>//biblioteca respons�vel por cuidar das strings




int registro() //FUn�ao responsave� por casdastrar ususarios no sistema
{
	setlocale(LC_ALL, "Portuguese");// Defin��o de nomes
	
	//inicio de cri��o de vari�vis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim de cri��o de vari�vis/string
	
	printf("Digite o CPF a ser cadastrado: ");//coletar inform��o do usu�rio
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
	setlocale(LC_ALL, "Portuguese");// Defin��o de nomes
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == 	NULL)
    {
    	printf("Arquivo n�o localizado!./n ");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssa s�o informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("/n/n");
	}
	
	system("pause");
	

}

int deletar()
{
	char cpf[40];
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	printf("usu�rio deletado com sucesso!");

	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
    {
		printf("O CPF n�o se encontra no sistema!");
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
	
	
	printf("Cart�rio EBAC");
	printf("Login de adiministrador:\n\nDigite a sua seha: ");
	scanf("%s,",senhadigitada);
	
	comparacao = strcmp(senhadigitada,"admin");
	
	if(comparacao == 0)	
	{
	
       system("cls");	
	   for(laco=1;laco=1;)
	   {
	    	system("cls"); //responsavel por limpar a tela
	
 	        setlocale(LC_ALL, "Portuguese");// Defin��o de nomes
	
	         printf("\tCart�rio da EBAC \n\n");// Inicio do menu
	
	         printf(" Escolha a op��o desejada do menu:\n\n");
	
	         printf("\t1 - Registro de nomes:\n");
	         printf("\t2 - Consultar nomes:\n");
	         printf("\t3 - Deletar nomes:\n\n");
	         printf("\t4 - sair do sistema\n\n");
	         printf(" Digite a op��o:");//fim do menu
	    
 
              scanf("%d",&opcao);// Armazenando escolha o usu�rio
    
             system("cls");
       
             switch(opcao)
            {
            	case 1:
	            registro(); //chamada de fun�oes
	            break;
	     
	             case 2:
		        consultar();// chamada de fun��es
                break;
         
                case 3:
		        deletar();// chamada de fun��es
                break;
        
                case 4:
		    	printf("obrigado por utilizar nosso sistema!");// finalizar programa
		        return 0;
                break;
            
                default:  printf("Op��o n�o dispon�vel\n");
                system("pause");
                
            }
            
        } 
        
    }
    
    else
        printf("senha incorreta!");
    
  

}	 
	 

    
    

