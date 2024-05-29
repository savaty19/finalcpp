#include <iostream>
#include <string>
using namespace std;

void sum ( int firstNumber, int secondNumber) {
	cout << firstNumber + secondNumber;
  
}

int main() {
  string firstName ;
  cout<<"myName :";
  cin >> firstName;
  
  int firstNumber;
  cout << firstName <<"" << "=";
  cin >> firstNumber;
   
   string secondName ;
  cout<<"myName :";
  cin >> secondName;
  
  int secondNumber ;
   cout << secondName <<"" << "=";
  cin>> secondNumber;

   cout <<"Total =";
  sum (firstNumber, secondNumber);

  
  return 0;
}
