// ============================================================================
// file: Question1_3.h
// ============================================================================
// Programmer: David Shin
// Date: 07/01/2018
// Cracking the Coding Interview Chapter 1 Question 1.3
//
// Description:
//       Write a method to replace all spaces in a string with '%20'. You may
//       assume that the string has sufficient space at the end to hold the
//       additional characters, and that you are givven the "true" length of
//       the string.
// ============================================================================

#ifndef _QUESTION1_3_H_
#define _QUESTION1_3_H_
#include <string>
using namespace std;

class question1_3
{
 public:
  char* URLify(char* cstr, int numElems);
};
#endif
