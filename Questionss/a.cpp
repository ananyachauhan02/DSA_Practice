#include <bits/stdc++.h>
string fact(int n)
{
    string s, fin;
    if (n == 0 || n == 1)
    {
        s.push_back('1');
        return s;
    }
    s = fact(n - 1);
    int carr = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        int temp = s[i] - '0';
        temp *= n;
        fin.push_back(((carr + temp) % 10) + '0');
        carr = (carr + temp) / 10;
    }
    while (carr)
    {
        fin.push_back((carr % 10) + '0');
        carr /= 10;
    }
    reverse(fin.begin(), fin.end());
    return fin;
}
string calculateFactorial(int n)
{
    return fact(n);
}