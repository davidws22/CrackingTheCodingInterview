#include <iostream>
#include "Question1_3.h"

int main()
{
  question1_3 driver;
  
  char myArray[] = {'x', 'f', ' ', 'z', 'v', ' ', ' ', '\0'}; 
  char* result;
  
  result = driver.URLify(myArray, 4);
  //  cout << result << endl;

  return 0;
}
