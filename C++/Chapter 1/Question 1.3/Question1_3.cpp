// ============================================================================
// file: Question1_3.cpp
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
//
// ============================================================================

#include <iostream>
#include "Question1_3.h"
// ==== URLify ===============================================================
//
// This function substitues whitespace within the passed string argument with
// "%20".
// Input:
//      cstr [IN]  --  c-string containing any set of printable ASCII
//             
//      numElems [IN]  -- length of first non-whitespace ASCII character in
//                        str to the last non-whitespace ASCII character.
//
// Output: A c-string that has been properly formatted.
//      
//
// ============================================================================
char* question1_3::URLify(char* cstr, int numElems)
{
  int numSpace = 0;
  //get the total amount of space available in the c-string
  while(cstr[numSpace] != '\0')
    {
      numSpace++;
    }
  
  for(int i = numSpace-1; numSpace > 0; i--)
    {
      if(cstr[numElems] != ' ')
	{
	  cstr[i] = cstr[numElems];
	  numElems--;
	}
      else
	{
	  cstr[i] = '0';
	  cstr[i-1] = '2';
	  cstr[i-2] = '%';
	  i -= 2;
	}
    }
  return cstr;
}
