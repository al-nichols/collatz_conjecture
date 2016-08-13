/*
A program written to take a user-input number
and apply the rules of the "Collatz Conjecture"
to the number, and display the resulting process

Author: Alexander Nichols
Date: August 13th, 2016
*/
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

int runChecks(int inputNumber);
int main(){
char user_choice = 'y';
int inputNumber;

std::cout << "Your number: ";
std:: cin >> inputNumber;
runChecks(inputNumber);
std::cin.ignore();
return 0;
}

int runChecks(int inputNumber){
int n_steps;
n_steps=1;
int tempN = inputNumber;

while(tempN != 1){
    if(tempN%2==0){
        tempN = tempN / 2;
        std::cout << "\nStep " << n_steps << " " << tempN;
        tempN = tempN;
        n_steps++;
    }
    else if(tempN%2==1){
        tempN = (tempN * 3) + 1;
        std::cout << "\nStep " << n_steps << " " << tempN;
        inputNumber = tempN;
        n_steps++;
    }
}

std::cout << "\n\nIt took " << n_steps - 1 << " steps to reach 1";
return 0;
}
