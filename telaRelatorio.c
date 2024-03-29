#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "telaRelatorio.h"
#include "telaPacient.h"
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


void listapacienteATV(void) {
    FILE* fp;
    Paciente* pct;
    char nomePaciente[31];
    int tam, achou;

    pct = (Paciente*) malloc(sizeof(Paciente));
    fp = fopen("PACIENTE.dat", "rb");
    achou=0;
    printf("\n                          Paciente(s) :\n");
    while (fread(pct, sizeof(Paciente), 1, fp)) {
        if (pct->status == 1) {
          
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
      printf("///         Não que desistiram pacientes até o momento do DeitPlan           ///\n");
    }
    fclose(fp);
    free(pct);
}


void listapacienteNEG(void) {
    FILE* fp;
    Paciente* pct;
    char nomePaciente[31];
    int tam, achou;

    pct = (Paciente*) malloc(sizeof(Paciente));
    fp = fopen("PACIENTE.dat", "rb");
    achou=0;    
    printf("\n                          Paciente(s) :\n");
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
  printf("///       2- Relat. dos Pacientes que participam do DietPlan.               ///\n");
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
  printf("///       = = = = = Relatório dos pacientes Participantes = = = = =          ///\n");
  printf("///                  ###################################                    ///\n");
  printf("///                                                                         ///\n");
  listapacienteATV();
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



