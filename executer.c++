/** Simple Starter Main File. **/
#include "iostream" // C++ preprocessor to include the iostream standard file.
#include "string" // Strings header introduces string types, character traits and a set of converting functions
#include "helloWorld.c++"
#include "currencyConverter.c++"
#include "BudgetCounter.c++"
using namespace std; // C++ standard namespace for input and output alike.
int main(){ // Main Function For C++ Programming.
  helloWorld Hw; currencyConverter cC; BudgetCounter cB;
  cout << Hw.disp() << endl;
  cout << "You will have ";
  cout << cC.dollarExchange() << "/=Rupees" << endl;
  cout << "You will have ";
  cout << cC.rupeesExchange() << "/=Dollars" << endl;
  cB.cAlculate();
  return 0; // For Successful Termination of a program.
}

