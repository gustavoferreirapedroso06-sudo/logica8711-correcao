#include<iostream>
#include<cmath>

int main(){ 

int a = 100;
int b = 7;
int c = 6;
int d = 10;

int maior1 = std::max(a, b);
int maior2 = std::max(c, d);

std::cout<<(maior1 > maior2)<<std::endl;

        return 0;
}