

/* 
 * File:   Pessoa.cpp
 * Author: lucia
 * 
 * Created on 9 de agosto de 2023, 09:28
 */

#include <string>
#include<iostream>
#include <cstring>
#include "Pessoa.hpp"

using namespace std;

bool Pessoa::validarCpf(string cpf){
    unsigned tam=0;
    int var1=0, var2=0;
    char aux;
       while (cpf[tam]) {
        tam++;
    }

    if (tam!=11)
        return false;

    for (int j=0; j<9; j++){
        aux= cpf[j];
        var1+=atoi(&aux)*(j+1);
    }
    var1%=11;
    for (int j=0; j<9; j++){
        aux=cpf[j];
        var2+= atoi(&aux)*j;
    }

    var2 += var1*9;
    var2 %= 11;

    aux= cpf[tam-2];
    if (atoi(&aux)==var1){
        aux = cpf[tam-1];
        if (atoi(&aux)==var2)
            return true;
    }
    return false;
}

void Pessoa::lerDados(Pessoa pessoa1){
    bool cpfvalido=false;
   

    cout<<"Entre com seus dados:\n";
    cout<<"Informe seu nome:\n";
    cin>>pessoa1.nome;
    
    while(cpfvalido!=true){
       cout<<"Informe um  cpf válido:\n";  
      cin>>pessoa1.cpf;
      
       if(validarCpf(pessoa1.cpf)==true){
           cpfvalido=true;
            //break;
      }
   }
    cout<<"CPF válido!\n";
    cout<<"Informe sua idade:\n";
    cin>>pessoa1.idade;
    printDados(pessoa1);
}
 
void Pessoa::printDados( Pessoa pessoa1){
    cout<<"Os dados informados foram:\n";
   
    cout<<"Nome: "<<pessoa1.getNome()<<endl;
    cout<<"Cpf:"<<pessoa1.getCpf()<<endl;
    cout<<"idade:"<<pessoa1.getIdade()<<endl;
}


 std::string Pessoa::getNome(){
        return nome;
    }
    void Pessoa::setNome(std::string nomePessoa){
        nome=nomePessoa;
    }
    
    char Pessoa::getCpf(){
        return cpf[11];
    }
    void Pessoa::setCpf(char numeroCpf[11]){
        cpf[11]=numeroCpf[11];
    }
    
      int Pessoa::getIdade(){
        return idade;
    }
    void Pessoa::setIdade(int valorIdade){
       idade=valorIdade;
    }
