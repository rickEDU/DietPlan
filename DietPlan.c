///////////////////////////////////////////////////////////////////////////////
///                         Ministério da Saúde                             ///
///                 Centro de Saúde Pública e bem estar                     ///
///                Departamento de Computação e Tecnologia                  ///
///               Projeto Sistema de Planejamento de dietas                 ///
///                  Developed by  @rickEDU - Jan, 2021                     ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "assinaturas.h"
#include "telaprincipal.h"
#include "modulonutri.c"
#include "telanutri.h"
#include "telaSubdieta.h"
#include "modulopacient.c"
#include "telapacient.h"

int main(void) {
  char opcao;
  do {
    opcao = menuPrincipal();
    switch (opcao){
      case '1' : modulo_nutricionista();
        break;
      case '2' : modulo_paciente();
        break;
      case '3' : resulmo();
        break;
    }
  } while (opcao != '0');
  return 0;
}