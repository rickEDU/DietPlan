#include "telarelatorio.h"

void modulo_relatorio(void){
  char opcao;
  do{
    opcao = relatorio();
    switch (opcao){
      case '1' : relatorioRegistro();
        break;
      case '2' : relatorioProgresso();
        break;
      case '3' : relatorioDesistencia();
        break;
      case '4' : main();
        break;
    }
  }while (opcao != '0');
}
