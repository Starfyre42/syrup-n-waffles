#include "waffle.h"
#include "secret.h"
#include <string>

void pause() {
  cout << "Press enter twice to continue...";
  cin.get();
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int Waffle::set() {
  waffle = 42;
  return waffle;
}

void Waffle::run() {
  cout << "is your waffle syrupy enough? \n";
  cout << "insert a number!";

  string ln;
  getline(cin, ln);

  for (int i = 0; i < secretscount; i++) {
    Secret secret = secrets[i];
    if (secret.check(ln)) {
      secret.exec();
      pause();
      return;
    }
  }

  waffle = stoi(ln);

  if (cin.fail()) {
    cout << "your a dick \n";
    cout << "so i can be to!\n";

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    waffle = 1000;
  }

  if (syrup >= waffle) {
    cout << set() << endl;

  } else if (waffle >= overload) {
    cout << "its to much" << endl;
  } else {
    cout << "its not syrupy enough" << endl;
  }

  pause();
}

Secret Waffle::secrets[secretscount];