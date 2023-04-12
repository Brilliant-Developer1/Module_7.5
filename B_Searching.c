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
    scanf("%d", &x);
    for (int i = 0; i < input; i++)
    {
        if (arrey[i] == x)
        {
            printf("%d", i);
            break;
        }
        else
        {
            if (i + 1 == input)
            {
                printf("-1");
                break;
            }
        }
    }

    // printf("%d\n", arrey[input]);

    return 0;
}