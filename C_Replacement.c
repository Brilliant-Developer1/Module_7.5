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

    for (int i = 0; i < input; i++)
    {

        if (arrey[i] < 0)
        {
            arrey[i] = 2;
        }
        else if (arrey[i] > 0)
        {
            arrey[i] = 1;
        }
        printf("%d ", arrey[i]);
    }

    return 0;
}