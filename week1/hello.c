#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // getstring
    string a = get_string("What's your name? ");
    printf("Hello, %s\n", a);
}
