#include "../libs/sqlite/sqlite3.h"
#include "configs.hpp"
#include <iostream>
#include <ctime>

//Aqui vão as CRUD relacionadas com as despesas e faturas.

void inserir_despesa(char * tabela, char * nome, char * comentario, char * tipo, float * valor) {
  //Sim, vou escolher abrir o banco de dados cada vez que a função for chamada, me ajuda a "decorar" como usar essa brincadeira.
  //Cada função vai ser um microcosmo de tudo isso, boilerplate? Sim, Eficiente? Talvez não (certeza que não), mas ajuda.
  //Primeiro vamos pegar a data atual


}
