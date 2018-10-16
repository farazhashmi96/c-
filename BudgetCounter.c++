/** Simple program as "Budget Counter" for personal use.
    Just enter the amount in per "1" month format numeric digits only.
**/
#include "iostream" // C++ preprocessor to include the iostream standard file.
#include "string" // Strings header introduces string types, character traits and a set of converting functions
using namespace std; // C++ standard namespace for input and output alike.
class BudgetCounter{ // C++ Custom Class Defined.
  private:
    // Below Class Variables are defined which is, private by nature.
    double Internet; double Outing; double Grooming; double months;
    double income; double expense; double savings; double totalExpense; double totalIncome; double totalSavings;
  public:
    BudgetCounter(void){ // C++ Constructor for Defined Class.
      // Below Initial values have assigned to class variables.
      Internet = Outing = Grooming = months = income = expense = savings = totalExpense = 0.00;
      totalIncome = totalSavings = 0.00;
    }
  void getInput(){
    cout << "Enter amount in per \"1\" month format: " << endl; // Prints simple instruction for user.
    cout << "Enter Internet Price: " << endl; cin >> Internet; // Asks for Internet Price from user.
    cout << "Enter entertainment Expese: " << endl; cin >> Outing; // Asks for Outing Expeses from the user.
    cout << "Enter Additional Expense: " << endl; cin >> Grooming; // Asks for additional Expenses from user.
    cout << "Enter Total Months Required: " << endl; cin >> months; // Asks users for Total Months Required for calculation.
    cout << "Enter Income you have: " << endl; cin >> income; // Asks users for his/her Income, from to be calculated.
  }
  void cAlculate(){
    getInput(); // Ask User for value to be imputed.
    expense = ((Internet+Outing+Grooming)); // Calculate (expense) for one (1) month.
    savings = ((income - expense)); // Calculate (savings) for one (1) month.
    // Below are the variables defined for specific month(s) calculations.
    totalExpense = (expense*months); totalIncome = (income*months); totalSavings = (savings*months);
    cout << "Internet Price: " << Internet << "/= month." << endl; // Prints Internet Price.
    cout << "Entertainment Expense: " << Outing << "/= month." << endl; // Prints Outing Expense.
    cout << "Additional Expese: " << Grooming << "/= month." << endl; // Prints Grooming Expese.
    cout << "Your Total Expenses in a month: " << expense <<"/="<< endl; // Prints Expenses for a month.
    cout << "Your Income in a month: " << income << "/=" << endl; // Prints Income for a month.
    cout << "Your savings in a month: " << savings << "/=" << endl; // Prints savings for a month.
    cout << "And..." << endl; // Line Break
    cout << "Your Total Expenses in " << months << " months period: " << totalExpense <<"/="<< endl; // Prints Expenses for number of months that user has defined.
    cout << "Your Income in \"" << months << "\" months period: " << totalIncome << "/=" << endl; // Prints Income for number months that user has defined.
    cout << "Your savings in \"" << months << "\" months period: " << totalSavings << "/=" << endl; // Prints savings for months, defined by user.
  }
};
