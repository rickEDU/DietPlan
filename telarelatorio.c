
char relatorio(void){
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
  printf("///                    = = = = = Menu Relatório = = = = =                   ///\n");
  printf("///                            ##################                           ///\n");
  printf("///                                                                         ///\n");
  printf("///    *  Das opções abaixo digite o número do menu que deseja acessar  *   ///\n");
  printf("///                                                                         ///\n");
  printf("///       1- Relat. Pacientes registrados.                                  ///\n");
  printf("///       2- Relat. Progresso do Paciente.                                  ///\n");
  printf("///       3- Relat. dos Pacientes que desistiram do programa de dietas      ///\n");
  printf("///       4- Voltar para o Menu Principal.                                  ///\n");
	printf("///                        Escolha a opção desejada: ");
	scanf("%c", &a);
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  return a;
}



void relatorioRegistro(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                  ##################################                     ///\n");
  printf("///        = = = = = Relatório do Progresso do paciente = = = = =           ///\n");
  printf("///                  ##################################                     ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Paciente x: NOME DO PACIENTE X                        ///\n");
  printf("///                   Paciente y: NOME DO PACIENTE y                        ///\n");
  printf("///                   Paciente z: NOME DO PACIENTE Z                        ///\n");
  printf("///                   Pacient... : NOME DO PACIENT...                       ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para fechar o relatório...\n");
  getchar();
}

void relatorioProgresso(void){
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
  printf("///                  ###################################                    ///\n");
  printf("///        = = = = = Relatório dos pacientes Registrados = = = = =          ///\n");
  printf("///                  ###################################                    ///\n");
  printf("///                                                                         ///\n");
  printf("///              DIGITE O NOME DO PACIENTE QUE DESEJA VER O PROGRESSO       ///\n");
  printf("///       Nome do Paciente: ");
  scanf("%[^\n]", nome);
  getchar();
  while(!validanome(nome)){
    printf("Nome inválido !!\n");
    printf("Informe o Nome novamente :");
    scanf("%[^\n]", nome);
    getchar();
  }
  printf("///                       Peso inicial do paciente: xxx kg                  ///\n");
  printf("///                       Peso atual do paciente: yyy kg                    ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para fechar o relatório...\n");
  getchar();
}

void relatorioDesistencia(void){
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///                  ###################################                    ///\n");
  printf("///        = = = = = Relatório dos pacientes desistêntes = = = = =          ///\n");
  printf("///                  ###################################                    ///\n");
  printf("///                                                                         ///\n");
  printf("///                   Paciente x: NOME DO PACIENTE X                           ///\n");
  printf("///                   Paciente y: NOME DO PACIENTE y                        ///\n");
  printf("///                   Paciente z: NOME DO PACIENTE Z                        ///\n");
  printf("///                   Pacient... : NOME DO PACIENT...                       ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para fechar o relatório...\n");
  getchar();
}