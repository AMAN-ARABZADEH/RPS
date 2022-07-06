/******************************************************************************

Welcome to the game of ROCk-PAPER-SCISSORS, 
Author: Aman Arabzadeh
Date: 2022
Most importantly enjoy the game, please make it better and comment if you want to contribute. 
 Make your day awesome! 
*******************************************************************************/



#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
void showChoice(char choice){
 switch(choice){
      case 'r': 
        cout << "Rock" << endl;
      break;
      case 'p':
        cout << "Paper" << endl;
      break;
      case 's':
        cout << "Scissors" << endl;
      break;
      case 'e':
      case 'E':
        cout << "Goodbye" << endl;
      break;
      default:
        cout << "Wrong choice! " << endl;
   }
}

char computerChoise(){
   srand(time(0));
   int num = rand() % 3 +1;
   switch(num){
      case 1: return 'r'; break;
      case 2: return 'p'; break;
      case 3: return 's'; break;
   }
}
void chooseWinner(char playerChoice, char computerChoice){
 if(playerChoice == 'r' || playerChoice == 'R'){
       if(computerChoice == 'r'){
           cout << "It's a tie!" << endl;
       }else if(computerChoice == 'p'){
           cout << "You lose! )=" << endl;
       }else
           cout << "You wine! (= " << endl;
   }else if(playerChoice == 'p' || playerChoice == 'P'){
       if(computerChoice == 'p'){
           cout << "It's a tie!" << endl;
       }else if(computerChoice == 'r'){
           cout << "You wine! (=" << endl;
       }else
         cout << "You lose! )= " << endl;
   }else if(playerChoice == 's' || playerChoice == 'S'){
      if(computerChoice == 's'){
          cout << "It's a tie!" << endl;
       }else if(computerChoice == 'r'){
           cout << "You lose! )=" << endl;
       }else
          cout << "You wine! (= " << endl;  
   }else if(playerChoice == 'e' || playerChoice == 'E'){
    cout << "You choose to finish the game! " << endl;
   }
   

}

int main(){


  char choice,playerChoice,computerChoice;
   cout << "Welcome to Amans game of Rock-Paper-Scissors!" << endl;
   do{
      cout << "Choose from the menu!" << endl;
      cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
      cout << "'r'  for Rock         " << endl;
      cout << "'p'  for Paper        " << endl;
      cout << "'s'  for Scissors     " << endl;
      cout << "'e'  fo quit the game " << endl;
      cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
      //cout << "To exit enter E " << endl;
      cin >> choice;
      showChoice(choice);
      cout << "You choice is: ";
      showChoice(choice);
      cout << "Computer choice is: ";
      computerChoice = computerChoise();
      showChoice(computerChoice);
      chooseWinner(choice, computerChoice);
   }while(choice != 'e' &&  choice != 'E');
   
 return 0;
}

