

/* 
 * File:   Pessoa.hpp
 * Author: lucia
 *
 * Created on 9 de agosto de 2023, 09:28
 */

#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <iostream>
#include <string>
#include <cstdint>
using namespace std;
#include "Pessoa.hpp"
class Pessoa {

public:
   
    
    string getNome();
    void setNome(string nomePessoa);
    
    char getCpf();
    void setCpf(char numeroCpf[11]);
    
    int getIdade();
    void setIdade(int valorIdade);
    void lerDados( Pessoa pessoa1);
    void printDados(Pessoa pessoa1);
    bool validarCpf(string cpf);
    
private:
    string  nome;
    char  cpf[11];
    int idade;
  
};

#endif /* PESSOA_HPP */

