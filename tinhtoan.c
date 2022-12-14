#include <stdio.h>

int a = 3;

int main(int argc, char const *argv[])
{
    int i;
    for (i = 1; i < 5; i++)
    {
        printf("%d ", a);
        a *= i;
    }
    
    printf("Hello");
    return 0;
}
