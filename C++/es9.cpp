#include <stdio.h>
#include <string.h>
#include <iostream>
int main ()
{
  char s1[] = "apple";
  char s2[80];
  do {
     printf ("Guess my favorite fruit? ");
     gets(s2);
  } while (strcmp (s1,s2) != 0);
  puts ("Correct answer!");
}