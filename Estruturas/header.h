#ifndef HEADER_H
#define HEADER_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int dia;
  char *mes;
  int ano;
} DATA;

typedef struct {
  DATA dt_nasc;
  char *sexo;
  char *est_civil;
  char *nome;
  float salario;
} PESSOA;

typedef struct Node {
  PESSOA *data;
  struct Node *next;
} Node_t;

void mostrar(PESSOA *pessoa);

#endif // !HEADER_H
