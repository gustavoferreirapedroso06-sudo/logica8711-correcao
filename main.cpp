#include <iostream>

int main()
{

int num;



do{std::cout<<"Digite um valor para num: "<<std::endl;
std::cin>>num;

if (num <1 || num > 10){
        std::cout<<"entrada invalida!!"<<std::endl;
}

}while(num <= 10 || num >= 10);{
        std::cout<<"Numero ok!"<<std::endl;
}



     return 0;
}
