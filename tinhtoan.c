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
    int c = 6;
    printf("abc");
    printf("Hello");
    printf("123");
    printf("456");
    return 0;
}
