#include <stdio.h>

int sayHello()
{
    printf("Hello!\n");
    sayHello();
}

int main(void)
{
    sayHello();

    return 0;
}