#include "main.h"
#include <stdio.h>
/**
 * rev_strings -> function that prints a reversed string
 * @s: parameter s
 */
void rev_strings(char *s)
{
      char tmp;
      int i, length1, length2;
      length1 = 0;
      length2 = 0;
      while (s[length1] != '\0')
          length1++;
      length2 = lenght1 -1;
      for (i = 0; i < length1; /2 i++)
      {
          tmp = s[i];
          s[i] = s[length2];
          s[length2] = tmp;
          length2 -= 1;
      }
}     
