// A dynamic programming solution for longest palindr.
// This code is adopted from following link
// http://www.leetcode.com/2011/11/longest-palindromic-substring-part-i.html

#include <stdio.h>
#include <string.h>

#define true 1
#define false 0
#define bool int

// A utility function to print a substring str[low..high]
void printSubStr(char* str, int low, int high) {
  int i;
  for (i = low; i <= high; ++i)
    printf("%c", str[i]);
}

// This function prints the longest palindrome substring
// of str[].
// It also returns the length of the longest palindrome
int longestPalSubstr(char *str) {

  int i, k;
  // int n = strlen(str); // get length of input string

  // table[i][j] will be false if substring str[i..j]
  // is not palindrome.
  // Else table[i][j] will be true
  bool table[2999][2999];
  i = 3000;
  while (i--) {
    k = 3000;
    while (k--) {
      table[i][k] = 0;
    }
  }
  //memset(table, 0, sizeof(table));

  // All substrings of length 1 are palindromes
  int maxLength = 1;
  for (i = 0; i < 3000; ++i)
    table[i][i] = true;

  // check for sub-string of length 2.
  int start = 0;
  for (i = 0; i < 2999; ++i) {
    if (str[i] == str[i + 1]) {
      table[i][i + 1] = true;
      start = i;
      maxLength = 2;
    }
  }

  // Check for lengths greater than 2. k is length
  // of substring
  for (k = 3; k <= 3000; ++k) {
    // Fix the starting index
    for (i = 0; i < 3000 - k + 1; ++i) {
      // Get the ending index of substring from
      // starting index i and length k
      int j = i + k - 1;

      // checking for sub-string from ith index to
      // jth index iff str[i+1] to str[j-1] is a
      // palindrome
      if (table[i + 1][j - 1] && str[i] == str[j]) {
        table[i][j] = true;

        if (k > maxLength) {
          start = i;
          maxLength = k;
        }
      }
    }
  }

  printf("Longest palindrome substring is: ");
  printSubStr(str, start, start + maxLength - 1);

  return maxLength; // return length of LPS
}

// Driver program to test above functions
int main() {
  char str[3000];
  int i = 3000;
  while (i--)
    str[i] = ' ';
  printf("\nLength is: %d\n", longestPalSubstr(str));
  return 0;
}
