#include <stdio.h>

int main(void)
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *ptr0 = &arr[0];
    int *ptr7 = &arr[7];
    
    printf("{");

    for (int i = 0; i < 8; i++)
    {
        int *ptr = (ptr7 - i);

        if (ptr == ptr0)
        {
            printf("%d}", *ptr);
            break;
        }
        else
            printf("%d, ", *ptr);
    }

    return 0;
}