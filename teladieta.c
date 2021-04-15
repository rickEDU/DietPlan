
#include "valida.h"


typedef struct refeicao Refeicao;

struct refeicao{
 int codigo;
 char nome[51];
 char calorias[5];
 int listaAlimentos[5];
};

char dieta(void){
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
  printf("///                           1- Cadastrar Dieta.                        ///\n");
  printf("///                           2- Pesquisar Dieta.                        ///\n");
  printf("///                           3- Atualizar dados da Deita.               ///\n");
  printf("///                           4. Excluir Dieta.                          ///\n");
  printf("///                           4. Voltar ao Menu anterior.                   ///\n");
	printf("///                       Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}


void dietaCadastro(void){
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
  printf("///                 = = = = = Cadastro de Dieta = = = = =                ///\n");
  printf("///                           &&&&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha com as informações do Paciente  *            ///\n");
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
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}

void dietaPesquisa(void){
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

void dietaAtualiza(void){
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


void dietaExclui(void){
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