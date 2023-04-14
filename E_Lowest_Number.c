#include <stdio.h>
#include <limits.h>
int main()
{
    int input;
    scanf("%d", &input);
    int arrey[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arrey[i]);
    }

    int ans = INT_MAX;
    int position = 0;
    for (int i = 0; i < input; i++)
    {
        if (arrey[i] < ans)
        {
            ans = arrey[i];
            position = i + 1;
        }
    }
    printf("%d %d", ans, position);
    return 0;
}