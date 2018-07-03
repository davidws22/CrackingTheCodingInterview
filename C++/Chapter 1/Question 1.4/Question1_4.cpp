// ============================================================================
// file: Question1_4.cpp
// ============================================================================
// Programmer: David Shin
// Date: 07/02/2018
// Cracking the Coding Interview Chapter 1 Question 1.4
//
// Description:
//       Given a string, write a function to check if it is a permutation
//       of a palindrome. A palindrome is a word or phrase that is the same
//       both forwards and backwards. A permutation is a rearrangement of
//       letters. The palindrome does not need to be limited to just dictionary
//       words.                                                                
// ============================================================================
#include <cctype> //for tolower()
#include <iostream>
#include "Question1_4.h"
// ==== isPalindromePerm ======================================================
//
// This function checks if a given string a permutation of a palindrome.
// Input:
//      str [IN]  --  string containing any set of printable ASCII
//             
// Output: True if given string is a permutation of a palindrome. Otherwise,
//      false.
//      
//
// ============================================================================
bool question1_4::isPalindromePerm(string str)
{
  int length = 0;
  // 'a' - 97 = 0
  int array[27] = {0};
  for(int i = 0; i < str.length(); i++)
    {
      if(!isalpha(str[i]))
	if(!isspace(str[i]))
	   return false;
      str[i] = tolower(str[i]);
      if(str[i] != ' ')
	length++;
    }
  //if string length is odd
  if(length%2)
    {
      int sum = 0;
      for(int i = 0; i < str.length(); i++)
	{
	  if(array[str[i]-96] == 0 && str[i] != ' ')
	    array[str[i]-96] += 1;
	  if(array[str[i]-96] > 0 && str[i] != ' ')
	    array[str[i]-96] -= 1;
	}
      for(int i = 0; i < 27; i++)
	{
	  sum += array[i];
	}
      if(sum > 0)
	return true;
    }
  //if string length is even
  else
    {
      int sum =0;
      for(int i = 0; i < str.length(); i++)
	{
	  if(array[str[i]-96] == 0 && str[i] != ' ')
	    array[str[i]-96] += 1;
	  if(array[str[i]-96] > 0 && str[i] != ' ')
	    array[str[i]-96] -= 1;
	}
      for(int i = 0; i < 27; i++)
	{
	  sum += array[i];
	}
      if(sum == 0)
	return true;
    }
}
