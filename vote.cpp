#include <iostream>

using namespace std;

int main(){
    int age;
    std::cout << "What is your age?"; 
    std::cin >> age;// this is where my number get stored
    if(age >=18){
        std::cout << "You are eligibe to vote";
    }
    else{
        std::cout << "You                   are not eligible to vote";
    }
    
    return 0;
}