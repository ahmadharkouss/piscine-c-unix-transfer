unsigned long fibo_iter(unsigned long n)
{
    unsigned long f = 0, s = 1, result, i;
    if (n <= 1)
    {
        return n;
    }
    for (i = 2; i <= n; i++)
    {
        result = f + s;
        f = s;
        s = result;
    }
    return result;
}
