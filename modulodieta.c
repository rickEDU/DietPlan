
//
//// MODULO DE REGISTRO DE DIETA
//

void modulo_dieta(void){
  char opcao;
  do{
    opcao = nutriDieta();
    switch (opcao){
      case '1' : modulo_cafe();
        break;
      case '2' : modulo_lanche1();
        break;
      case '3' : modulo_almoco();
        break;
      case '4' : modulo_lanche2();
        break;
      case '5' : modulo_janta();
        break;
      case '6' : modulo_lanche3();
        break;
      case '7' : modulo_nutricionista();
        break;
    }
  }while(opcao != '0');
}

//
//// MODULOS DOS SUBMENUS DO REGISTRO DE DIETA
//

void modulo_cafe(void){
  char opcao;
  do{
    opcao = nutriCafe();
    switch (opcao){
      case '1' : nutriCafe_acrescenta();
        break;
      case '2' : nutriCafe_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}

void modulo_lanche1(void){
  char opcao;
  do{
    opcao = nutriLanche1();
    switch (opcao){
      case '1' : nutriLanche1_acrescenta();
        break;
      case '2' : nutriLanche1_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}

void modulo_almoco(void){
  char opcao;
  do{
    opcao = nutriAlmoco();
    switch (opcao){
      case '1' : nutriAlmoco_acrescenta();
        break;
      case '2' : nutriAlmoco_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}

void modulo_lanche2(void){
  char opcao;
  do{
    opcao = nutriLanche2();
    switch (opcao){
      case '1' : nutriLanche2_acrescenta();
        break;
      case '2' : nutriLanche2_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}

void modulo_janta(void){
  char opcao;
  do{
    opcao = nutriJanta();
    switch (opcao){
      case '1' : nutriJanta_acrescenta();
        break;
      case '2' : nutriJanta_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}

void modulo_lanche3(void){
  char opcao;
  do{
    opcao = nutriLanche3();
    switch (opcao){
      case '1' : nutriLanche3_acrescenta();
        break;
      case '2' : nutriLanche3_exclui();
        break;
      case '3' : modulo_dieta();
        break;
    }
  }while (opcao != '0');
}