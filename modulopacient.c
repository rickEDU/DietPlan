#include "telapacient.h"
void gravarPaciente(Paciente*);
//
/// MODULO Paciente
//

void modulo_paciente(void){
  char opcao;
  do{
    opcao = paciente();
    switch (opcao){
      case '1' : cdtPaciente();
        break;
      case '2' : pacientePesquisa();
        break;
      case '3' : pacienteAtualiza();
        break;
      case '4' : pacienteExclui();
        break;
      case '5' : main();
        break;
    }
  }while (opcao != '0');
}


void cdtPaciente(void){
  Paciente* pc;

  pc=pacienteCadastro();
  gravarPaciente(pc);
  free(pc);
}

void gravarPaciente(Paciente* pc){
  FILE* fp;

	fp = fopen("PACIENTE.dat", "ab");
	if (fp == NULL) {
		pacienteErro();
	}
	fwrite(pc, sizeof(Paciente), 1, fp);
	fclose(fp);
}


