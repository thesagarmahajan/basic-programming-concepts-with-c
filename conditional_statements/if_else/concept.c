#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    if(a>b){
        printf("%d is greater than %d", a, b);
    }
    else if(a<b){
        printf("%d is greater than %d", b, a);

    }
    else{
        printf("%d and %d are equal", a, b);
    }
    return 0;
}
