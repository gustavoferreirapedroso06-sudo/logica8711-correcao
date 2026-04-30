#include <iostream>


int main()
{

//bramount, exchange, usdAmount | valor em reais | taxa de cambio | valor em dolar 
double brIamount, exchangeRate, dollarAmount;


std::cout<<"--- currency converter: BRL to USD ----"<<std::endl;


//entrada de taxa de cambio (quanto vale 1 dolar hoje)
std::cout<<"enter the current exchange rate (How much is 1 dollar in reais?): "<<std::endl;
std::cin>>exchangeRate;


//entrada da quantia em reais que a pessoa deseja converter
std::cout<<"Enter the amount in BRL(R$): "<<std::endl;
std::cin>>brIamount;


//verificaçao logica: garante que o valor informado seja positivo
if(brIamount > 0){
        dollarAmount = brIamount;

        //calculo: divide o montante em reais pela taxa de cambio 
        dollarAmount = brIamount / exchangeRate;
        std::cout<<"You will have $ " <<dollarAmount<<" US Dolars."<<std::endl;
}else{
        //mensagem de erro caso o valor seja zero ou negativo
        std::cout<<"error: please enter a valid amount greater than zero."<<std::endl;

}





     return 0;
}
