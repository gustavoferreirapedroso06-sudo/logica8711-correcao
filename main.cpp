#include <iostream>

int main()
{

int quantidade;

do{
        std::cout<<"Digite a quantidade disponivel em estoque (Deve ser maior que 0): "<<std::endl;
        std::cin>>quantidade;
}
while(quantidade <= 0);

std::cout<<"Estoque atualizado: "<<quantidade<<" unidades."<<std::endl;



     return 0;
}
