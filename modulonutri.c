
#include "telanutri.c"
#include "telaSubdieta.c"
#include "modulodieta.c"

//
//// MODULO DO NUTRICIONISTA
//


void modulo_nutricionista(void){
  char opcao;
  do{
    opcao = nutricionista();
    switch (opcao){
      case '1' : nutriCadastro();
        break;
      case '2' : modulo_dieta();
        break;
      case '3' : nutriPesquisa();
        break;
      case '4' : nutriAtualizar();
        break;
      case '5' : nutriExclui();
        break;
      case '6' : main();
        break;
    }
  }while(opcao != '0');
} 