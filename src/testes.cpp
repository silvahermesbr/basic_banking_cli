#include "../libs/sqlite/sqlite3.h"
#include "configs.hpp"
#include <iostream>
#include <ctime>

int testes_de_inicio() {
  sqlite3 * db;
  int result_command;
  time_t time_stamp;
  time(&time_stamp);
  //INICIALIZAÇÃO TESTE FAVOR LEMBRAR DE FECHAR ISSO!
  //Uso de endl e seu impacto na performance neste use_Case considerado irrelevante.
  std::cout << "[" << ctime(&time_stamp) << "] Iniciando teste de acesso ao DB" << std::endl;
  //Testes...
  result_command = sqlite3_open(SQLITE_FILE, &db);
  if (result_command) {
    std::cout << "Teste concluido, erro encontrado ao abrir o banco de dados." << std::endl;
    return 1;
  } else {
    std::cout << "Teste concluido com sucesso, o DB " << SQLITE_FILE << " está acessivel." << std::endl;
  }

  //TESTES DE TABELAS:
  //Aqui definimos as tabelas iniciais!
  int index = 5;
  const char * sql_teste[index] = { 
    "CREATE TABLE IF NOT EXISTS Despesas_basicas (nome TEXT, valor FLOAT);",
    "CREATE TABLE IF NOT EXISTS Entradas_basicas (nome TEXT, valor FLOAT);",
    "CREATE TABLE IF NOT EXISTS Fatura (nome TEXT, tipo TEXT, comentario TEXT, valor FLOAT, data DATE);",
    "CREATE TABLE IF NOT EXISTS Despesas (nome TEXT, tipo TEXT, comentario TEXT, valor FLOAT, data DATE);",
    "CREATE TABLE IF NOT EXISTS Entradas (nome TEXT, comentario TEXT, valor FLOAT);"
  };
  //Um array bonitinho com index definido em compile_time para ajudar um pouco.
  const char * sql_teste_names[index] = {
    "Despesas_basicas",
    "Entradas_basicas",
    "Fatura",
    "Despesas",
    "Entradas",
  };
  //Loop de execução de testes em cada tabela.
  for (int i = 0; i < index; i++) {
    result_command = sqlite3_exec(db, sql_teste[i], 0, 0, 0);
    if (result_command) {
      std::cout << "Erro durante teste de tabelas n: " << (i + 1) << " [" << sql_teste_names[i] << "]"<< std::endl;
      return 1;
    } else {
      std::cout << "Teste de tabela " << (i + 1) << " [" << sql_teste_names[i] << "] Concluido com sucesso" << std::endl;
    }
  }
  sqlite3_close(db);
  return 0;
}
