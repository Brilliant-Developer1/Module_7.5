#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int arrey[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arrey[i]);
    }

    for (int i = 0; i < input; i++)
    {
        if (arrey[i] <= 10)
        {
            printf("A[%d] = %d\n", i, arrey[i]);
        }
    }
    return 0;
}