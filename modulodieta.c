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

//Deus que me perdoe por esse código seboso

cpf = teladietaPesquisa();
rfc = buscarDieta(cpf);
AL1 = rfc->alim1;
AL2 = rfc->alim2;
AL3 = rfc->alim3;
AL4 = rfc->alim4;
almt1 = buscarAlimento(AL1);
almt2 = buscarAlimento(AL2);
almt3 = buscarAlimento(AL3);
almt4 = buscarAlimento(AL4);
exibirAL1(almt1);
exibirAL1(almt2);
exibirAL1(almt3);
exibirAL2(almt4);
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



Alimento* buscarAlimento(int* AL) {
	FILE* fp;
	Alimento* almt1;

	almt1 = (Alimento*) malloc(sizeof(Alimento));
	fp = fopen("ALIMENTOS.dat", "rb");
	if (fp == NULL) {
		telapacienteErro();
	}
	while(fread(almt1, sizeof(Alimento), 1, fp)) {
		if (strcmp(almt1->codAlimento, AL) == 0) {
      fclose(fp);
      return almt1;
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