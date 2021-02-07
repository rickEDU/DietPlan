///////////////////////////////////////////////////////////////////////////////
///                         Ministério da Saúde                             ///
///                 Centro de Saúde Pública e bem estar                     ///
///                Departamento de Computação e Tecnologia                  ///
///               Projeto Sistema de Planejamento de dietas                 ///
///                  Developed by  @rickEDU - Jan, 2021                     ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void resulmo(void);

char menuPrincipal(void);

char nutricionista(void);
char paciente(void);
// Submenus Nutricionista
void nutriCadastro(void);

char nutriDieta(void);

char nutriCafe(void);
void nutriCafe_acrescenta(void);
void nutriCafe_exclui(void);

char nutriLanche1(void);
void nutriLanche1_acrescenta(void);
void nutriLanche1_exclui(void);

char nutriAlmoco(void);
void nutriAlmoco_acrescenta(void);
void nutriAlmoco_exclui(void);

char nutriLanche2(void);
void nutriLanche2_acrescenta(void);
void nutriLanche2_exclui(void);

char nutriJanta(void);
void nutriJanta_acrescenta(void);
void nutriJanta_exclui(void);

char nutriLanche3(void);
void nutriLanche3_acrescenta(void);
void nutriLanche3_exclui(void);

void nutriPesquisa(void);

void nutriAtualizar(void);

void nutriExclui(void);
// Submenus Paciente
void pacienteConsulta(void);
void pacienteAtualiza(void);
void pacienteExclui(void);


int main(void) {
  char opcao;
    resulmo();
    opcao = menuPrincipal();

    opcao = nutricionista();
    opcao = paciente();

    nutriCadastro();

    opcao = nutriDieta();

    opcao = nutriCafe();
    nutriCafe_acrescenta();
    nutriCafe_exclui();

    opcao = nutriLanche1();
    nutriLanche1_acrescenta();
    nutriLanche1_exclui();

    opcao = nutriAlmoco();
    nutriAlmoco_acrescenta();
    nutriAlmoco_exclui();

    opcao = nutriLanche2();
    nutriLanche2_acrescenta();
    nutriLanche2_exclui();

    opcao = nutriJanta();
    nutriJanta_acrescenta();
    nutriJanta_exclui();

    opcao = nutriLanche3();
    nutriLanche3_acrescenta();
    nutriLanche3_exclui();

    nutriPesquisa();

    nutriAtualizar();

    nutriExclui();

    pacienteConsulta();
    pacienteAtualiza();
    pacienteExclui();

  return 0;
}


void resulmo(void) {
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                         Ministério da Saúde                             ///\n");
  printf("///                 Centro de Saúde Pública e bem estar                     ///\n");
  printf("///               Departamento de Computação e Tecnologia                   ///\n");
  printf("///           Projeto DietPlan: Sistema de Planejamento de dietas           ///\n");
  printf("///                Developed by  @rickEDU - Jan, 2021                       ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///     = = = = = DietPlan: Sistema de Planejamento de dietas = = = = =     ///\n");
  printf("///                                                                         ///\n");
  printf("///   Projeto com o intúito de diminuir as taxas de obesidade no Brasil,    ///\n");
  printf("///  por meio da melhoria da alimentação dos brasileiros com a ajuda de     ///\n");
  printf("///  nutricionistas auxiliados por um programa de computador, facilitando   ///\n");
  printf("///  o acesso a educação alimentar a população mais carente.                ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}



char menuPrincipal(void){
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
  printf("///                            ##############                               ///\n");
  printf("///                  = = = = = Menu principal = = = = =                     ///\n");
  printf("///                            ##############                               ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                            1- Nutricionista.                            ///\n");
  printf("///                            2- Paciente.                                 ///\n");
	printf("///                       Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}

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
  printf("///                           1- Consultar Dieta.                           ///\n");
  printf("///                           2- Atualizar Dados.                           ///\n");
  printf("///                           3- Excluir Conta.                             ///\n");
  printf("///                           4. Voltar ao menu anterior                    ///\n");
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


void nutriCadastro(void){
  char nome[51];
  char peso[4];
  char altura[5];
  char imc[4];
  char atividade[9];
  char calorias[6];
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
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
  getchar();
  printf("///       Peso Atual: ");
	scanf("%[0-9,.]", peso);
  getchar();
  printf("///       Altura: ");
	scanf("%[0-9,.]", altura);
  getchar();
  printf("///       IMC: ");
	scanf("%[0-9,.]", imc);
  getchar();
  printf("///       Nível de atividade física (Baixo, Moderado ou Alto): ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", altura);
  getchar();
  printf("///       Quantidade de calorias diarias: ");
	scanf("%[0-9,.]", calorias);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}


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
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}

char nutriCafe(void){
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
  printf("///                             #############                               ///\n");
  printf("///                   = = = = = Café da manhã = = = = =                     ///\n");
  printf("///                             #############                               ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                         1- Acrescentar alimento.                        ///\n");
  printf("///                         2- Excluir alimento.                            ///\n");
  printf("///                         3- Voltar para o menu anterior.                 ///\n");
	printf("///                       Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}

void nutriCafe_acrescenta(void){
  char alimento[51];
  char alimentCalorias[6];
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                 &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                ///\n");
  printf("///       = = = = = Acrescentando aliemento no Café da manhã = = = = =      ///\n");
  printf("///                 &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///  Nome do Alimento que será acrescentado: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
  printf("///  Quantidade de calorias do alimento: ");
  scanf("%[0-9,.]", alimentCalorias);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void nutriCafe_exclui(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                    ///\n");
  printf("///       = = = = = Excluindo aliemento no Café da manhã = = = = =          ///\n");
  printf("///                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                    ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Nome do Alimento que será EXCLUIDO:                   ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char nutriLanche1(void){
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
  printf("///                                 ########                                ///\n");
  printf("///                       = = = = = Lanche 1 = = = = =                      ///\n");
  printf("///                                 ########                                ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                         1- Acrescentar alimento.                        ///\n");
  printf("///                         2- Excluir alimento.                            ///\n");
  printf("///                         3- Voltar para o menu anterior.                 ///\n");
	printf("///                         Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}

void nutriLanche1_acrescenta(void){
  char alimento[51];
  char alimentCalorias[6];
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                  ///\n");
  printf("///          = = = = = Acrescentando aliemento no Lanche 1 = = = = =        ///\n");
  printf("///                    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                  ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///  Nome do Alimento que será acrescentado: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
  printf("///  Quantidade de calorias do alimento: ");
  scanf("%[0-9,.]", alimentCalorias);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void nutriLanche1_exclui(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                     ///\n");
  printf("///           = = = = = Excluindo aliemento no Lanche 1 = = = = =           ///\n");
  printf("///                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                     ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Nome do Alimento que será EXCLUIDO:                   ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char nutriAlmoco(void){
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
  printf("///                                 ######                                  ///\n");
  printf("///                       = = = = = Almoço = = = = =                        ///\n");
  printf("///                                 ######                                  ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                         1- Acrescentar alimento.                        ///\n");
  printf("///                         2- Excluir alimento.                            ///\n");
  printf("///                         3- Voltar para o menu anterior.                 ///\n");
	printf("///                         Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}

void nutriAlmoco_acrescenta(void){
  char alimento[51];
  char alimentCalorias[6];
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                    ///\n");
  printf("///          = = = = = Acrescentando aliemento no Almoço = = = = =          ///\n");
  printf("///                    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                    ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///  Nome do Alimento que será acrescentado: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
  printf("///  Quantidade de calorias do alimento: ");
  scanf("%[0-9,.]", alimentCalorias);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void nutriAlmoco_exclui(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@                       ///\n");
  printf("///           = = = = = Excluindo aliemento no Almoço = = = = =             ///\n");
  printf("///                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@                       ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Nome do Alimento que será EXCLUIDO:                   ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char nutriLanche2(void){
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
  printf("///                                 ########                                ///\n");
  printf("///                       = = = = = Lanche 2 = = = = =                      ///\n");
  printf("///                                 ########                                ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                         1- Acrescentar alimento.                        ///\n");
  printf("///                         2- Excluir alimento.                            ///\n");
  printf("///                         3- Voltar para o menu anterior.                 ///\n");
	printf("///                         Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}

void nutriLanche2_acrescenta(void){
  char alimento[51];
  char alimentCalorias[6];
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                  ///\n");
  printf("///          = = = = = Acrescentando aliemento no Lanche 2 = = = = =        ///\n");
  printf("///                    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                  ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///  Nome do Alimento que será acrescentado: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
  printf("///  Quantidade de calorias do alimento: ");
  scanf("%[0-9,.]", alimentCalorias);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void nutriLanche2_exclui(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                     ///\n");
  printf("///           = = = = = Excluindo aliemento no Lanche 2 = = = = =           ///\n");
  printf("///                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                     ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Nome do Alimento que será EXCLUIDO:                   ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char nutriJanta(void){
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
  printf("///                                    ######                               ///\n");
  printf("///                          = = = = = Jantar = = = = =                     ///\n");
  printf("///                                    ######                               ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                         1- Acrescentar alimento.                        ///\n");
  printf("///                         2- Excluir alimento.                            ///\n");
  printf("///                         3- Voltar para o menu anterior.                 ///\n");
	printf("///                         Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}

void nutriJanta_acrescenta(void){
  char alimento[51];
  char alimentCalorias[6];
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                    ///\n");
  printf("///          = = = = = Acrescentando aliemento no Jantar = = = = =          ///\n");
  printf("///                    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                    ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///  Nome do Alimento que será acrescentado: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
  printf("///  Quantidade de calorias do alimento: ");
  scanf("%[0-9,.]", alimentCalorias);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void nutriJanta_exclui(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@                       ///\n");
  printf("///           = = = = = Excluindo aliemento no Jantar = = = = =             ///\n");
  printf("///                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@                       ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Nome do Alimento que será EXCLUIDO:                   ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char nutriLanche3(void){
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
  printf("///                                 ########                                ///\n");
  printf("///                       = = = = = Lanche 3 = = = = =                      ///\n");
  printf("///                                 ########                                ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///                         1- Acrescentar alimento.                        ///\n");
  printf("///                         2- Excluir alimento.                            ///\n");
  printf("///                         3- Voltar para o menu anterior.                 ///\n");
	printf("///                         Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}

void nutriLanche3_acrescenta(void){
  char alimento[51];
  char alimentCalorias[6];
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                  ///\n");
  printf("///          = = = = = Acrescentando aliemento no Lanche 3 = = = = =        ///\n");
  printf("///                    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                  ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///  Nome do Alimento que será acrescentado: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
  printf("///  Quantidade de calorias do alimento: ");
  scanf("%[0-9,.]", alimentCalorias);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void nutriLanche3_exclui(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                     ///\n");
  printf("///           = = = = = Excluindo aliemento no Lanche 3 = = = = =           ///\n");
  printf("///                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                     ///\n");
  printf("///                                                                         ///\n");
  printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Nome do Alimento que será EXCLUIDO:                   ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void nutriPesquisa(void){
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
  printf("///              #  Caso queira voltar ao menu anterior Digite 0  #         ///\n");
  printf("///                                                                         ///\n");
  printf("///                    Nome do Paciente:                                    ///\n");
  printf("///                    0- Para voltar ao menu anterior:                     ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void nutriAtualizar(void){
  char nome[51];
  char peso[4];
  char altura[5];
  char imc[4];
  char atividade[9];
  char calorias[6];
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
  printf("///            #  Caso queira voltar ao menu anterior Digite 0  #           ///\n");
  printf("///                                                                         ///\n");
  printf("///       Nome: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
  getchar();
  printf("///       Peso Atual: ");
	scanf("%[0-9,.]", peso);
  getchar();
  printf("///       Altura: ");
	scanf("%[0-9,.]", altura);
  getchar();
  printf("///       IMC: ");
	scanf("%[0-9,.]", imc);
  getchar();
  printf("///       Nível de atividade física (Baixo, Moderado ou Alto): ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", altura);
  getchar();
  printf("///       Quantidade de calorias diarias: ");
	scanf("%[0-9,.]", calorias);
  getchar();
  printf("///                  0- Para voltar ao menu anterior:                       ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void nutriExclui(void){
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
  printf("///            #  Caso queira voltar ao menu anterior Digite 0  #           ///\n");
  printf("///                                                                         ///\n");
  printf("///                    Nome do Paciente:                                    ///\n");
  printf("///                    0- Para voltar ao menu anterior:                     ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

//
//// Submenus Paciente
//

void pacienteConsulta(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                             &&&&&&&&&&&&&&&                             ///\n");
  printf("///                   = = = = = Consultar Dieta = = = = =                   ///\n");
  printf("///                             &&&&&&&&&&&&&&&                             ///\n");
  printf("///                                                                         ///\n");
  printf("///            *  Sua Dieta para essa semana é a escrita abaixo  *          ///\n");
  printf("///            #  Caso queira voltar ao menu anterior Digite 0  #           ///\n");
  printf("///                                                                         ///\n");
  printf("///                    Café da manhã:                                       ///\n");
  printf("///                    Lanche 1:                                            ///\n");
  printf("///                    Almoço:                                              ///\n");
  printf("///                    Lanche 2:                                            ///\n");
  printf("///                    Jantar:                                              ///\n");
  printf("///                    Lanche 3:                                            ///\n");
  printf("///                    0- Para voltar ao menu anterior:                     ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void pacienteAtualiza(void){
  char nome[51];
  char peso[4];
  char altura[5];
  char imc[4];
  char atividade[9];
  char calorias[6];
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
  printf("///            #  Caso queira voltar ao menu anterior Digite 0  #           ///\n");
  printf("///                                                                         ///\n");
  printf("///       Nome: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
  getchar();
  printf("///       Peso Atual: ");
	scanf("%[0-9,.]", peso);
  getchar();
  printf("///       Altura: ");
	scanf("%[0-9,.]", altura);
  getchar();
  printf("///       IMC: ");
	scanf("%[0-9,.]", imc);
  getchar();
  printf("///       Nível de atividade física (Baixo, Moderado ou Alto): ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", altura);
  getchar();
  printf("///       Quantidade de calorias diarias: ");
	scanf("%[0-9,.]", calorias);
  getchar();
  printf("///                  0- Para voltar ao menu anterior:                       ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void pacienteExclui(void){
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
  printf("///             *  Digite o Seu nome para cancelar sua conta  *             ///\n");
  printf("///            #  Caso queira voltar ao menu anterior Digite 0  #           ///\n");
  printf("///                                                                         ///\n");
  printf("///                    Digite seu nome:                                     ///\n");
  printf("///                    0- Para voltar ao menu anterior:                     ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

