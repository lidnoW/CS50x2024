#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n;
    do
    {
    n = get_long("Number: ");
    }
    while (n < 1);
    long m = n;
    // a为相加之和，b为数字长度
    int a = 0;
    int b = 0;
    for (int i = 1; ; i++)
    {
        if (i % 2 != 0)
        {
            a += n % 10;
        }
        else
        {
            int c = n % 10 * 2;
            do
            {
                a += c % 10;
                c = c / 10;
            }
            while (c != 0);
        }
        n = n / 10;
        if (n == 0)
        {
            b = i;
            break;
        }
    }
    // 获取最高位及次高位
    long x = m;
    long y = m;
    for (int i = b; i > 2; i--)
    {
        x = x / 10;
    }
    y = x / 10;
    // 检查数字格式
    if (a % 10 == 0 && b == 15 && (x == 34 || x == 37))
    {
        printf("AMEX\n");
    }
    else if (a % 10 == 0 && b == 16 && x > 50 && x < 56)
    {
        printf("MASTERCARD\n");
    }
    else if (a % 10 == 0 && (b == 16 || b == 13) && y == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
