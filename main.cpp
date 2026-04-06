#include<iostream>


int main(){ 

std::string nome;
std::string sobrenome = " Ferreira";

std::cout<<"digite seu nome "<<std::endl;
std::cin>>nome;

std::cout<<nome.append(sobrenome);



        return 0;
}