
#include "valida.h"
#include "valida.c"

//
//// Menu do Nutricionista
//

char nutricionista(void){
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
  printf("///                            ##################                           ///\n");
  printf("///                  = = = = = Menu Nutricionista = = = = =                 ///\n");
  printf("///                            ##################                           ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                           1- Cadastrar Paciente.                        ///\n");
  printf("///                           2- Registrar dieta.                           ///\n");
  printf("///                           3- Pesquisar Paciente.                        ///\n");
  printf("///                           4- Atualizar Dados.                           ///\n");
  printf("///                           5- Excluir Paciente.                          ///\n");
  printf("///                           6. Voltar ao menu anterior.                   ///\n");
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
// Submenus nutricionista
//




//
//// Os Submenus do Registrar Dieta estão na biblioteca 'telaSubdieta.h'.
//

char nutriDieta(void){
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
  printf("///                             &&&&&&&&&&&&&&&&                            ///\n");
  printf("///                   = = = = = Registrar Dienta = = = = =                  ///\n");
  printf("///                             &&&&&&&&&&&&&&&&                            ///\n");
  printf("///                                                                         ///\n");
  printf("///*Digite o Número da reição que deseja acrescentar ou excluir um alimento*///\n");
  printf("///                                                                         ///\n");
  printf("///                             1- Café da manhã.                           ///\n");
  printf("///                             2- Lanche 1.                                ///\n");
  printf("///                             3- Almoço.                                  ///\n");
  printf("///                             4- Lanche 2.                                ///\n");
  printf("///                             5- Jantar.                                  ///\n");
  printf("///                             6- Lanche 3.                                ///\n");
  printf("///                             7- Voltar para o menu anterior.             ///\n");
	printf("///                          Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para contuniar...\n");
  getchar();
  return a;
}




void nutriAtualizar(void){
  char nome[51];
  char peso[8];
  char altura[5];
  char email[4];
  char tel[16];
  char atividade[9];
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                   ///\n");
  printf("///           = = = = = Atualização dos dados do Paciente = = = = =         ///\n");
  printf("///                     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                   ///\n");
  printf("///                                                                         ///\n");
  printf("///            *  Preencha com as informações atuais do Paciente  *         ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  printf("///       Nome: ");
  scanf("%[^\n]", nome);
  getchar();
  while(!validanome(nome)){
    printf("Nome inválido !!\n");
    printf("Informe o Nome novamente :");
    scanf("%[^\n]", nome);
    getchar();
  }
  printf("///       Peso Atual: ");
  scanf("%[^\n]", peso);
  getchar();
  while(!validapeso(peso)){
    printf("Peso inválido !!\n");
    printf("Informe o Peso novamente :");
    scanf("%[^\n]", peso);
    getchar();
  }
  printf("///       Altura: ");
  getchar();
  while(!validaaltura(altura)){
    printf("Altura inválida !!\n");
    printf("Informe a altura novamente :");
    scanf("%[^\n]", altura);
    getchar();
  }
  printf("///       E-mail: ");
  getchar();
  while(!validaemail(email)){
    printf("E-mail inválido !!\n");
    printf("Informe o E-mail novamente :");
    scanf("%[^\n]", email);
    getchar();
  }
  printf("///       Telefone: ");
  getchar();
  while(!validatel(tel)){
    printf("Telefone inválido !!\n");
    printf("Informe o Telefone novamente :");
    scanf("%[^\n]", tel);
    getchar();
  }
  printf("///       Nível de atividade física (Baixo, Moderado ou Alto): ");
  getchar();
  while(!validaatividade(atividade)){
    printf("Atividade informada erroneamente !!\n");
    printf("Informe o Nível de atividade física novamente :");
    scanf("%[^\n]", atividade);
    getchar();
  }
  printf("///                  0- Para voltar ao menu anterior:                       ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}


void nutriExclui(void){
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
  printf("///                            &&&&&&&&&&&&&&&&                             ///\n");
  printf("///                  = = = = = Excluir Paciente = = = = =                   ///\n");
  printf("///                            &&&&&&&&&&&&&&&&                             ///\n");
  printf("///                                                                         ///\n");
  printf("///             *  Digite o nome do Paciente que deseja EXCLUIR  *          ///\n");
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  printf("///   Nome do Paciente: ");
  scanf("%[^\n]", nome);
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
