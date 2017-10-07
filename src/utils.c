#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  int count = 0;
  char* temp;
  char** a;

  *argv = (char**)malloc(80*sizeof(char*));
   a = *argv;
   
  temp = strtok(command, "' ', \n");

  while(temp != NULL)
  {
	test[count] = (char*)malloc(80*sizeof(char));
	strcpy(test[count], temp);
	count++;
	temp = strtok(NULL,"' ', \n");	
  }

  *argc = count;

}
