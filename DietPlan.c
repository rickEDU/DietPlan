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
void menuPrincipal(void);
void nutricionista(void);
void paciente(void);
void nutriCadastro(void);
void nutriDieta(void);
void nutriCafe(void);
void nutriCafe_acrescenta(void);
void nutriCafe_exclui(void);
void nutriLanche1(void);
void nutriLanche1_acrescenta(void);
void nutriLanche1_exclui(void);
void nutriPesquisa(void);
void nutriAtualizar(void);
void nutriExclui(void);

int main(void) {
  resulmo();
  menuPrincipal();
  nutricionista();
  paciente();
  nutriCadastro();
  nutriDieta();
  nutriCafe();
  nutriCafe_acrescenta();
  nutriCafe_exclui();
  nutriLanche1();
  nutriLanche1_acrescenta();
  nutriLanche1_exclui();
  nutriPesquisa();
  nutriAtualizar();
  nutriExclui();

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



void menuPrincipal(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
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
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void nutricionista(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
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
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void paciente(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
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
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}


//
// Submenus nutricionista
//


void nutriCadastro(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
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
    printf("///                  Nome:                                                  ///\n");
    printf("///                  Peso Atual:                                            ///\n");
    printf("///                  Altura:                                                ///\n");
    printf("///                  IMC:                                                   ///\n");
    printf("///                  Nível de atividade física (Baixo, Moderado ou Alto):   ///\n");
    printf("///                  Quantidade de calorias diarias:                        ///\n");
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void nutriDieta(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
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
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void nutriCafe(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
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
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void nutriCafe_acrescenta(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
    printf("///                                                                         ///\n");
    printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("///                 &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                ///\n");
    printf("///       = = = = = Acrescentando aliemento no Café da manhã = = = = =      ///\n");
    printf("///                 &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                ///\n");
    printf("///                                                                         ///\n");
    printf("///                *  Preencha os dados do alimento pedidos  *              ///\n");
    printf("///                                                                         ///\n");
    printf("///                   Nome do Alimento que será acrescentado:               ///\n");
    printf("///                   Quantidade de calorias do alimento:                   ///\n");
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
    printf("///                         Ministério da Saúde                             ///\n");
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

void nutriLanche1(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
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
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void nutriLanche1_acrescenta(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
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
    printf("///                   Nome do Alimento que será acrescentado:               ///\n");
    printf("///                   Quantidade de calorias do alimento:                   ///\n");
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
    printf("///                         Ministério da Saúde                             ///\n");
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

void nutriPesquisa(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
    printf("///                                                                         ///\n");
    printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("///                             &&&&&&&&&&&&&&&&&&                         ///\n");
    printf("///                   = = = = = Pesquisar Paciente = = = = =               ///\n");
    printf("///                             &&&&&&&&&&&&&&&&&&                         ///\n");
    printf("///                                                                         ///\n");
    printf("///             *  Digite o nome do Paciente que deseja pesquisar  *        ///\n");
    printf("///                                                                         ///\n");
    printf("///                    Nome do Paciente:                                    ///\n");
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void nutriAtualizar(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
    printf("///                                                                         ///\n");
    printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("///                     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                   ///\n");
    printf("///           = = = = = Atualização dos dados do Paciente = = = = =         ///\n");
    printf("///                     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            *  Preencha com as informações atuais do Paciente  *         ///\n");
    printf("///                                                                         ///\n");
    printf("///                  Nome:                                                  ///\n");
    printf("///                  Peso Atual:                                            ///\n");
    printf("///                  Altura:                                                ///\n");
    printf("///                  IMC:                                                   ///\n");
    printf("///                  Nível de atividade física (Baixo, Moderado ou Alto):   ///\n");
    printf("///                  Quantidade de calorias diarias:                        ///\n");
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
    printf("///                         Ministério da Saúde                             ///\n");
    printf("///                                                                         ///\n");
    printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("///                            &&&&&&&&&&&&&&&&                             ///\n");
    printf("///                  = = = = = Excluir Paciente = = = = =                   ///\n");
    printf("///                            &&&&&&&&&&&&&&&&                             ///\n");
    printf("///                                                                         ///\n");
    printf("///             *  Digite o nome do Paciente que deseja EXCLUIR  *          ///\n");
    printf("///                                                                         ///\n");
    printf("///                    Nome do Paciente:                                    ///\n");
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}

