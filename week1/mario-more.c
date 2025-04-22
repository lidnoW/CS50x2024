#include<stdio.h>
#include<cs50.h>

int getint(void);
void print(int line);
int main(void)
{
    //提醒用户输入正确类型
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
void print(int n)
{
    void space(int line,int j);
    void hash(int j);
    //循环n次
    for(int i=0;i<n;i++)
    {
        //打印空格
        space(n,i);
        //打印#
        hash(i+1);
        //打印两个空格
        printf("  ");
        hash(i+1);
        //换行
        printf("\n");
    }
}
void space(int line,int j)
{
    for(int k=line-j-1;k>0;k--)
        printf(" ");
}
void hash(int j)
{
    for(int k=0;k<j;k++)
        printf("#");
}
