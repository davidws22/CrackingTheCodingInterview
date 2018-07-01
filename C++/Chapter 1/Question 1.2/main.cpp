#include <iostream>
#include "Question1_2.h"

int main()
{
  question1_2 driver;
  
  string test1 = "hello world";
  string test2 = "stop";
  string test3 = "stop";
  
  //should return false
  cout << driver.checkPermutation(test1,test2) << endl;
  //should return true
  cout << driver.checkPermutation(test2,test3) << endl;

  return 0;
}
