  #include "main.h"
  #include <stdio.h>

  /**
  * print_diagonal - print diagonal line depedent on the integer n 
  * @n: the number of lines using '\' character to use
  * Return: Void. 
  */
  void print_diagonal(int n)
   {
      int i;
      int spaces;

         for (i= 0; i < n; i++) 
    {    
        for (spaces = 0; spaces <n; spaces++) 
  {
           _putchar('');
    } 
       _putchar('\\');
       _putchar(\n);
 } 
      if (n <= 0) 
 {
         _putchar('\n') 
      }  
    } 


