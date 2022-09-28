#include <stdio.h>
int main()
{
    int a, b;
    int count = 0;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    for (int i = a; i <= b; i++)
    {
        count = 0;
        if (i == 1)
        {
            continue;
        }
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count <= 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}