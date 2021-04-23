
#include "valida.h"

typedef struct alimento Alimento;

struct alimento{
  int codAlimento[4];
  char nomeAlimento[20];
  int calorias[5];
};


typedef struct refeicao Refeicao;

struct refeicao{
  char cpfDig[12];
  char tipo[2];
  int alim1[2];
  int alim2[2];
  int alim3[2];
  int alim4[2];
};


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
    printf("Nome inválido !!\n");
    printf("Informe o Nome novamente :");
    scanf("%[^\n]", rfc->cpfDig);
    getchar();
  }
  printf("///                *  1 - Café da manhã  *                                  ///\n");
  printf("///                *  2 - Lanche 1  *                                       ///\n");
  printf("///                *  3 - Almoço  *                                         ///\n");
  printf("///                *  4 - Lanche 2  *                                       ///\n");
  printf("///                *  5 - Jantar  *                                         ///\n");
  printf("///                *  6 - Lanche 3  *                                       ///\n");
  printf("///                                                                         ///\n");
  printf("///                Tipo da reifeição (1-6): "); 
  scanf("%[^\n]", rfc->tipo);
  getchar();
  while(!validatipo(rfc->tipo)){
    printf("Tipo inválido !!\n");
    printf("Informe o Tipo novamente :");
    scanf("%[^\n]", rfc->tipo);
    getchar();
  }
  printf("///       Digite o código do alimento 1 : ");
  scanf("%[^\n]", rfc->alim1);
  getchar();
  while(!validanumber(rfc->alim1)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim1);
    getchar();
  }
  printf("///       Digite o código do alimento 2 : ");
  scanf("%[^\n]", rfc->alim2);
  getchar();
  while(!validanumber(rfc->alim2)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim2);
    getchar();
  }
  printf("///       Digite o código do alimento 3 : ");
  scanf("%[^\n]", rfc->alim3);
  getchar();
  while(!validanumber(rfc->alim3)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim3);
    getchar();
  }
  printf("///       Digite o código do alimento 4 : ");
  scanf("%[^\n]", rfc->alim4);
  getchar();
  while(!validanumber(rfc->alim4)){
    printf("Código do Alimento inválido !!\n");
    printf("Informe o Código novamente :");
    scanf("%[^\n]", rfc->alim4);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
  return rfc;
}

void teladietaPesquisa(void){
  char nome[51];
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
  printf("///                   = = = = = Pesquisar Dieta = = = = =                ///\n");
  printf("///                             &&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                                                                         ///\n");
  printf("///             *  Digite o nome do Paciente que deseja pesquisar  *        ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  // printf("///   Nome do Paciente: ");
  // getchar();
  // while(!validanome(nome)){
  //   printf("Nome inválido !!\n");
  //   printf("Informe o Nome novamente :");
  //   scanf("%[^\n]", nome);
  //   getchar();
  //}
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}

void teladietaAtualiza(void){
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
  printf("///              = = = = = Atualizar Dados Dieta = = = = =               ///\n");
  printf("///                        &&&&&&&&&&&&&&&&&&&&&&&&                         ///\n");
  printf("///                                                                         ///\n");
  printf("///        *  Para atualizar seus dados preencha os campo a seguir  *       ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  // printf("///       Nome: ");
  // scanf("%[^\n]", nome);
  // getchar();
  // while(!validanome(nome)){
  //   printf("Nome inválido !!\n");
  //   printf("Informe o Nome novamente :");
  //   scanf("%[^\n]", nome);
  //   getchar();
  // }
  // printf("///       Peso Atual: ");
  // scanf("%[^\n]", peso);
  // getchar();
  // while(!validapeso(peso)){
  //   printf("Peso inválido !!\n");
  //   printf("Informe o Peso novamente :");
  //   scanf("%[^\n]", peso);
  //   getchar();
  // }
  // printf("///       Altura: ");
  // getchar();
  // while(!validaaltura(altura)){
  //   printf("Altura inválida !!\n");
  //   printf("Informe a altura novamente :");
  //   scanf("%[^\n]", altura);
  //   getchar();
  // }
  // printf("///       E-mail: ");
  // getchar();
  // while(!validaemail(email)){
  //   printf("E-mail inválido !!\n");
  //   printf("Informe o E-mail novamente :");
  //   scanf("%[^\n]", email);
  //   getchar();
  // }
  // printf("///       Telefone: ");
  // getchar();
  // while(!validatel(tel)){
  //   printf("Telefone inválido !!\n");
  //   printf("Informe o Telefone novamente :");
  //   scanf("%[^\n]", tel);
  //   getchar();
  // }
  // printf("///       Nível de atividade física (Baixo, Moderado ou Alto): ");
  // getchar();
  // while(!validaatividade(atividade)){
  //   printf("Atividade informada erroneamente !!\n");
  //   printf("Informe o Nível de atividade física novamente :");
  //   scanf("%[^\n]", atividade);
  //   getchar();
  // }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}


void teladietaExclui(void){
  char paciente[51];
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
  printf("///   Nome do Paciente: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ0]", paciente);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}

void teladietaErro(void){
  char paciente[51];
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