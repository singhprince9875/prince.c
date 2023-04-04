// C program to shutdown in Linux
#include <stdio.h>
#include <stdlib.h>

int main()
{
// Running Linux OS command using system
system("shutdown /r /t 2");

return 0;
}
