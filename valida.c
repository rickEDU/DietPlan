#include <string.h>


///
/// Função de validação vista e adaptada de 
/// "https://repl.it/@flaviusgorgonio/ValidacaoDeEntradasc" 
///  escrita e desenvolvida pelo @flaviusgorgonio.
///


int validanome(char nome[]){
  int tam;
  tam = strlen(nome);
  if(tam == 0){
     return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (nome[i] >= 'A' && nome[i] <= 'Z') {
      continue;
    } else if (nome[i] >= 'a' && nome[i] <= 'z') {
      continue;
    } else if (nome[i] == ' ') {
      continue;
    } else {
      return 0;
    }
  }
  return 1;
}

int validapeso(char peso[]){
  int tam;
  tam = strlen(peso);
  if(tam == 0){
     return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (peso[i] >= '0' && peso[i] <= '9') {
      continue;
    } else if (peso[i] == '.') {
      continue;
    } else if (peso[i] == ',') {
      continue;
    } else {
      return 0;
    }
  }
  return 1;
}

int validaaltura(char altura[]){
  int tam;
  tam = strlen(altura);
  if(tam == 0){
     return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (altura[i] >= '0' && altura[i] <= '9') {
      continue;
    } else if (altura[i] == '.') {
      continue;
    } else if (altura[i] == ',') {
      continue;
    } else {
      return 0;
    }
  }
  return 1;
}


int validaemail(char email[]){
  int tam;
  tam = strlen(email);
  if(tam == 0){
     return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (email[i] >= 'A' && email[i] <= 'Z') {
      continue;
    } else if (email[i] >= 'a' && email[i] <= 'z') {
      continue;
    } else if (email[i] >= '0' && email[i] <= '9') {
      continue;
    } else if (email[i] == '@') {
      continue;
    } else if (email[i] == '_') {
      continue;
    } else if (email[i] == '-') {
      continue;
    } else if (email[i] == '.') {
      continue;
    } else {
      return 0;
    }
  }
  return 1;
}

int validatel(char tel[]){
  int tam;
  tam = strlen(tel);
  if(tam == 0){
     return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (tel[i] >= '0' && tel[i] <= '9') {
      continue;
    } else if (tel[i] == '-') {
      continue;
    } else {
      return 0;
    }
  }
  return 1;
}

 int validaatividade(char atividade[]){
     int tam;
  tam = strlen(atividade);
  if(tam == 0){
     return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (atividade[i] >= 'A' && atividade[i] <= 'Z') {
      continue;
    } else if (atividade[i] >= 'a' && atividade[i] <= 'z') {
      continue;
    } else {
      return 0;
    }
  }
  return 1;
 }