/** Simple Starter Main File. **/
#include "iostream" // C++ preprocessor to include the iostream standard file.
#include "string" // Strings header introduces string types, character traits and a set of converting functions
/**
#include "helloWorld.c++"
#include "currencyConverter.c++"
#include "BudgetCounter.c++"
**/
#include "cashCounter.c++"
using namespace std; // C++ standard namespace for input and output alike.
void executer();
void wantContinue();
void ask();
int main(){ // Main Function For C++ Programming.
/**
  Main Thread/Function For Execution.
**/
  ask();
  return 0; // For Successful Termination of a program.
}
void executer(short enterNumber = 0){
  short getEnteredNumber = enterNumber;
  switch(getEnteredNumber){
/**
    case 1:{
      helloWorld Hw; cout << Hw.disp() << endl;
      break;
      }
    case 2:{
      currencyConverter cC;
      cout << "You will have ";
      cout << cC.dollarExchange() << "/=Rupees" << endl;
      cout << "You will have ";
      cout << cC.rupeesExchange() << "/=Dollars" << endl;
      break;
      }
    case 3:{
      BudgetCounter cB;
      // cB.cAlculate();
      cB.intrestingFact();
      break;
      }
**/
    case 4:{
      cashCounter cC;
      cC.cashier();
      break;
      }
    default:{
      cout << "Wrong Number Input : " << getEnteredNumber << endl;
      break;
    }
  }
}
void wantContinue(char option = 'n'){ 
  char getLetter = option;
    if(getLetter == 'y' || getLetter == 'Y'){
      ask();
    }
    else{
      cout << "Thankyou for using, Take Care BYE!." << endl;
      exit(0);
    }
}
void ask(){
  short choose = 0; char print = 'n'; 
  cout << "Program Menu:" << endl;
  cout << "======= =====" << endl;
  cout << endl;
  cout << "Enter a number from below to proceed:" << endl;
  cout << "1: Disp" << endl;
  cout << "2: Dollar Exchange and Rupees Exchange" << endl;
  cout << "3: Calculate" << endl;
  cout << "4: Cash Counter" << endl;
  cout << endl;
  cin >> choose; executer(choose);
  cout << "Do you want to continue?:"; cin >> print; wantContinue(print);
}

