#include "teladieta.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
      case '2' : teladietaPesquisa();
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