// ============================================================================
// file: Question1_1.cpp
// ============================================================================
// Programmer: David Shin
// Date: 06/30/2018
// Cracking the Coding Interview Chapter 1 Question 1.1
//
// Description:
//      Implement an algorithm to determine if a string has all unique
//      characters. Then see if you cannot use additional data structures.
//
// ============================================================================

#include <iostream>
#include "Question1_1.h"
// ==== isUnique1 =========================================================
//
// This function determines if a string has all unique characters. Its
// space complexity is O(1) and its runtime complexity is O(n^2). Returns
// a boolean value of true if all characters are unique. Else, false.
// Input:
//      str [IN]  -- a constant string containing any set of printable ASCII
//                     characters passed by reference.
//
// Output:
//      True if all characters in the string are unique. False if otherwise..
//
// ============================================================================
bool question1_1::isUnique1(const string& str)
{
  for(int i = 0; i < str.length(); i++)
    {
      for(int j = 0; j < str.length(); j++)
	{
	  if(i != j && str[i] == str[j])
	    return false;
	}
    }
  return true;
}

// ==== isUnique2 ============================================================
//
// This functions determines if a string has all unique characters without
// using any additional data structures. Its space complexity is O(1) and its
// runtime complexity is O(n)
//
// Input:
//      str [IN]  -- a constant string containing any set of printable ASCII
//
// Output:
//      True if all characters in the string are unique. False if otherwise.
//
// ============================================================================
bool question1_1::isUnique2(const string& str)
{
  char myChar = 0;
  for (int i = 0; i < str.length(); i++)
    {
      if(myChar << str[i] & 1)
	return false;
      myChar <<= str[i] | 1;
    }
  return true;
}
