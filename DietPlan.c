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
void coordenador(void);
void paciente(void);
void nutriCadastro(void);
void nutriPesquisa(void);
void nutriAtualizar(void);
void nutriExclui(void);

int main(void) {
  resulmo();
  menuPrincipal();
  nutricionista();
  coordenador();
  paciente();
  nutriCadastro();
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
    printf("///                            2- Coordenador.                              ///\n");
    printf("///                            3- Paciente.                                 ///\n");
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
    printf("///                           2- Pesquisar Paciente                         ///\n");
    printf("///                           3- Atualizar Dados.                           ///\n");
    printf("///                           4- Excluir Paciente.                          ///\n");
    printf("///                           5. Voltar ao menu anterior                    ///\n");
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void coordenador(void){
  system("clear");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("///                                                                         ///\n");
    printf("///                         Ministério da Saúde                             ///\n");
    printf("///                                                                         ///\n");
    printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
    printf("///                                                                         ///\n");
    printf("*******************************************************************************\n");
    printf("///                            ################                             ///\n");
    printf("///                  = = = = = Menu Coordenador = = = = =                   ///\n");
    printf("///                            ################                             ///\n");
    printf("///                                                                         ///\n");
    printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
    printf("///                                                                         ///\n");
    printf("///                           1- Cadastrar Paciente.                        ///\n");
    printf("///                           2- Pesquisar Paciente.                        ///\n");
    printf("///                           3- Atualizar Dados.                           ///\n");
    printf("///                           4- Excluir Paciente.                          ///\n");
    printf("///                           5. Voltar ao menu anterior                    ///\n");
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
    printf("///                              &&&&&&&&&&&&&&&&&&&&                       ///\n");
    printf("///                    = = = = = Cadastro de Paciente = = = = =             ///\n");
    printf("///                              &&&&&&&&&&&&&&&&&&&&                       ///\n");
    printf("///                                                                         ///\n");
    printf("///                *  Preencha com as informações do Paciente  *            ///\n");
    printf("///                                                                         ///\n");
    printf("///                            Nome:                                        ///\n");
    printf("///                            Telefone:                                    ///\n");
    printf("///                            E-mail:                                      ///\n");
    printf("///                            Peso Atual:                                  ///\n");
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
    printf("///                              &&&&&&&&&&&&&&&&&&                         ///\n");
    printf("///                    = = = = = Pesquisar Paciente = = = = =               ///\n");
    printf("///                              &&&&&&&&&&&&&&&&&&                         ///\n");
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
    printf("///                            Nome:                                        ///\n");
    printf("///                            Telefone:                                    ///\n");
    printf("///                            E-mail:                                      ///\n");
    printf("///                            Peso Atual:                                  ///\n");
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
    printf("///                                &&&&&&&&&&&&&&&&                         ///\n");
    printf("///                      = = = = = Excluir Paciente = = = = =               ///\n");
    printf("///                                &&&&&&&&&&&&&&&&                         ///\n");
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