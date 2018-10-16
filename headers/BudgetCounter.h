#include "iostream"
#include "string"
using namespace std;
class BudgetCounter{
  private:
    double Internet; double Outing; double Grooming; double months;
    double income; double expense; double savings; double totalExpense;
    double totalIncome; double totalSavings;
  public:
    BudgetCounter(void); void getInput(); void cAlculate();
};
