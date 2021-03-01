
//
///// SUBMENUS DO REGISTRO DE Dieta
//


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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf("\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
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
  printf(">>> Tecle <ENTER> para voltar ao menu anterior...\n");
  getchar();
}