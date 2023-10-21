#include "waffle.h"
#include <string>
#include "secret.h"


int Waffle::set() {
  waffle = 42;
  return waffle;
}

void Waffle::run() {
  cout << "is your waffle syrupy enough? \n";
  cout << "insert a number!";
  cin >> waffle;

  if (cin.fail()) {
    cout << "your a dick \n";
    cout << "so i can be to!\n";

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    waffle = 1000;
  }
  if (waffle == 420) {
    Secret::secret();
  }
  else if(waffle==421){
      Secret::cannabis();
  }
  else if (waffle==1000){
      Secret::explosives();
  }

  else if (syrup >= waffle) {
    cout << set() << endl;

  } else if (waffle >= overload) {
    cout << "its to much" << endl;
  } else {
    cout << "its not syrupy enough" << endl;
  }
}