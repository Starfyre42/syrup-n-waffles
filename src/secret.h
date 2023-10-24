#ifndef SECRET_H
#define SECRET_H
#include <iostream>

using namespace std;

class Secret {
public:
 //functions start here
  bool check(string ln);
  void exec();
  //variables start here
  string msg;
  string trigger;

};

#endif