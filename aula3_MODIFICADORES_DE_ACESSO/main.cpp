#include<iostream>
#include "Pessoa.hpp"
//#include "Pessoa.cpp"

int main()
{
    
    
    Pessoa pessoa1;
    int totalPessoas;
    cout<<"Informe total de pessoas para cadastro:\n";
    cin>>totalPessoas;
    for(int n = 0; n <= totalPessoas; n++){
        pessoa1.lerDados(pessoa1);
       
    }
    
    return 0;
}