#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Hello World!\n\n");     // (escape sequences) \n characters after each other will create a blank line:
  printf("I am learning C.\n");
  system("pause");
  return 0;
}

// You can also output multiple lines with a single printf() function. However, this could make the code harder to read:
/*
#include <stdio.h>

int main() {
  printf("Hello World!\nI am learning C.\nAnd it is awesome!");
  return 0;
}
*/

// Examples of other valid escape sequences are:
/*
\t	Creates a horizontal tab	
\\	Inserts a backslash character (\)	
\"	Inserts a double quote character
*/

/*
#include <stdio.h>

int main() {
  printf("Hello World!\t");
  printf("I am learning C.");
  return 0;
}
*/

/*
#include <stdio.h>

int main() {
  printf("Hello World!\\");
  printf("I am learning C.");
  return 0;
}
*/

/*
#include <stdio.h>

int main() {
  printf("They call him \"Johnny\".");
  return 0;
}
*/