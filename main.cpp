#include <iostream>


int main()
{

int opcao;
std::string nome;
int idade;


std::cout<<"----- Escolha a opcao adequada: "<<std::endl;
std::cout<<"Digite 1 para cadastrar ou 2 para sair: "<<std::endl;
std::cin>>opcao;

if(opcao == 1){
        std::cout<<"Digite o nome: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Digite a idade: "<<std::endl;
        std::cin>>idade;
        std::cout<<"cadastro realizado com sucesso!"<<std::endl;

        std::cout<<"seu nome e: "<<nome<<std::endl;
        std::cout<<"sua idade e: "<<idade<<std::endl;
}else{
        std::cout<<"ate a proxima! "<<std::endl;
}






     return 0;
}
