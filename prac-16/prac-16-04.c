#include <stdio.h>

char * strcpy_custom(char dest[], char *origin)
{
    int i = 0;

    for (i = 0; *(origin + i) != '\0'; i++)
    {
        dest[i] = *(origin + i);
    }

    dest[i] = '\0';

    return dest;
}

int main(void)
{
    char *origin = "안녕";
    char dest[50] = "안녕하세요";

    printf("변경 전 origin: %s, dest: %s\n", origin, dest);

    strcpy_custom(dest, origin);

    printf("변경 후 origin: %s, dest: %s\n", origin, dest);

    return 0;
}
