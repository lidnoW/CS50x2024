#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //获取金额
    int n;
    do
    {
        n = get_int("Change owed: ");
    }
    while (n < 0);
    //贪心算法和二分法
    int a = 0;
    while (n >= 10)
    {
        if (n >= 25)
        {
            for (; n >= 25; n -= 25)
                a++;
            continue;
        }
        else
        {
            for (; n >= 10; n -= 10)
                a++;
        }
    }
    while (n < 10 && n > 0)
    {
        if (n >= 5)
        {
            for (; n >= 5; n -= 5)
                a++;
            continue;
        }
        else
        {
            for (; n >= 1; n--)
                a++;
        }
    }
    printf("%i\n", a);
}
