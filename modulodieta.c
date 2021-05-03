#include "teladieta.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>






//
//// MODULO DE REGISTRO DE DIETA
//
void pesquisarDieta(void);
Refeicao* buscarDieta(char*);
void exibirDieta(Refeicao*);
Alimento* buscarAlimento(int*);
void exibirAL1(Alimento*);
void exibirAL2(Alimento*);
void atualizarDieta(void);
void regravarDieta(Refeicao*);
void excluirDieta(void);


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
      case '6' : main();
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
Refeicao* rfc;
Alimento* almt1;
Alimento* almt2;
Alimento* almt3;
Alimento* almt4;
Alimento* almt5;
Alimento* almt6;
Alimento* almt7;
Alimento* almt8;
Alimento* almt9;
Alimento* almt10;
Alimento* almt11;
Alimento* almt12;
char* cpf;
int* AL1;
int* AL2;
int* AL3;
int* AL4;
int* AL5;
int* AL6;
int* AL7;
int* AL8;
int* AL9;
int* AL10;
int* AL11;
int* AL12;
AL1=(int*)malloc(sizeof(int));
AL2=(int*)malloc(sizeof(int));
AL3=(int*)malloc(sizeof(int));
AL4=(int*)malloc(sizeof(int));
AL5=(int*)malloc(sizeof(int));
AL6=(int*)malloc(sizeof(int));
AL7=(int*)malloc(sizeof(int));
AL8=(int*)malloc(sizeof(int));
AL9=(int*)malloc(sizeof(int));
AL10=(int*)malloc(sizeof(int));
AL11=(int*)malloc(sizeof(int));
AL12=(int*)malloc(sizeof(int));

//Deus que me perdoe por esse código seboso

cpf = teladietaPesquisa();
rfc = buscarDieta(cpf);
if (rfc==NULL){
  printf("/// Dieta inexistente /// \n");
  getchar();
  } else{
      AL1 = rfc->alim1;
      AL2 = rfc->alim2;
      AL3 = rfc->alim3;
      AL4 = rfc->alim4;
      AL5 = rfc->alim5;
      AL6 = rfc->alim6;
      AL7 = rfc->alim7;
      AL8 = rfc->alim8;
      AL9 = rfc->alim9;
      AL10 = rfc->alim10;
      AL11 = rfc->alim11;
      AL12 = rfc->alim12;
      almt1 = buscarAlimento(AL1);
      almt2 = buscarAlimento(AL2);
      almt3 = buscarAlimento(AL3);
      almt4 = buscarAlimento(AL4);
      almt5 = buscarAlimento(AL5);
      almt6 = buscarAlimento(AL6);
      almt7 = buscarAlimento(AL7);
      almt8 = buscarAlimento(AL8);
      almt9 = buscarAlimento(AL9);
      almt10 = buscarAlimento(AL10);
      almt11 = buscarAlimento(AL11);
      almt12 = buscarAlimento(AL12);
      printf("Café da manhã: \n");
      exibirAL1(almt1);
      exibirAL1(almt2);
      exibirAL1(almt3);
      exibirAL1(almt4);
      printf("Almoço: \n");
      exibirAL1(almt5);
      exibirAL1(almt6);
      exibirAL1(almt7);
      exibirAL1(almt8);
      printf("Jantar: \n");
      exibirAL1(almt9);
      exibirAL1(almt10);
      exibirAL1(almt11);
      exibirAL2(almt12);
      free(cpf);
      free(rfc);
      free(almt1);
      free(almt2);
      free(almt3);
      free(almt4);
      free(almt5);
      free(almt6);
      free(almt7);
      free(almt8);
      free(almt9);
      free(almt10);
      free(almt11);
      free(almt12);
  }

}





Refeicao* buscarDieta(char* cpf) {
	FILE* fp;
	Refeicao* rfc;

	rfc = (Refeicao*) malloc(sizeof(Refeicao));
	fp = fopen("CONSULTA.dat", "rb");
	if (fp == NULL) {
		teladietaErro();
	}
	while(fread(rfc, sizeof(Refeicao), 1, fp)) {
		if ((strcmp(rfc->cpfDig, cpf) == 0)  && (rfc->status == true)) {
      fclose(fp);
      return rfc;
		}
	}
	fclose(fp);
	return NULL;
}



Alimento* buscarAlimento(int* AL) {
	FILE* fp;
	Alimento* almt;

	almt = (Alimento*) malloc(sizeof(Alimento));
	fp = fopen("ALIMENTOS.dat", "rb");
	if (fp == NULL) {
		telapacienteErro();
	}
	while(fread(almt, sizeof(Alimento), 1, fp)) {
		if (strcmp(almt->codAlimento, AL) == 0) {
      fclose(fp);
      return almt;
		}
	}
  free(AL);
	fclose(fp);
	return NULL;
}


void exibirAL1(Alimento* AL) {

	if (AL == NULL) {
		printf("\n= = = Dieta Inexistente = = =\n");
	} else {
		printf("Alimento : %s\n", AL->nomeAlimento);
		printf("Calorias : %s\n", AL->calorias);
	}
}


void exibirAL2(Alimento* AL) {

	if (AL == NULL) {
		printf("\n= = = Dieta Inexistente = = =\n");
	} else {
		printf("Alimento : %s\n", AL->nomeAlimento);
		printf("Calorias : %s\n", AL->calorias);
	}
  printf("\n\nTecle ENTER para continuar!\n\n");
 	getchar();
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
  achou = false;
	while(fread(pcLido, sizeof(Refeicao), 1, fp) && !achou) {
		if (strcmp(pcLido->cpfDig, pc->cpfDig) == 0) {
      achou = true;
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
		  pc->status = false;
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