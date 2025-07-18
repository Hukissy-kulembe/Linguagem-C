#include "header.h"

void data(DATA *data) {
  printf("Data de Nascimento: %d / %s / %d\n", (*data).dia, (*data).mes,
         (*data).ano);
}

void mostrar(PESSOA *pessoa) {
  printf("Nome: \t%s\n", pessoa->nome);
  data(&pessoa->dt_nasc);
  printf("Estado Cívil: \t%s\n", pessoa->est_civil);
  printf("Gênero: \t%s\n", pessoa->sexo);
  printf("Salário: \t%.2f\n", pessoa->salario);
}
