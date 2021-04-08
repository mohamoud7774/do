#include <stdio.h>
#include <stdint.h>

//fibonacci series function prototype
void fibo_series(int f);
int main(void)
{
    // the function will generate automaticlly any term of fibonacci numbers
    fibo_series(5);
}
void fibo_series(int f)
{
    //fibonacci series
    uint64_t n2, n1, x;
    n1 = 0;
    n2 = 1;
    x = 0;
    for (int i = 0; i < f - 2; i++)
    {
        x = n2;
        n2 = n1 + n2;
        n1 = x;
        printf("the %ith term is: %ld\n ", f, n2);
    }
   

}