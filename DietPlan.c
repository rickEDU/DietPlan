///////////////////////////////////////////////////////////////////////////////
///                         Ministério da Saúde                             ///
///                 Centro de Saúde Pública e bem estar                     ///
///                Departamento de Computação e Tecnologia                  ///
///               Projeto Sistema de Planejamento de dietas                 ///
///                  Developed by  @rickEDU - Jan, 2021                     ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#include "telaprincipal.h"
#include "modulonutri.h"
#include "modulopacient.h"
#include "modulorelatorio.h"

#include "modulonutri.c"

int main(void) {
  char opcao;
  do {
    opcao = menuPrincipal();
    switch (opcao){
      case '1' : modulo_nutricionista();
        break;
      case '2' : modulo_paciente();
        break;
      case '3' : modulo_relatorio();
        break;
      case '4' : resulmo();
        break;
    }
  } while (opcao != '0');
  return 0;
}

//Crie um módulo Relatórios no seu projeto, que deverá conter algumas propostas de possíveis relatórios que serão futuramente implementados. Por enquanto, basta criar um opção Relatórios no seu Menu Principal e criar algumas telas adicionais simulando os relatórios que serão implementados posteriormente.