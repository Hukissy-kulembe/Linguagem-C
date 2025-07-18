
#include "header.h"
/*
void addinlist(PESSOA *pessoa, Node_t no) {
  if (!no.data) {
    no.data = pessoa;
    no.next = NULL;
  } else {
    no.next->data = malloc(sizeof(PESSOA));
    if (!no.next->data)
      return;
    else {
      no.next->data = pessoa;
      no.next->next = NULL;
    }
  }
}
*/
int main() {

  Node_t lista;

  // PESSOA Paulo;
  // PESSOA Teresa;
  // PESSOA Ana;

  PESSOA var[] = {
      {{27, "Janeiro", 2006}, "Masculino", "Solteiro", "Paulo António", 000},
      {{17, "Dezembro", 2007}, "Femenino", "Casada", "Teresa Jóse", 00}};

  /*
  Paulo.nome = "Paulo António";
  Paulo.idade = 18;
  Paulo.est_civil = "solteiro";
  Paulo.sexo = "Masculino";
  Paulo.salario = 000;

  Teresa.nome = "Teresa Jóse";
  Teresa.idade = 17;
  Teresa.est_civil = "Casada";
  Teresa.sexo = "Femenino";
  Teresa.salario = 0000;

  Ana.nome = "Ana Paula";
  Ana.idade = 18;
  Ana.est_civil = "Solteira";
  Ana.sexo = "Femenino";
  Ana.salario = 00;
  */

  lista.data = &var[0];
  lista.next = malloc(sizeof(Node_t));
  if (!lista.next)
    return 0;

  lista.next->data = &var[1];
  lista.next->next = NULL;

  // addinlist(&Ana, lista.next);

  // PESSOA *Paulo_ = lista.data;
  // PESSOA *Teresa_ = lista.next->data;

  // printf("Nome: %s\n", Paulo_->nome);
  // printf("Nome: %s\n", Teresa_->nome);

  mostrar(lista.data);
  printf("\n");
  mostrar(lista.next->data);
}
