///////////////////////////////////////////////////////////////////////////////
///                         Ministério da Saúde                             ///
///                 Centro de Saúde Pública e bem estar                     ///
///                Departamento de Computação e Tecnologia                  ///
///               Projeto Sistema de Planejamento de dietas                 ///
///                  Developed by  @rickEDU - Jan, 2021                     ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "telaPrincipal.h"
#include "moduloPacient.h"
#include "moduloDieta.h"
#include "moduloRelatorio.h"

int main(void) {
  char opcao;
  do {
    opcao = menuPrincipal();
    switch (opcao){
      case '1' : modulo_paciente();
        break;
      case '2' : modulo_dieta();
        break;
      case '3' : modulo_relatorio();
        break;
      case '4' : resumo();
        break;
    }
  } while (opcao != '0');
  return 0;
}

