// Greatest Common Divisor
int gcd(int a, int b)
{
    int g = 1;
    for (int i=2;i<=a;i++)
    {
        if (a%i == 0 && b%i == 0)
            g = i;
    }
        
    return g;
}

IP: 10 15
OP: 5

//User function Template for C++

int LCM(int a, int b)
{
    for (int i = 1; ; i++)
    {
        if (i%a == 0 && i%b == 0)
        {
            return i;
        }
    }
}

IP: 10 15
OP: 30