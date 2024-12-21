#include "../libs/sqlite/sqlite3.h"
#include "inicio.hpp" //basicamente para reunir as funções que eu vou usar pra iniciar o programa
#include <iostream>

int main () {
  //AREA DE VARIAVEIS E CONSTANTES!
  //No inicio eu ia colocar tudo aqui e passar para cada função como pointers, mas como não havera multithreading então vou abrir e fechar o db em CADA função.
  //Decisão natural, quero decorar como usar sqlite então para cada coisa que eu fizer vou me forçar a escrever todo o codigo necessario.

  //INICIO DO PROGRAMA, TESTES DE BANCO DE DADOS!
  //src/testes.cpp
  testes_de_inicio(); 
}
