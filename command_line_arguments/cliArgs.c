#include<stdio.h>
int main(int argc, char const *argv[])
{

    printf("Total Arguments: %d\n", argc);
    for (int i = 1; i < sizeof(argc); i++)
    {
       printf("%s \n", argv[i]);
    }
    
    return 0;
}
