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

#include "telaprincipal.h"
#include "modulopacient.h"
#include "modulodieta.h"
#include "modulorelatorio.h"

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



// FLAVIUS GORGONIO21:56
// int cafeManha[4];
// int almoco[4];
// int jantar[4];

// FLAVIUS GORGONIO21:58
// for (int i = 0; i < 4; i++) {
//    printf("Informe o cod do alimento: ");
//    scanf("%d", &cafeManha[i]);
// }

// FLAVIUS GORGONIO22:01
// char* buscaAlimento(int cod);
// FLAVIUS GORGONIO22:03
// for (int i = 0; i < 4; i++) {
//    printf("Item %d: ", i+1);
//    printf("%s\n", buscaAlimento(cafeManha[i]));
// }