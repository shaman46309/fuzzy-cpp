/* system example : DIR */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* system, NULL, EXIT_FAILURE */

int main ()
{
  int i;
  printf ("Checking if processor is available...");
  if (system(NULL)) puts ("Ok");
    else exit (EXIT_FAILURE);
  printf ("Executing command DIR...\n");
  i=system ("dir");
  printf ("The value returned was: %d.\n",i);
  i=system ("ls");
  printf ("The value returned was: %d.\n",i);
  char* pPath;
  pPath = getenv ("PATH");
  if (pPath!=NULL)
    printf ("The current path is: %s",pPath);
  return 0;
}
