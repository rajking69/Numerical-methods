#include <bits/stdc++.h>
using namespace std;
int sigDigits(string n)
{
    int c = 0;
    bool f = false;
    for (char x : n)
    {
        if (isdigit(x))
        {
            if (x != '0' || f)
            {
                c++;
                f = true;
            }
        }
    }
    return c;
}
int main()
{
    string n;
    cin >> n;
    cout << sigDigits(n) << endl;
    return 0;
}