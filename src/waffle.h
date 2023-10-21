#ifndef WAFFLE_H
#define WAFFLE_H

#include <iostream>

using namespace std;

class Waffle {
public:
  int set();
  void run();


  const int overload{100};
  const float syrup{1.5f};
  int waffle{1};
};

#endif