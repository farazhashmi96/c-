/** Simple Starter Main File. **/
#include "iostream" // C++ preprocessor to include the iostream standard file.
#include "string" // Strings header introduces string types, character traits and a set of converting functions
using namespace std; // C++ standard namespace for input and output alike.
class cashCounter{
  public:
    void cashier(){ // Primary Function for the vork.
      long age = 0; // Enter You age Here.
      cout << "Enter your age here: " << endl;
      cin >> age;
      short loopCounter = 0;
      while(loopCounter < age){
        cout << "A retail cashier or simply a cashier is a person who handles the cash register at various locations such as the point of sale in a retail store." << endl;
        loopCounter++;
      }
    }
};
