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
void modulo_principal(void);

char nutricionista(void);
void modulo_nutricionista(void);

char paciente(void);
void modulo_paciente(void);

// Submenus Nutricionista
void nutriCadastro(void);

char nutriDieta(void);
void modulo_dieta(void);

char nutriCafe(void);
void modulo_cafe(void);
void nutriCafe_acrescenta(void);
void nutriCafe_exclui(void);

char nutriLanche1(void);
void modulo_lanche1(void);
void nutriLanche1_acrescenta(void);
void nutriLanche1_exclui(void);

char nutriAlmoco(void);
void modulo_almoco(void);
void nutriAlmoco_acrescenta(void);
void nutriAlmoco_exclui(void);

char nutriLanche2(void);
void modulo_lanche2(void);
void nutriLanche2_acrescenta(void);
void nutriLanche2_exclui(void);

char nutriJanta(void);
void modulo_janta(void);
void nutriJanta_acrescenta(void);
void nutriJanta_exclui(void);

char nutriLanche3(void);
void modulo_lanche3(void);
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
  do {
    opcao = menuPrincipal();
    switch (opcao){
      case '1' : modulo_nutricionista();
        break;
      case '2' : modulo_paciente();
        break;
      case '3' : resulmo();
        break;
    }
  } while (opcao != '0');
  return 0;
}

void modulo_principal(void) {
  char opcao;
  do {
    opcao = menuPrincipal();
    switch (opcao){
      case '1' : modulo_nutricionista();
        break;
      case '2' : modulo_paciente();
        break;
      case '3' : resulmo();
        break;
    }
  } while (opcao != '0');
}

void modulo_nutricionista(void){
  char opcao;
  do{
    opcao = nutricionista();
    switch (opcao){
      case '1' : nutriCadastro();
        break;
      case '2' : modulo_dieta();
        break;
      case '3' : nutriPesquisa();
        break;
      case '4' : nutriAtualizar();
        break;
      case '5' : nutriExclui();
        break;
      case '6' : modulo_principal();
        break;
    }
  }while(opcao != '0');
} 

void modulo_paciente(void){
  char opcao;
  do{
    opcao = paciente();
    switch (opcao){
      case '1' : pacienteConsulta();
        break;
      case '2' : pacienteAtualiza();
        break;
      case '3' : pacienteExclui();
        break;
      case '4' : modulo_principal();
        break;
    }
  }while (opcao != '0');
}

void modulo_dieta(void){
  char opcao;
  do{
    opcao = nutriDieta();
    switch (opcao){
      case '1' : modulo_cafe();
        break;
      case '2' : modulo_lanche1();
        break;
      case '3' : modulo_almoco();
        break;
      case '4' : modulo_lanche2();
        break;
      case '5' : modulo_janta();
        break;
      case '6' : modulo_lanche3();
        break;
      case '7' : modulo_nutricionista();
        break;
    }
  }while(opcao != '0');
}

void modulo_cafe(void){
  char opcao;
  do{
    opcao = nutriCafe();
    switch (opcao){
      case '1' : nutriCafe_acrescenta();
        break;
      case '2' : nutriCafe_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}

void modulo_lanche1(void){
  char opcao;
  do{
    opcao = nutriLanche1();
    switch (opcao){
      case '1' : nutriLanche1_acrescenta();
        break;
      case '2' : nutriLanche1_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}

void modulo_almoco(void){
  char opcao;
  do{
    opcao = nutriAlmoco();
    switch (opcao){
      case '1' : nutriAlmoco_acrescenta();
        break;
      case '2' : nutriAlmoco_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}

void modulo_lanche2(void){
  char opcao;
  do{
    opcao = nutriLanche2();
    switch (opcao){
      case '1' : nutriLanche2_acrescenta();
        break;
      case '2' : nutriLanche2_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}

void modulo_janta(void){
  char opcao;
  do{
    opcao = nutriJanta();
    switch (opcao){
      case '1' : nutriJanta_acrescenta();
        break;
      case '2' : nutriJanta_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}

void modulo_lanche3(void){
  char opcao;
  do{
    opcao = nutriLanche3();
    switch (opcao){
      case '1' : nutriLanche3_acrescenta();
        break;
      case '2' : nutriLanche3_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
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
  printf(">>> Tecle <ENTER> para voltar ao menu principal...\n");
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
  printf("///                            3- Sobre o projeto.                          ///\n");
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
  char alimento[51];
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
  printf("///         Nome do Alimento que será EXCLUIDO: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
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
  char alimento[51];
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
  printf("///         Nome do Alimento que será EXCLUIDO: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
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
  char alimento[51];
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
  printf("///         Nome do Alimento que será EXCLUIDO: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
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
  char alimento[51];
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
  printf("///         Nome do Alimento que será EXCLUIDO: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
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
  char alimento[51];
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
  printf("///         Nome do Alimento que será EXCLUIDO: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
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
  char alimento[51];
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
  printf("///         Nome do Alimento que será EXCLUIDO: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", alimento);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void nutriPesquisa(void){
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
  printf("///                             &&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                   = = = = = Pesquisar Paciente = = = = =                ///\n");
  printf("///                             &&&&&&&&&&&&&&&&&&                          ///\n");
  printf("///                                                                         ///\n");
  printf("///             *  Digite o nome do Paciente que deseja pesquisar  *        ///\n");
  printf("///              #  Caso queira voltar ao menu anterior Digite 0  #         ///\n");
  printf("///                                                                         ///\n");
  printf("///                    0- Para voltar ao menu anterior:                     ///\n");
  printf("///   Nome do Paciente: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ0]", paciente);
  getchar();
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
  printf("///                            &&&&&&&&&&&&&&&&                             ///\n");
  printf("///                  = = = = = Excluir Paciente = = = = =                   ///\n");
  printf("///                            &&&&&&&&&&&&&&&&                             ///\n");
  printf("///                                                                         ///\n");
  printf("///             *  Digite o nome do Paciente que deseja EXCLUIR  *          ///\n");
  printf("///            #  Caso queira voltar ao menu anterior Digite 0  #           ///\n");
  printf("///                                                                         ///\n");
  printf("///                    0- Para voltar ao menu anterior:                     ///\n");
  printf("///   Nome do Paciente: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ0]", paciente);
  getchar();
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
  printf("///             *  Digite o Seu nome para cancelar sua conta  *             ///\n");
  printf("///            #  Caso queira voltar ao menu anterior Digite 0  #           ///\n");
  printf("///                                                                         ///\n");
  printf("///                    0- Para voltar ao menu anterior:                     ///\n");
  printf("///   Nome do Paciente: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ0]", paciente);
  getchar();
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}