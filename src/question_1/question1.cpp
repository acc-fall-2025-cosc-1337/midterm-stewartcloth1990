#include "question1.h"

int get_fib_sequence(int num)
{
    if (num <= 1) return num;

    int a = 0, b = 1, c;
    for (int i = 2; i <= num; ++i) 
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

bool test_config()
{
    int num = 0;
    get_fib_sequence(num);
    return true;
}