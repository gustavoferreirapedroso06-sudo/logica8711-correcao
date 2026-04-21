#include <iostream>

int main()
{

int num;

std::cout<<"Digite um numero entre 0 a 10: "<<std::endl;
std::cin>>num;

while(num <= 10 && num >= 0){
        std::cout<<"Numero ok!"<<std::endl;
}



     return 0;
}
