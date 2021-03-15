
//
//// TELAS dos Menus e Submenus
//

//
//// Tela sobre nós
//

void resulmo(void) {
  system("clear");
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


//
///// Menu principal
//


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
  printf("///                            3- Relatórios do Projeto.                    ///\n");
  printf("///                            4- Sobre o projeto.                          ///\n");
	printf("///                       Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}
