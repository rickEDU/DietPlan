#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "teladieta.h"
#include "telapacient.h"
#include "valida.h"

typedef struct alimento Alimento;

typedef struct refeicao Refeicao;


char buscarPacienteDNV(char* cpf) {
	FILE* fp;
	Paciente* pc;

	pc = (Paciente*) malloc(sizeof(Paciente));
	fp = fopen("PACIENTE.dat", "rb");
	if (fp == NULL) {
		printf("erro");
	 }
	while(fread(pc, sizeof(Paciente), 1, fp)) {
		if ((strcmp(pc->cpf, cpf) == 0)  && (pc->status == 1)) {
      fclose(fp);

      return 1;
		}
	}
	fclose(fp);
  printf("///  Paciente não encontrado !!!!                                           /// \n");
  printf("///  Informe o CPF novamente :");
	return 0;
}


void listaAlimento(void) {
    FILE* fp;
    Alimento* pct;
    char nomeAlimt[12];
    int tam;

    if (NULL) {
	     fp = fopen("ALIMENTOS.dat", "wb");
    }
    pct = (Alimento*) malloc(sizeof(Alimento));
    fp = fopen("ALIMENTOS.dat", "rb");
    printf("///                  Lista de Alimentos já cadastrados:                     ///\n");
    while (fread(pct, sizeof(Alimento), 1, fp)) {
        if (pct->status !=0) {
            tam = strlen(pct->nomeAlimento);
            strncpy(nomeAlimt, pct->nomeAlimento, tam);
             for (int i = tam; i < 11; i++) {
                 nomeAlimt[i] = ' ';
             }
             nomeAlimt[11] = '\0';            

             printf("///  || ID: %-3s || Nome: %-11s || Calorias: %-5s || ///\n", pct->codAlimento, nomeAlimt, pct->calorias);
        }
    }
    fclose(fp);
    free(pct);
}


char teladieta(void){
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
  printf("///                                 ##########                              ///\n");
  printf("///                       = = = = = Menu Dieta = = = = =                    ///\n");
  printf("///                                 ##########                              ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                           1- Cadastrar Dieta.                           ///\n");
  printf("///                           2- Pesquisar Dieta.                           ///\n");
  printf("///                           3- Atualizar dados da Deita.                  ///\n");
  printf("///                           4. Excluir Dieta.                             ///\n");
  printf("///                           5. Acrescentar Alimentos na lista.            ///\n");
  printf("///                           0. Voltar ao Menu anterior.                   ///\n");
	printf("///                       Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}


Refeicao* teladietaCadastro(void){
  Refeicao* rfc;


  rfc = (Refeicao*)malloc(sizeof(Refeicao));

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
  printf("///                 = = = = = Cadastro de Dieta = = = = =                   ///\n");
  printf("///                           &&&&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha com as informações do Alimento  *            ///\n");
  printf("///                                                                         ///\n");
  printf("///       Digite o CPF do paciente que deseja cadastrar essa dieta: ");
  scanf("%[^\n]", rfc->cpfDig);
  getchar();
  while((!validacpf(rfc->cpfDig)) || (!buscarPacienteDNV(rfc->cpfDig))){
    scanf("%[^\n]", rfc->cpfDig);
    getchar();
  }
  printf("///       Digite os alimentos do Café da manhã. \n");
  listaAlimento();
  for (int i = 0; i<4; i++){
    printf("///       Digite o código do alimento %d (Café da manhã) : " , i+1);
    scanf("%s", rfc->cafe[i]);
  }
  printf("///       Digite os alimentos do Almoço. \n");
  for (int i = 0; i<4; i++){
    printf("///       Digite o código do alimento %d (Almoço) : " , i+1);
    scanf("%s", rfc->almoco[i]);
  }
  printf("///       Digite os alimentos do Jantar. \n");
  for (int i = 0; i<4; i++){
    printf("///       Digite o código do alimento %d (Jantar) : " , i+1);
    scanf("%s", rfc->jantar[i]);
  }
  rfc->status=1;
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
  return rfc;
}

char* teladietaPesquisa(void){
  char* cpf;

  cpf = (char*)malloc(sizeof(char));
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
  printf("///                   = = = = = Pesquisar Dieta = = = = =                   ///\n");
  printf("///                             &&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                                                                         ///\n");
  printf("///             *  Digite o nome do Paciente que deseja pesquisar  *        ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  printf("///       Digite o CPF do paciente que deseja cadastrar essa dieta: ");
  scanf("%[^\n]", cpf);
  getchar();
  while(!validacpf(cpf)){
    scanf("%[^\n]", cpf);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  return cpf;
}

char* teladietaAtualiza(void){
  char* cpf;

  cpf = (char*)malloc(sizeof(char));
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
  printf("///              = = = = = Atualizar Dados Dieta = = = = =                   ///\n");
  printf("///                        &&&&&&&&&&&&&&&&&&&&&&&&                         ///\n");
  printf("///                                                                         ///\n");
  printf("///        *  Para atualizar seus dados preencha o campo a seguir  *       ///\n");
  printf("///                                                                         ///\n");
  printf("///       Digite o CPF do paciente que deseja atualizar a dieta : ");
  scanf("%[^\n]", cpf);
  getchar();
  while(!validacpf (cpf)){
    scanf("%[^\n]", cpf);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
  return cpf;
}


char* teladietaExclui(void){
  char* cpf;

  cpf = (char*)malloc(sizeof(char));
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
  printf("///                     = = = = = Excluir Dieta = = = = =                   ///\n");
  printf("///                         &&&&&&&&&&&&&&&&&&&&&&&&&                       ///\n");
  printf("///                                                                         ///\n");
  printf("///             *  Digite o nome do Paciente que deseja excluir  *          ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  printf("///       Digite o CPF do paciente que deseja Excluir : ");
  scanf("%[^\n]", cpf);
  getchar();
  while(!validacpf (cpf)){
    scanf("%[^\n]", cpf);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
  return cpf;
}

void teladietaErro(void){
  
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
  printf("///                     = = = = = Excluir Dieta = = = = =                   ///\n");
  printf("///                         &&&&&&&&&&&&&&&&&&&&&&&&&                       ///\n");
  printf("///                                                                         ///\n");
  printf("///             #  Código do alimento colocado erroneamente ou   #          ///\n");
  printf("///                                #  ou  #                                 ///\n");
  printf("///                       #  Ele não existe na lista   #                    ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}







Alimento* telaAcrescentaalimento(void){
  Alimento* alm;

  alm = (Alimento*)malloc(sizeof(Alimento));

  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                             &&&&&&&&&&&&&&&&&&&&                        ///\n");
  printf("///                   = = = = = Acrescentar Alimento = = = = =              ///\n");
  printf("///                             &&&&&&&&&&&&&&&&&&&&                        ///\n");
  printf("///                                                                         ///\n");
  printf("///     *  Preencha as informações do alimento que deseja acrescentar  *    ///\n");
  printf("///                                                                         ///\n");
  listaAlimento();
  printf("///                                                                         ///\n");
  printf("///       Digite o código do alimento para fins de indentificão(xxx): ");
  scanf("%s", alm->codAlimento);
  getchar();
  while(!validanumber(alm->codAlimento)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código do Alimento novamente :");
    scanf("%s", alm->codAlimento);
    getchar();
  }
  printf("///       Digite o Nome do alimento: ");
  scanf("%[^\n]", alm->nomeAlimento);
  getchar();
  while(!validanome(alm->nomeAlimento)){
    printf("Nome do Alimento inválido !!\n");
    printf("Informe o Nome do Alimento novamente :");
    scanf("%[^\n]", alm->nomeAlimento);
    getchar();
  }
  printf("///       Digite a quantidade de Calorias do alimento: ");
  scanf("%s", alm->calorias);
  getchar();
  while(!validanumber(alm->calorias)){
    printf("Calorias do Alimento inválido !!\n");
    printf("Informe o Calorias do Alimento novamente :");
    scanf("%s", alm->calorias);
    getchar();
  }
  alm->status=1;
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
  return alm;
}


char teladietaAgain(void){
  char b;
  
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                         &&&&&&&&&&&&&&&&&&&&&&&&&&                      ///\n");
  printf("///               = = = = = Acresncetar Outro Alimento = = = = =            ///\n");
  printf("///                         &&&&&&&&&&&&&&&&&&&&&&&&&&                      ///\n");
  printf("///                                                                         ///\n");
  printf("///         #  Deseja acrescentar outro Alimento na lista? R:(s/n) ou (S/N): ");
	scanf("%c", &b);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
  return b;
}