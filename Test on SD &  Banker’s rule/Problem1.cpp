#include <bits/stdc++.h>
using namespace std;

int countSignificantDigits(string s)
{
    int count = 0, count1 = 0;
    bool found1 = false, found2 = false, dot = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
            dot = true;
        if (!dot)
        {
            if (isdigit(s[i]))
            {
                if (s[i] != '0')
                    found1 = true;
                if (found1)
                    count++;
            }
        }
        else
        {
            if (isdigit(s[i]))
            {
                if (s[i] != '0')
                    found2 = true;
                else
                    count1++;
                if (found2)
                    count++;
            }
        }
    }
    return found2 ? count : count + count1;
}

int main()
{
    string s;
    cin >> s;
    cout << countSignificantDigits(s) << endl;
    return 0;
}
