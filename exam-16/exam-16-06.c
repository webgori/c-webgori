#include <stdio.h>

int sayHello(int count)
{
    printf("Hello!\n");

    if (count != 3)
    {
        sayHello(count + 1);
    }
}

int main(void)
{
    sayHello(1);

    return 0;
}