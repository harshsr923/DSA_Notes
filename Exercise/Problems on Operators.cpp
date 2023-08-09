int main()
{
    int x = 1, y = 2, z = 3, a;
    a = (x, y, z);
    cout << a;
    return 0;
}

OP: 3
Desc: Comma has left to right associativity, So this expression return z.

int main()
{
    int x = 1, y = 2, z = 3, a;
    a = x, y, z;
    cout << a;
    return 0;
}

OP: 1
Desc: Comma has lower precidence than assignment operator.