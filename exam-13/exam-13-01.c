#include <stdio.h>

int main(void)
{
    char good[] = "Good!";
    char *bad = "Bad!";
    printf("%s %s", good, bad);

    good[0] = 'H';
    // good = "New Good";

    bad[0] = 'S';
    bad = "New Bad";

    return 0;
}