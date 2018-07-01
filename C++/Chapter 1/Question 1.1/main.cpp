#include <iostream>
#include "Question1_1.h"

int main()
{
  question1_1 driver;
  
  string test1 = "hello world";
  string test2 = "stop";
  //should return false
  cout << driver.isUnique1(test1) << endl;
  //should return true;
  cout << driver.isUnique2(test2) << endl;

  return 0;
}
