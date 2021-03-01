

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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}

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
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
