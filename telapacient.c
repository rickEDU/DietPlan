#include "valida.h"
#include "valida.c"

//
//// Menus do Paciente
//
typedef struct paciente Paciente;

struct paciente{
  char nome[51];
  char peso[8];
  char altura[5];
  char email[4];
  char tel[16];
  char atividade[9];
};

char paciente(void){
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

//
//// Submenus Paciente
//

void pacienteCadastro(void){
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
  printf("///                                                                         ///\n");
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
  while(!validapeso(pc->peso)){
    printf("Peso inválido !!\n");
    printf("Informe o Peso novamente :");
    scanf("%[^\n]", pc->peso);
    getchar();
  }
  printf("///       Altura: ");
  getchar();
  while(!validaaltura(pc->altura)){
    printf("Altura inválida !!\n");
    printf("Informe a altura novamente :");
    scanf("%[^\n]", pc->altura);
    getchar();
  }
  printf("///       E-mail: ");
  getchar();
  while(!validaemail(pc->email)){
    printf("E-mail inválido !!\n");
    printf("Informe o E-mail novamente :");
    scanf("%[^\n]", pc->email);
    getchar();
  }
  printf("///       Telefone: ");
  getchar();
  while(!validatel(pc->tel)){
    printf("Telefone inválido !!\n");
    printf("Informe o Telefone novamente :");
    scanf("%[^\n]", pc->tel);
    getchar();
  }
  printf("///       Nível de atividade física (Baixo, Moderado ou Alto): ");
  getchar();
  while(!validaatividade(pc->atividade)){
    printf("Atividade informada erroneamente !!\n");
    printf("Informe o Nível de atividade física novamente :");
    scanf("%[^\n]", pc->atividade);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}

void pacientePesquisa(void){
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
  printf("///                   = = = = = Pesquisar Paciente = = = = =                ///\n");
  printf("///                             &&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                                                                         ///\n");
  printf("///             *  Digite o nome do Paciente que deseja pesquisar  *        ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  printf("///   Nome do Paciente: ");
  getchar();
  while(!validanome(nome)){
    printf("Nome inválido !!\n");
    printf("Informe o Nome novamente :");
    scanf("%[^\n]", nome);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}

void pacienteAtualiza(void){
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
  printf("///                        &&&&&&&&&&&&&&&&&&&&&&&&                         ///\n");
  printf("///              = = = = = Atualizar Dados Paciente = = = = =               ///\n");
  printf("///                        &&&&&&&&&&&&&&&&&&&&&&&&                         ///\n");
  printf("///                                                                         ///\n");
  printf("///        *  Para atualizar seus dados preencha os campo a seguir  *       ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
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
  while(!validapeso(pc->peso)){
    printf("Peso inválido !!\n");
    printf("Informe o Peso novamente :");
    scanf("%[^\n]", pc->peso);
    getchar();
  }
  printf("///       Altura: ");
  getchar();
  while(!validaaltura(pc->altura)){
    printf("Altura inválida !!\n");
    printf("Informe a altura novamente :");
    scanf("%[^\n]", pc->altura);
    getchar();
  }
  printf("///       E-mail: ");
  getchar();
  while(!validaemail(pc->email)){
    printf("E-mail inválido !!\n");
    printf("Informe o E-mail novamente :");
    scanf("%[^\n]", pc->email);
    getchar();
  }
  printf("///       Telefone: ");
  getchar();
  while(!validatel(pc->tel)){
    printf("Telefone inválido !!\n");
    printf("Informe o Telefone novamente :");
    scanf("%[^\n]", pc->tel);
    getchar();
  }
  printf("///       Nível de atividade física (Baixo, Moderado ou Alto): ");
  getchar();
  while(!validaatividade(pc->atividade)){
    printf("Atividade informada erroneamente !!\n");
    printf("Informe o Nível de atividade física novamente :");
    scanf("%[^\n]", pc->atividade);
    getchar();
  }
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}


void pacienteExclui(void){
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
  printf("///               = = = = = Excluir Conta do Paciente = = = = =             ///\n");
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
