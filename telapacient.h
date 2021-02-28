
//
//// Menus do Paciente
//

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
  printf("///   #  Caso queira voltar ao menu anterior não digite nada e dê enter  #  ///\n");
  printf("///                                                                         ///\n");
  printf("///                    Café da manhã:                                       ///\n");
  printf("///                    Lanche 1:                                            ///\n");
  printf("///                    Almoço:                                              ///\n");
  printf("///                    Lanche 2:                                            ///\n");
  printf("///                    Jantar:                                              ///\n");
  printf("///                    Lanche 3:                                            ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf("///             *  Digite o Seu nome para cancelar sua conta  *             ///\n");
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
