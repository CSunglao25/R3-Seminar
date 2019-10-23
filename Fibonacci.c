#include <stdio.h>

int fib(int term, int n1, int n2)
{
    (term >= 2)?fib(term-1,n2,n1+n2):1;
}

int main()
{
    int n;
    for(n = 1;n <= 10;n++)
         printf("%d\n",fib(n,1,1));
    return 0;
}


