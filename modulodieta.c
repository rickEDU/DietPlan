#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "teladieta.h"
#include "telapacient.h"



//
//// MODULO DE REGISTRO DE DIETA
//



void modulo_dieta(void){
  char opcao;
  do{
    opcao = teladieta();
    switch (opcao){
      case '1' : cdtDieta();
        break;
      case '2' : pesquisarDieta();
        break;
      case '3' : atualizarDieta();
        break;
      case '4' : excluirDieta();
        break;
      case '5' : cdtAlimento();
        break;
    }
  }while (opcao != '0');
}



/////////////////////////////////////////////////////////////////
void cdtDieta(void){
  Refeicao* al;

  al=teladietaCadastro();
  gravarDieta(al);
  free(al);
}

void gravarDieta(Refeicao* al){
  FILE* fp;

	fp = fopen("CONSULTA.dat", "ab");
	if (fp == NULL) {
		teladietaErro();
	}
	fwrite(al, sizeof(Refeicao), 1, fp);
	fclose(fp);
}

/////////////////////////////////////////////////////////////////

void pesquisarDieta(void) {
char* cpf;
Refeicao* rfc;

rfc = (Refeicao*)malloc(sizeof(Refeicao));

cpf = teladietaPesquisa();
rfc = buscarDieta(cpf);
nomepacienteAtivo(cpf);
exibeAlimento(rfc);

getchar();
free(cpf);
}


void nomepacienteAtivo(char* cpf) {
    FILE* fp;
    Paciente* pct;
    char nomePaciente[23];
    int tam;

    pct = (Paciente*) malloc(sizeof(Paciente));
    fp = fopen("PACIENTE.dat", "rb");
    while (fread(pct, sizeof(Paciente), 1, fp)) {
        if (strcmp(pct->cpf, cpf) == 0) {
            tam = strlen(pct->nome);
            strncpy(nomePaciente, pct->nome, tam);
             for (int i = tam; i < 22; i++) {
                 nomePaciente[i] = ' ';
             }
             nomePaciente[22] = '\0';
            printf("///  CPF: %-12s || Nome: %-24s || %-4s KGs ///\n\n", pct->cpf, nomePaciente,pct->peso);
        }
    }
    fclose(fp);
    free(pct);
}



Refeicao* buscarDieta(char* cpf) {
	FILE* fp;
	Refeicao* rfc;
  int achou;

	rfc = (Refeicao*) malloc(sizeof(Refeicao));
	fp = fopen("CONSULTA.dat", "rb");
	if (fp == NULL) {
		teladietaErro();
	}
  achou=0;
	while(fread(rfc, sizeof(Refeicao), 1, fp)) {
		if ((strcmp(rfc->cpfDig, cpf) == 0)  && (rfc->status == 1)) {
      achou =1;
      fclose(fp);
      return rfc;
		}
	}
  if (!achou) {
    
  }
	fclose(fp);
	return NULL;
}

void exibeAlimento(Refeicao* a){
Alimento*b;

b = (Alimento*)malloc(sizeof(Alimento));
if (a==NULL){
  printf("///      Não existem uma dieta cadastrada para esse paciente     ///\n");
}else{
  printf("Café da manhã:\n");
for (int i =0; i<4; i++){
    printf("Alimento %d:", i+1);    
    b = buscarAlimento(a->cafe[i]);
    printf("%s\n", b->nomeAlimento);
  }
printf("Almoço:\n");
for (int i =0; i<4; i++){
    printf("Alimento %d:", i+1);    
    b = buscarAlimento(a->almoco[i]);
    printf("%s\n", b->nomeAlimento);
  }
printf("Jantar:\n");
for (int i =0; i<4; i++){
    printf("Alimento %d:", i+1);    
    b = buscarAlimento(a->jantar[i]);
    printf("%s\n", b->nomeAlimento);
  }
free(b);
}


}

Alimento* buscarAlimento(char* a) {
	FILE* fp;
	Alimento* almt;

	almt = (Alimento*) malloc(sizeof(Alimento));
	fp = fopen("ALIMENTOS.dat", "rb");

	if (fp == NULL) {
		teladietaErro();
	}
	while(fread(almt, sizeof(Alimento), 1, fp)) {
		if (strcmp(almt->codAlimento, a)==0) {
      fclose(fp);
      return almt;
		}
	}
	fclose(fp);
  return NULL;
}




/////////////////////////////////////////////////////////////////

void atualizarDieta(void) {
	Refeicao* pc;
	char* cpf;

	cpf = teladietaAtualiza();
	pc = buscarDieta(cpf);
	if (pc == NULL) {
    	printf("\n\nDieta não encontrada!\n\n");
  	} else {
		  pc = teladietaCadastro();
		  strcpy(pc->cpfDig, cpf);
		  regravarDieta(pc);
		  free(pc);
	}
	free(cpf);
}

void regravarDieta(Refeicao* pc) {
  int achou;
	FILE* fp;
	Refeicao* pcLido;

	pcLido = (Refeicao*) malloc(sizeof(Refeicao));
	fp = fopen("CONSULTA.dat", "r+b");
	if (fp == NULL) {
		teladietaErro();
	}
  achou = 0;
	while(fread(pcLido, sizeof(Refeicao), 1, fp) && !achou) {
		if (strcmp(pcLido->cpfDig, pc->cpfDig) == 0) {
      achou = 1;
			fseek(fp, -1*sizeof(Refeicao), SEEK_CUR);
        	fwrite(pc, sizeof(Refeicao), 1, fp);
		}
	}
	fclose(fp);
	free(pcLido);
}

/////////////////////////////////////////////////////////////////

void excluirDieta(void) {
	Refeicao* pc;
	char *cpf;

	cpf = teladietaExclui();
	pc = (Refeicao*) malloc(sizeof(Refeicao));
	pc = buscarDieta(cpf);
	if (cpf == NULL) {
    	printf("\n\nDieta não encontrada!\n\n");
  	} else {
		  pc->status = 0;
		  regravarDieta(pc);
		  free(cpf);
	}
	free(pc);
}

/////////////////////////////////////////////////////////////////

void cdtAlimento(void){
  Alimento* alm;
  char b;

  alm=telaAcrescentaalimento();
  gravarAlimento(alm);
  b = teladietaAgain();
  while((b=='s') || (b=='S')){
    alm=telaAcrescentaalimento();
    gravarAlimento(alm);
    b = teladietaAgain();
  }

  free(alm);
}

void gravarAlimento(Alimento* alm){
  FILE* fp;

	fp = fopen("ALIMENTOS.dat", "ab");
	if (fp == NULL) {
		teladietaErro();
	}
	fwrite(alm, sizeof(Alimento), 1, fp);
	fclose(fp);
}