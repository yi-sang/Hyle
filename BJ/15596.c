long long sum(int *a, int n)
{
    long long ret;
    long long i;

    i = -1;
    ret = 0;
    while(i++ < n - 1)
    {
        ret = ret + *(a + i);
    }
    return (ret);
}