#include "valida.h"
#include "valida.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0
//
//// Menus do Paciente
//


typedef struct paciente Paciente;

struct paciente{
  char cpf[12];
  char nome[51];
  char peso[8];
  char altura[5];
  char email[4];
  char tel[16];
  int status;
};







char buscarPacienteAG(char* cpf) {
	FILE* fp;
	Paciente* pc;

	pc = (Paciente*) malloc(sizeof(Paciente));
	fp = fopen("PACIENTE.dat", "rb");
	if (fp == NULL) {
		printf("erro");
	 }
	while(fread(pc, sizeof(Paciente), 1, fp)) {
		if ((strcmp(pc->cpf, cpf) == 0)  && (pc->status == true)) {
      fclose(fp);
      printf("///                                                                         /// \n");
      printf("///  Esse CPF já está cadastrado no banco de dados                          /// \n");
      printf("///  Informe o CPF novamente :");
      return 0;
		}
	}
	fclose(fp);
	return 1;
}





char telapaciente(void){
  char a;
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                              #############                              ///\n");
  printf("///                    = = = = = Menu Paciente = = = = =                    ///\n");
  printf("///                              #############                              ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                           1- Cadastrar Paciente.                        ///\n");
  printf("///                           2- Pesquisar Paciente.                        ///\n");
  printf("///                           3- Atualizar dados do Paciente.               ///\n");
  printf("///                           4. Excluir Paciente.                          ///\n");
  printf("///                           5. Voltar ao Menu anterior.                   ///\n");
	printf("///                       Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}

//
//// Submenus Paciente
//



Paciente* telapacienteCadastro(void){
  Paciente* pc;
  
  pc= (Paciente*)malloc(sizeof(Paciente));

  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                           &&&&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                 = = = = = Cadastro de Paciente = = = = =                ///\n");
  printf("///                           &&&&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha com as informações do Paciente  *            ///\n");  
  printf("///       CPF: ");
  scanf("%[^\n]", pc->cpf);
  getchar();
  while((!validacpf(pc->cpf)) || (!buscarPacienteAG(pc->cpf))){
    scanf("%[^\n]", pc->cpf);
    getchar();
  }
  printf("///       Nome: ");
  scanf("%[^\n]", pc->nome);
  getchar();
  while(!validanome(pc->nome)){
    printf("Nome inválido !!\n");
    printf("Informe o Nome novamente :");
    scanf("%[^\n]", pc->nome);
    getchar();
  }
  printf("///       Peso Atual: ");
  scanf("%[^\n]", pc->peso);
  getchar();
  while(!validanumber(pc->peso)){
    printf("Peso inválido !!\n");
    printf("Informe o Peso novamente :");
    scanf("%[^\n]", pc->peso);
    getchar();
  }
  printf("///       Altura: ");
  scanf("%[^\n]", pc->altura);
  getchar();
  while(!validanumber(pc->altura)){
    printf("Altura inválida !!\n");
    printf("Informe a altura novamente :");
    scanf("%[^\n]", pc->altura);
    getchar();
  }
  printf("///       E-mail: ");
  scanf("%[^\n]", pc->email);
  getchar();
  while(!validaemail(pc->email)){
    printf("E-mail inválido !!\n");
    printf("Informe o E-mail novamente :");
    scanf("%[^\n]", pc->email);
    getchar();
  }
  printf("///       Telefone: ");
  scanf("%[^\n]", pc->tel);
  getchar();
  while(!validatel(pc->tel)){
    printf("Telefone inválido !!\n");
    printf("Informe o Telefone novamente :");
    scanf("%[^\n]", pc->tel);
    getchar();
  }
  pc->status=true;
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
  return pc;
}



char* telapacientePesquisa(void){
  char* cpf;

  cpf = (char*)malloc(12*sizeof(char));

  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                             &&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                   = = = = = Pesquisar Paciente = = = = =                ///\n");
  printf("///                             &&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                                                                         ///\n");
  printf("///             *  Digite o CPF do Paciente que deseja pesquisar  *        ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  printf("///   CPF do Paciente: ");
  scanf("%[^\n]", cpf);
  getchar();
  while(!validacpf(cpf)){
    scanf("%[^\n]", cpf);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  return cpf;
}

char* telapacienteAtualiza(void){
 char* cpf;

  cpf= (char*)malloc(12*sizeof(char));

  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                        &&&&&&&&&&&&&&&&&&&&&&&&                         ///\n");
  printf("///              = = = = = Atualizar Dados Paciente = = = = =               ///\n");
  printf("///                        &&&&&&&&&&&&&&&&&&&&&&&&                         ///\n");
  printf("///                                                                         ///\n");
  printf("///        *  Para atualizar seus dados preencha os campo a seguir  *       ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");  
  printf("///             *  Digite o CPF do Paciente que deseja Atualizar  *         ///\n");
  printf("///                                                                         ///\n");
  printf("///   CPF do Paciente: ");
  scanf("%[^\n]", cpf);
  getchar();
  while(!validacpf(cpf)){
    scanf("%[^\n]", cpf);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  return cpf;
}


char* telapacienteExclui(void){
  char* cpf;
  cpf = (char*)malloc(12*sizeof(char));
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                         &&&&&&&&&&&&&&&&&&&&&&&&&                       ///\n");
  printf("///               = = = = = Excluir Conta do Paciente = = = = =             ///\n");
  printf("///                         &&&&&&&&&&&&&&&&&&&&&&&&&                       ///\n");
  printf("///                                                                         ///\n");
  printf("///             *  Digite o CPF do Paciente que deseja excluir  *           ///\n");
  printf("///                                                                         ///\n");
  printf("///   CPF do Paciente: ");
  scanf("%[^\n]", cpf);
  getchar();
  while(!validacpf(cpf)){
    scanf("%[^\n]", cpf);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  return cpf;
}

void telapacienteErro(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                      &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                     ///\n");
  printf("///            = = = = = Erro ao tentar gravar os Dados = = = = =           ///\n");
  printf("///                      &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                     ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                               *  ERRO  *                                ///\n");
  printf("///                                                                         ///\n");
  printf("///          *  Não foi possível completar a Gravação do arquivo  *         ///\n");
  printf("///                          *  Tente novamente   *                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}