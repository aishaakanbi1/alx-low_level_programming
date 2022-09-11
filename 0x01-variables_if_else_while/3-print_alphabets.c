#include <stdio.h>

/**
* main - program execution starts here
*Description: this is the main function
*Return: an integer to signify success or failure
*/
int main(void)
{

      int alphabet = 'a';

      while (alphabet < 123)
      {
               putchar(alphabet);
               alphabet++;
      }
      
      alphabet = 'A';
      
      while (alphabet < 91)
      {
              putchar(alphabet);
              alphabet++;
      }
      putchar('\n');

      return (0);
}
