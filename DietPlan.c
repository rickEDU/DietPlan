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
      case '4' : resulmo();
        break;
    }
  } while (opcao != '0');
  return 0;
}

// FLAVIUS GORGONIO16:18
// CRUD Paciente:
// CRUD Paciente:
// Cadastrar Paciente
// Pesquisar Paciente
// Editar Paciente
// Excluir Paciente
// CRUD Dieta:
// Cadastrar Dieta
// Pesquisar Dieta
// Editar Dieta
// Excluir Dieta
// FLAVIUS GORGONIO16:22
// struct refeicao {
// int codigo;
// char nome[51];
// char refeicao;
// int listaAlimentos[5];
// ...
// }
// struct refeicao {
// int codigo;
// char nome[51];
// char tipoRefeicao;
// int listaAlimentos[5];
// ...
// }
// FLAVIUS GORGONIO16:23
// 001
// Café da Manha 3
// 1
// 12, 3, 5, 21, 56
// FLAVIUS GORGONIO16:25
// struct alimento {
// int codigo;
// char nomeAlimento[51];
// int qdeCalorias;
// ...
// }
// struct alimento {
// int codAlimento;
// char nomeAlimento[51];
// int qdeCalorias;
// ...
// }
// FLAVIUS GORGONIO16:28
// struct consulta {
// int codPaciente;
// int codDieta;
// char dataConsulta[11];
// ...
// }

