#include <stdio.h>

int main()
{
    char cmd[100];
    fgets(cmd, 100, stdin);
    printf("string is: %s\n", cmd);
  
    return 0;
}