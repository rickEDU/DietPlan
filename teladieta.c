
#include "valida.h"
#define true 1
#define false 0
typedef struct alimento Alimento;

struct alimento{
  int codAlimento[4];
  char nomeAlimento[20];
  int calorias[5];
};


typedef struct refeicao Refeicao;

struct refeicao{
  char cpfDig[12];
  int alim1[2];
  int alim2[2];
  int alim3[2];
  int alim4[2];
  int alim5[2];
  int alim6[2];
  int alim7[2];
  int alim8[2];
  int alim9[2];
  int alim10[2];
  int alim11[2];
  int alim12[2];
  int status;
};


// na tela do cadastro de  dieta eu coloco todas as refeições, vou ter q mudar a struct e talvez diminuir a quantidade de refeições no dia, assim eu cadastro todas as refeições de uma vez.

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
  printf("///                           6. Voltar ao Menu anterior.                   ///\n");
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
  while(!validacpf(rfc->cpfDig)){
    scanf("%[^\n]", rfc->cpfDig);
    getchar();
  }
  printf("///       Digite dos alimentos do Café da manhã. \n");
  printf("///       Digite o código do alimento 1(Café da manhã) : ");
  scanf("%[^\n]", rfc->alim1);
  getchar();
  while(!validanumber(rfc->alim1)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim1);
    getchar();
  }
  printf("///       Digite o código do alimento 2(Café da manhã) : ");
  scanf("%[^\n]", rfc->alim2);
  getchar();
  while(!validanumber(rfc->alim2)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim2);
    getchar();
  }
  printf("///       Digite o código do alimento 3(Café da manhã) : ");
  scanf("%[^\n]", rfc->alim3);
  getchar();
  while(!validanumber(rfc->alim3)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim3);
    getchar();
  }
  printf("///       Digite o código do alimento 4(Café da manhã) : ");
  scanf("%[^\n]", rfc->alim4);
  getchar();
  while(!validanumber(rfc->alim4)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim4);
    getchar();
  }
  printf("///       Digite dos alimentos do Almoço. \n");
  printf("///       Digite o código do alimento 1(Almoço) : ");
  scanf("%[^\n]", rfc->alim5);
  getchar();
  while(!validanumber(rfc->alim5)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim5);
    getchar();
  }
  printf("///       Digite o código do alimento 2(Almoço) : ");
  scanf("%[^\n]", rfc->alim6);
  getchar();
  while(!validanumber(rfc->alim6)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim6);
    getchar();
  }
  printf("///       Digite o código do alimento 3(Almoço) : ");
  scanf("%[^\n]", rfc->alim7);
  getchar();
  while(!validanumber(rfc->alim7)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim7);
    getchar();
  }
  printf("///       Digite o código do alimento 4(Almoço) : ");
  scanf("%[^\n]", rfc->alim8);
  getchar();
  while(!validanumber(rfc->alim8)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim8);
    getchar();
  }
  printf("///       Digite dos alimentos do Jantar.\n");
  printf("///       Digite o código do alimento 1(Jantar) : ");
  scanf("%[^\n]", rfc->alim9);
  getchar();
  while(!validanumber(rfc->alim9)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim9);
    getchar();
  }
  printf("///       Digite o código do alimento 2(Jantar) : ");
  scanf("%[^\n]", rfc->alim10);
  getchar();
  while(!validanumber(rfc->alim10)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim10);
    getchar();
  }
  printf("///       Digite o código do alimento 3(Jantar) : ");
  scanf("%[^\n]", rfc->alim11);
  getchar();
  while(!validanumber(rfc->alim11)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim11);
    getchar();
  }
  printf("///       Digite o código do alimento 4(Jantar) : ");
  scanf("%[^\n]", rfc->alim12);
  getchar();
  while(!validanumber(rfc->alim12)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim12);
    getchar();
  }
  rfc->status=true;
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
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

  alm = (Alimento*)malloc(sizeof(Alimento*));

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
  printf("///       Digite o código do alimento para fins de indentificão(xxx): ");
  scanf("%[^\n]", alm->codAlimento);
  getchar();
  while(!validanumber(alm->codAlimento)){
    printf("Código doAlimento inválido !!\n");
    printf("Informe o Código do Alimento novamente :");
    scanf("%[^\n]", alm->codAlimento);
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
  scanf("%[^\n]", alm->calorias);
  getchar();
  while(!validanumber(alm->calorias)){
    printf("Calorias do Alimento inválido !!\n");
    printf("Informe o Calorias do Alimento novamente :");
    scanf("%[^\n]", alm->calorias);
    getchar();
  }
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
  printf("///                         &&&&&&&&&&&&&&&&&&&&&&&&&                       ///\n");
  printf("///                     = = = = = Excluir Dieta = = = = =                   ///\n");
  printf("///                         &&&&&&&&&&&&&&&&&&&&&&&&&                       ///\n");
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