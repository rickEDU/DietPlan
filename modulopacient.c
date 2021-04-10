#include "telapacient.h"

//
/// MODULO Paciente
//

void modulo_paciente(void){
  char opcao;
  do{
    opcao = paciente();
    switch (opcao){
      case '1' : pacienteCadastro();
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
