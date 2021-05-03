#include "telapacient.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
/// MODULO Paciente
//

void modulo_paciente(void){
  char opcao;
  do{
    opcao = telapaciente();
    switch (opcao){
      case '1' : cdtPaciente();
        break;
      case '2' : pesquisarPaciente();
        break;
      case '3' : atualizarPaciente();
        break;
      case '4' : excluirPaciente();
        break;
      case '5' : main();
        break;
    }
  }while (opcao != '0');
}


// Funções vistas e adaptadas de "https://github.com/flgorgonio/linguasolta", onde Flavius Gorgônio é o autor dos códigos
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
// função de cadastro

void cdtPaciente(void){
  Paciente* pc;

  pc=telapacienteCadastro();
  gravarPaciente(pc);
  
  free(pc);
}


void gravarPaciente(Paciente* pc){
  FILE* fp;

	fp = fopen("PACIENTE.dat", "ab");
	if (fp == NULL) {
		telapacienteErro();
	}
	fwrite(pc, sizeof(Paciente), 1, fp);
	fclose(fp);
}



///////////////////////////////////////////////////
///////////////////////////////////////////////////////
///////////////////////////////////////////
// funão de pesquisa


void pesquisarPaciente(void) {
Paciente* pc;
char* cpf;

cpf = telapacientePesquisa();
pc = buscarPaciente(cpf);
exibirPaciente(pc);
free(pc); 
free(cpf);
}


Paciente* buscarPaciente(char* cpf) {
	FILE* fp;
	Paciente* pc;

	pc = (Paciente*) malloc(sizeof(Paciente));
	fp = fopen("PACIENTE.dat", "rb");
	if (fp == NULL) {
		telapacienteErro();
	}
	while(fread(pc, sizeof(Paciente), 1, fp)) {
		if ((strcmp(pc->cpf, cpf) == 0)  && (pc->status == true)) {
      fclose(fp);
      return pc;
		}
	}
	fclose(fp);
	return NULL;
}


void exibirPaciente(Paciente* pc) {

	if (pc == NULL) {
		printf("\n= = = Paciente Inexistente = = =\n");
	} else {
		printf("\n= = = Paciente Cadastrado = = =\n");
		printf("CPF: %s\n", pc->cpf);
		printf("Nome do Paciente: %s\n", pc->nome);
		printf("Peso: %s\n", pc->peso);
		printf("Altura: %s\n", pc->altura);
		printf("E-mail: %s\n", pc->email);
		printf("Telefone: %s\n", pc->tel);
	}
	printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}


//////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
// função de atualização de cadastro

void atualizarPaciente(void) {
	Paciente* pc;
	char* cpf;

	cpf = telapacientePesquisa();
	pc = buscarPaciente(cpf);
	if (pc == NULL) {
    	printf("\n\n Paciente não encontrado!\n\n");
  	} else {
		  pc = telapacienteCadastro();
		  strcpy(pc->cpf, cpf);
		  regravarPaciente(pc);
		  free(pc);
	}
	free(cpf);
}

void regravarPaciente(Paciente* pc) {
  int achou;
	FILE* fp;
	Paciente* pcLido;

	pcLido = (Paciente*) malloc(sizeof(Paciente));
	fp = fopen("PACIENTE.dat", "r+b");
	if (fp == NULL) {
		telapacienteErro();
	}
  achou = false;
	while(fread(pcLido, sizeof(Paciente), 1, fp) && !achou) {
		if (strcmp(pcLido->cpf, pc->cpf) == 0) {
      achou = true;
			fseek(fp, -1*sizeof(Paciente), SEEK_CUR);
        	fwrite(pc, sizeof(Paciente), 1, fp);
		}
	}
	fclose(fp);
	free(pcLido);
}

/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
// função de exclusão de cadastro

void excluirPaciente(void) {
	Paciente* pc;
	char *cpf;

	cpf = telapacienteExclui();
	pc = (Paciente*) malloc(sizeof(Paciente));
	pc = buscarPaciente(cpf);
	if (cpf == NULL) {
    	printf("\n\nPaciente não encontrado!\n\n");
  	} else {
		  pc->status = false;
		  regravarPaciente(pc);
		  free(cpf);
	}
	free(pc);
}