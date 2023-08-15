// Method 1
// Remember: After divide - we have read rem from bottom to top
// 10 => rem = 0101: but answer is 1010 (we need to reverse)
// we can do this using vector also
string MyReverse(string str)
{
    char temp = 0;
    for(int i=0, j=str.length()-1; i<j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}
void toBinary(int N)
{
    string rem;
    while(N!=0)
    {
        rem += to_string(N%2);
        N = N/2;
    }
    cout << MyReverse(rem);
}

// Method 2
int main()
{
    long long x = 29;
    string bin;
    while (x) {
        bin += (char)((x & 1) + '0');
        x >>= 1;
    }
    reverse(bin.begin(), bin.end());
    cout << bin << endl;
    return 0;
}

IP: 7
OP: 111