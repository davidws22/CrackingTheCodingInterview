// ============================================================================
// file: Question1_2.cpp
// ============================================================================
// Programmer: David Shin
// Date: 06/30/2018
// Cracking the Coding Interview Chapter 1 Question 1.2
//
// Description:
//      Given two strings, write a method to decide if one is a permutation of
//      the other.
//
// ============================================================================

#include <iostream>
#include "Question1_2.h"
// ==== isUnique1 ============================================================
//
// This function determines if two strings are permutations of the other. It
// has a space complexity of O(1) and a runtime complexity of O(n)
// Input:
//      str1 [IN]  -- a constant string containing any set of printable ASCII
//                     characters passed by reference.
//      str2 [IN]  -- same description as above.
//
// Output:
//      True if str1 is a permutation of str2. False if otherwise.
//
// ============================================================================
bool question1_2::checkPermutation(const string& str1, const string& str2)
{
  //initialize an array containing 128 integers to 0.
  int array[128] = {0};

  //automatically return false if the two strings are not equal in legnth
  if(str1.length() != str2.length())
    return false;
  //increment the count of each indivdual character in str1 in our array
  //at the index of its corresponding ASCII value.
  for (int i = 0; i < str1.length(); i++)
      array[str1[i]] += 1;
  //same as above but now decrementing
  for( int i = 0; i < str2.length(); i++)
    array[str2[i]] -= 1;
  //if every index is equal to 0, then each string is a permutation of the
  //other
  for(int i = 0; i < (sizeof(array)/sizeof(array[0])); i++)
    {
      if(array[i] != 0)
	return false;
    }
  return true;
}
