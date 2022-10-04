unsigned int digit(int n, int k)
{
    unsigned int f = 0;
    if ((k <= 0) || (n <= 0))
    {
        return 0;
    }
    for (int i = 0; i < k; i++)
    {
        f = n % 10;
        n /= 10;
    }
    return f;
}
