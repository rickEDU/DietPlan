#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "valida.h"


void listapacienteAtivo(char* nvl) {
    FILE* fp;
    Paciente* pct;
    char nomePaciente[23];
    int tam;

    pct = (Paciente*) malloc(sizeof(Paciente));
    fp = fopen("PACIENTE.dat", "rb");
    while (fread(pct, sizeof(Paciente), 1, fp)) {
        if (strcmp(pct->nivel, nvl) == 0) {
            tam = strlen(pct->nome);
            strncpy(nomePaciente, pct->nome, tam);
             for (int i = tam; i < 22; i++) {
                 nomePaciente[i] = ' ';
             }
             nomePaciente[22] = '\0';
            printf("///  || CPF: %-12s || Nome: %-24s || %-4s KGs|| ///\n", pct->cpf, nomePaciente,pct->peso);
        }
    }
    fclose(fp);
    free(pct);
}



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
  printf("///       1- Relat. dos pacientes por nível de atividade física.            ///\n");
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
  char* nvl;

  nvl = (char*)malloc(sizeof(char));
  system("clear");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("///                                                                         ///\n");
  printf("///                           Ministério da Saúde                           ///\n");
  printf("///                                                                         ///\n");
  printf("///            Projeto DietPlan: Sistema de Planejamento de dietas          ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("///          #####################################################          ///\n");
  printf("///  = = = = Relatório dos pacientes por nível de atividade física = = =    ///\n");
  printf("///          #####################################################          ///\n");
  printf("///                                                                         ///\n");
  printf("///  Digite o nível de atividade física que deseja pesquisar os pacientes . ///\n");
  printf("///  Digite (alto),(medio)ou(baixo) para pesquisar(somente letras minusculas):");
  scanf("%[^\n]", nvl);
  getchar();
  while(!validaAtividade(nvl)){
    scanf("%[^\n]", nvl);
    getchar();
  }
  listapacienteAtivo(nvl);
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para fechar o relatório...\n");
  getchar();
  free(nvl);
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
  printf("///                  ##################################                     ///\n");
  printf("///        = = = = = Relatório do Progresso do paciente = = = = =           ///\n");
  printf("///                  ##################################                     ///\n");
  printf("///                                                                         ///\n");
  printf("///              DIGITE O NOME DO PACIENTE QUE DESEJA VER O PROGRESSO       ///\n");
  printf("///       Nome do Paciente: ");

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
  printf("///                   Paciente x: NOME DO PACIENTE X                        ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para fechar o relatório...\n");
  getchar();
}



