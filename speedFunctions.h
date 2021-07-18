#ifndef speedFunctions
#define speedFunctions
#include <Arduino.h>

class fast {
  public:
    fast();
    high(unsigned char pin);
    low(unsigned char pin);
    check(unsigned char pin);
    input(unsigned char pin);
    pullup(unsigned char pin);
    output(unsigned char pin);
  private:
};

#endif