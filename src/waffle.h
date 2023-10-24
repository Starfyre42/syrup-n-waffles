#ifndef WAFFLE_H
#define WAFFLE_H


#include <iostream>
#include "secret.h"

using namespace std;

class Waffle {
public:
  int set();
  void run();


  const int overload{100};
  const float syrup{1.5f};
  const static int secretscount{3};
  static Secret secrets[secretscount];
  int waffle{1};
};

#endif