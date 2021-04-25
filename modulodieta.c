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
Alimento* buscarAlimento1(int*);
Alimento* buscarAlimento2(int*);
Alimento* buscarAlimento3(int*);
Alimento* buscarAlimento4(int*);
void exibirAL1(Alimento*);
void exibirAL2(Alimento*);
void exibirAL3(Alimento*);
void exibirAL4(Alimento*);


void modulo_dieta(void){
  char opcao;
  do{
    opcao = teladieta();
    switch (opcao){
      case '1' : cdtDieta();
        break;
      case '2' : pesquisarDieta();
        break;
      case '3' : teladietaAtualiza();
        break;
      case '4' : teladietaExclui();
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
char* cpf;
int* AL1;
int* AL2;
int* AL3;
int* AL4;
AL1=(int*)malloc(sizeof(int));
AL2=(int*)malloc(sizeof(int));
AL3=(int*)malloc(sizeof(int));
AL4=(int*)malloc(sizeof(int));


cpf = teladietaPesquisa();
rfc = buscarDieta(cpf);
AL1 = rfc->alim1;
AL2 = rfc->alim2;
AL3 = rfc->alim3;
AL4 = rfc->alim4;
almt1 = buscarAlimento1(AL1);
almt2 = buscarAlimento2(AL2);
almt3 = buscarAlimento3(AL3);
almt4 = buscarAlimento4(AL4);
exibirAL1(almt1);
exibirAL2(almt2);
exibirAL3(almt3);
exibirAL4(almt4);
free(cpf);
free(rfc);
free(almt1);
free(almt2);
free(almt3);
free(almt4);
}





Refeicao* buscarDieta(char* cpf) {
	FILE* fp;
	Refeicao* rfc;

	rfc = (Refeicao*) malloc(sizeof(Refeicao));
	fp = fopen("CONSULTA.dat", "rb");
	if (fp == NULL) {
		telapacienteErro();
	}
	while(fread(rfc, sizeof(Refeicao), 1, fp)) {
		if (strcmp(rfc->cpfDig, cpf) == 0) {
      fclose(fp);
      return rfc;
		}
	}
	fclose(fp);
	return NULL;
}



Alimento* buscarAlimento1(int* AL1) {
	FILE* fp;
	Alimento* almt1;

	almt1 = (Alimento*) malloc(sizeof(Alimento));
	fp = fopen("ALIMENTOS.dat", "rb");
	if (fp == NULL) {
		telapacienteErro();
	}
	while(fread(almt1, sizeof(Alimento), 1, fp)) {
		if (strcmp(almt1->codAlimento, AL1) == 0) {
      fclose(fp);
      return almt1;
		}
	}
  free(AL1);
	fclose(fp);
	return NULL;
}


Alimento* buscarAlimento2(int* AL2) {
	FILE* fp;
	Alimento* almt1;

	almt1 = (Alimento*) malloc(sizeof(Alimento));
	fp = fopen("ALIMENTOS.dat", "rb");
	if (fp == NULL) {
		telapacienteErro();
	}
	while(fread(almt1, sizeof(Alimento), 1, fp)) {
		if (strcmp(almt1->codAlimento, AL2) == 0) {
      fclose(fp);
      return almt1;
		}
	}
  free(AL2);
	fclose(fp);
	return NULL;
}

Alimento* buscarAlimento3(int* AL3) {
	FILE* fp;
	Alimento* almt1;

	almt1 = (Alimento*) malloc(sizeof(Alimento));
	fp = fopen("ALIMENTOS.dat", "rb");
	if (fp == NULL) {
		telapacienteErro();
	}
	while(fread(almt1, sizeof(Alimento), 1, fp)) {
		if (strcmp(almt1->codAlimento, AL3) == 0) {
      fclose(fp);
      return almt1;
		}
	}
  free(AL3);
	fclose(fp);
	return NULL;
}

Alimento* buscarAlimento4(int* AL4) {
	FILE* fp;
	Alimento* almt2;

	almt2 = (Alimento*) malloc(sizeof(Alimento));
	fp = fopen("ALIMENTOS.dat", "rb");
	if (fp == NULL) {
		telapacienteErro();
	}
	while(fread(almt2, sizeof(Alimento), 1, fp)) {
		if (strcmp(almt2->codAlimento, AL4) == 0) {
      fclose(fp);
      return almt2;
		}
	}
  free(AL4);
	fclose(fp);
	return NULL;
}

void exibirAL1(Alimento* AL1) {

	if (AL1 == NULL) {
		printf("\n= = = Dieta Inexistente = = =\n");
	} else {
		printf("Alimento 1: %s\n", AL1->nomeAlimento);
		printf("Calorias 1: %s\n", AL1->calorias);
	}
}

void exibirAL2(Alimento* AL1) {

	if (AL1 == NULL) {
		printf("\n= = = Dieta Inexistente = = =\n");
	} else {
		printf("Alimento 2: %s\n", AL1->nomeAlimento);
		printf("Calorias 2: %s\n", AL1->calorias);
	}
}

void exibirAL3(Alimento* AL1) {

	if (AL1 == NULL) {
		printf("\n= = = Dieta Inexistente = = =\n");
	} else {
		printf("Alimento 3: %s\n", AL1->nomeAlimento);
		printf("Calorias 3: %s\n", AL1->calorias);
	}
}

void exibirAL4(Alimento* AL1) {

	if (AL1 == NULL) {
		printf("\n= = = Dieta Inexistente = = =\n");
	} else {
		printf("Alimento 4: %s\n", AL1->nomeAlimento);
		printf("Calorias 4: %s\n", AL1->calorias);
	}
  printf("\n\nTecle ENTER para continuar!\n\n");
 	getchar();
}


/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////

void cdtAlimento(void){
  Alimento* alm;

  alm=telaAcrescentaalimento();
  gravarAlimento(alm);
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