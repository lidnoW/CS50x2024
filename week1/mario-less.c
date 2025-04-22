# include <stdio.h>
# include <cs50.h>

int getint(void);
int print(int b);
int main(void)
{
    //重复提示输入正确类型
    int n=getint();
    //打印
    print(n);
}

int getint(void)
{
    int a;
    do
    {
        a=get_int("Height=");
    }
    while(a<1);
    return a;
}

int print(int b)
{
    int space(int line,int b);
int pound(int j);

    //循环n次
    for(int i=0;i<b;i++)
    {
        //生成空格
        space(i+1,b);
        //输出line个#和回车
        pound(i);
    }
    return 0;
}

int space(int line,int b)
{
    for(int i=b-line;i>0;i--)
    printf(" ");
    return 0;
}

int pound(int j)
{
    for(int k=j+1;k>0;k--)
        printf("#");
    printf("\n");
    return 0;
}
