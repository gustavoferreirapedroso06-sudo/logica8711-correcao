#include<iostream>
#include<string>

int main(){ 

std::string nome;
float altura;
int idade;

std::cout<<"bem vindo, por gentileza informe seu nome: "<<std::endl;
std::cin>>nome;

std::cout<<"ola "<<nome<< " informe sua altura: "<<std::endl;
std::cin>>altura;

std::cout<<"otimo "<<nome<< " agora que sabemos sua altura que e de: " <<altura<< " , informe sua idade para que possamos matricular na sua respectiva turma"<<std::endl; 
std::cin>>idade;



 if(idade <= 10 ){
                std::cout<<"Seja bem vindo a turma infantil " <<nome<< "" <<std::endl;
} else if(idade <= 18){
        std::cout<<"Seja bem vindo a turma de adolescentes " <<nome<< "" <<std::endl;
} else if(idade <= 60){
         std::cout<<"Muito bem vindo senhor(a) "<<nome<<" a turma dos adultos "<<std::endl;
} else{
        std::cout<<"Seja bem vindo a turma de JOVENS EXPERIENTES"<<std::endl;
}


 if(idade <= 10 ){
                std::cout<<"Seja bem vindo a turma infantil " <<nome<< "" <<std::endl;
} else if(idade <= 18){
        std::cout<<"Seja bem vindo a turma de adolescentes " <<nome<< "" <<std::endl;
} else if(idade <= 60){
         std::cout<<"Muito bem vindo senhor(a) "<<nome<<" a turma dos adultos "<<std::endl;
} else{
        std::cout<<"Seja bem vindo a turma de JOVENS EXPERIENTES"<<std::endl;
}





        return 0;
}