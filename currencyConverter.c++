/** Simple program as Budget Counter. **/
#include "iostream"
#include "string"
using namespace std;
class currencyConverter{
  private:
    double dollar; double rupees; double exchange;
  public:
  double dollarExchange(){
    cout << "Enter dollar amount: ";
    cin >> dollar;
    cout << "Enter exchange amount in rupees: ";
    cin >> rupees;
    exchange = (rupees * dollar);
    return exchange;
  }
  double rupeesExchange(){
    cout << "Enter rupees amount: ";
    cin >> dollar;
    cout << "Enter exchange amount in dollar: ";
    cin >> rupees;
    exchange = (dollar/rupees);
    return exchange;
  }
};

