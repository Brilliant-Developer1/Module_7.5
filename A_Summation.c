#include <stdio.h>

int main()
{
    int input;
    long long int res = 0;
    scanf("%d", &input);
    int arrey[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arrey[i]);
    }

        for (int i = 0; i < input; i++)
    {
        res = arrey[i] + res;
    }

    if (res < 0)
    {
        // long long int new_res = ;
        printf("%lld\n", res * -1);
    }
    else
    {
        printf("%lld\n", res);
    }
    return 0;
}