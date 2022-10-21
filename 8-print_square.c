  #include "main.h"
  #include <stdio.h>

  /**
  * print_square - print square line depedent on the integer n. 
  * @n: the number of lines using '#' characters to use per row and column
  * Return: Void
  */
  void print_square(int n)
   {
      int i;
      int x;

         for (y= 0; y < n; y++) 
    {    
        for (x = 0; x < 4; x++) 
  {
           _putchar('#');
    } 
       _putchar('\n');
 } 
    if (n <= 0) 
  {
     _putchar('\n');
} 
  } 


