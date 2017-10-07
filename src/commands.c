#include <string.h>
#include <stdio.h>
#include "commands.h"

int do_cd(int argc, char** argv) {

  int result;
  if (!validate_cd_argv(argc, argv))
    return -1;

  result = chdir(argv[1]);
  if(result == -1) printf("Changing Fail\n");
  else printf("Changing Completed\n");

  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  char *a;
  a = getcwd(a,80);
  printf("%s\n", a);

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  
  if(argc != 2) return 0;
 
  return 1;
}

int validate_pwd_argv(int argc, char** argv) {
 
  if(argc != 1) return 0;
  return 1;
}
