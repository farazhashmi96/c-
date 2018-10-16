#include "iostream"
#include "string"
using namespace std;
class helloWorld{
  private:
    string greetings = "Hello World.";
  public:
    helloWorld(){}
    string disp(){
      return greetings;
    }
};
