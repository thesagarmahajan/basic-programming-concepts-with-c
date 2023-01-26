#include<stdio.h>
#include <windows.h>
int main(int argc, char const *argv[])
{
    char *name;
    printf("What is your name? \n Enter your name here: ");
    scanf("%s", &name);
    printf("%s", name);
    MessageBox(0,"Message body", "Message title", MB_OK );
    
    return 0;
}
