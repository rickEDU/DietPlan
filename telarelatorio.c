#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "telarelatorio.h"
#include "telapacient.h"
#include "valida.h"


void listapacienteAtivo(char* nvl) {
    FILE* fp;
    Paciente* pct;
    char nomePaciente[24];
    int tam, achou;

    pct = (Paciente*) malloc(sizeof(Paciente));
    fp = fopen("PACIENTE.dat", "rb");
    achou = 0;
    while (fread(pct, sizeof(Paciente), 1, fp)) {
      if ((strcmp(pct->nivel, nvl) == 0) && (pct->status !=0)) {
        achou = 1;
        tam = strlen(pct->nome); 
        if (tam>23) // Limitação de tamanho da var nomePaciente
          tam = 23;
        strncpy(nomePaciente, pct->nome, tam);     
          for (int i = tam; i < 22; i++) {
              nomePaciente[i] = ' ';
          }            
          nomePaciente[23] = '\0';
        printf("///  || CPF: %-12s || Nome: %-24s || %-4s KGs|| ///\n", pct->cpf, nomePaciente,pct->peso);
      }
    }
    if (!achou) {
      printf("///      Não existem pacientes cadastrados com esse néivel de atividade     ///\n");
    }
    fclose(fp);
    free(pct);
    printf("fim da listapacienteAtivo()\n");
}

void listapacienteNEG(void) {
    FILE* fp;
    Paciente* pct;
    char nomePaciente[31];
    int tam, achou;

    pct = (Paciente*) malloc(sizeof(Paciente));
    fp = fopen("PACIENTE.dat", "rb");
    achou=0;
    while (fread(pct, sizeof(Paciente), 1, fp)) {
        if (pct->status == 0) {
        achou =1;
          tam = strlen(pct->nome);
          strncpy(nomePaciente, pct->nome, tam);
           for (int i = tam; i < 22; i++) {
               nomePaciente[i] = ' ';
           }
           nomePaciente[22] = '\0';
          printf("///  || CPF: %-12s || Nome: %-24s || %-4s KGs|| ///\n", pct->cpf, nomePaciente,pct->peso);
        }
    }
    if (!achou) {
      printf("///           Não desistiram pacientes até o momento do DeitPlan            ///\n");
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
  printf("///       0- Voltar para o Menu Principal.                                  ///\n");
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
  printf("///  Digite (alto),(medio)ou(baixo)                                         ///\n///  para pesquisar(somente letras minúsculas):");
  scanf("%[^\n]", nvl);
  getchar();
  while(!validaAtividade(nvl)){
    scanf("%[^\n]", nvl);
    getchar();
  }
  listapacienteAtivo(nvl);
  printf("voltou da listapacienteAtivo \n");
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
  //char nome[51];
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
  listapacienteNEG();
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf(">>> Tecle <ENTER> para fechar o relatório...\n");
  getchar();
}



