#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    if ((input >= -10 && input < 0) || input >= 10)
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }

    return 0;
}
