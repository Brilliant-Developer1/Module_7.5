#include <stdio.h>
int main()
{
    int input, x;
    scanf("%d", &input);
    int arrey[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arrey[i]);
    }

    for (int i = input - 1; i >= 0; i--)
    {
        printf("%d ", arrey[i]);
    }
    return 0;
}