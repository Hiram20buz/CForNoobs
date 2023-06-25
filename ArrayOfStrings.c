#include <stdio.h>

int main()
{
  char *trip[ ] = {
      "suitcase",
      "passport",
      "ticket"
  };

  printf("Please bring the following:\n");
  for (int i = 0; i < 3; i++) {
    printf("%s\n", trip[i]);
  }  

  return 0;
} 

/*
Because each element can vary in length,
the array of string pointers has a more ragged structure as opposed to a two-dimensional grid structure.

With this approach, there is no limit to the string length. 
And more importantly, items can be referred to by a pointer to the first character of each string.

Keep in mind that a declaration like char *items[3]; only reserves space for three pointers;
the actual strings are being referenced by those pointers.
*/
