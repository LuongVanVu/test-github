#include <stdio.h>

int a = 1;

int main(int argc, char const *argv[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a);
        a++;
    }

    return 0;
}
