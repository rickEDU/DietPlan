#include "telapacient.h"

//
/// MODULO Paciente
//

void modulo_paciente(void){
  char opcao;
  do{
    opcao = paciente();
    switch (opcao){
      case '1' : pacienteConsulta();
        break;
      case '2' : pacienteAtualiza();
        break;
      case '3' : pacienteExclui();
        break;
      case '4' : main();
        break;
    }
  }while (opcao != '0');
}
