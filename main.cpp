#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You played: ";
    showChoice(player);

    return 0;
}

char getUserChoice(){
    char choice;
    do{
        std::cout << "Rock-Paper-Scissors Game!\n"; 
        std::cout << "*************************\n";
        std::cout << "How to Play:\n";
        std::cout << "'R' for Rock\n";
        std::cout << "'P' for Paper\n";
        std::cout << "'S' for Scissors\n";
        std::cin >> choice;
    }while();
}

char getComputerChoice(){

}

void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock\n";
        case 'p': std::cout << "Paper\n";
        case 's': std::cout << "Scissors\n";
    }
}

void chooseWinner(char player, char computer){

}
