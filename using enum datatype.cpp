#include <iostream>
using namespace std;

enum Level {
  	LOW,
  	MEDIUM,
	HIGH
	};
	
int main(){
	
	
	enum Level myVar = HIGH;
	
	cout << myVar;
	
	switch (myVar) {
    case 1:
      cout << "Low Level";
      break;
    case 2:
      cout << "Medium level";
      break;
    case 3:
      cout << "High level";
      break;
  }
	myVar = LOW;
	cout<<endl;
	cout << myVar;
	switch (myVar) {
    case LOW:
      cout << "Low Level";
      break;
    case MEDIUM:
      cout << "Medium level";
      break;
    case HIGH:
      cout << "High level";
      break;
  }
  
  cout<<2.8/2<<endl;
  enum eNumber
{
  zero_t = 0,
  one_t,
  two_t,
  eNumbersize,
};

string NumStrings[eNumbersize] = { "ZERO", "ONE", "TWO" };
	return 0;
}
