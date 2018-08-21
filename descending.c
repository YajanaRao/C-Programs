/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{

//code

  int i, j, a, m, num[10];

  printf ("Enter the value of m \n");

  scanf ("%d", &m);

  printf ("Enter the num");

  for (i = 0; i < m; ++i)
    {
      scanf ("%d", &num[i]);
    }

  for (i = 0; i < m; ++i)
    {
      for (j = i + 1; j < m; ++j)
	{

	  if (num[i] < num[j])
	    {
	      a = num[i];
	      num[i] = num[j];
	      num[j] = a;
	    }

	}
    }


  printf ("Numbers in descending order are:\n");

  for (i = 0; i < m; ++i)
    {
      printf ("%d\t", num[i]);
    }

  return 0;
}

