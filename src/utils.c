#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  int count = 0;
  char* temp;
  char** a;

  *argv = (char**)malloc(80*sizeof(char*));
   a = *argv;
   
  temp = strtok(command, "' ', \n, \t");

  while(temp != NULL)
  {
	a[count] = (char*)malloc(80*sizeof(char));
	strcpy(a[count], temp);
	count++;
	temp = strtok(NULL,"' ', \n, \t");	
  }

  *argc = count;

}
