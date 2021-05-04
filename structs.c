#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

typedef struct paciente Paciente;

struct paciente{
  char cpf[12];
  char nome[51];
  char peso[7];
  char altura[5];
  char email[31];
  char tel[16];
  char nivel[6];
  int status;
};

