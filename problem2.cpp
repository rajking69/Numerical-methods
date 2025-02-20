#include <bits/stdc++.h>
using namespace std;
double roundBankers(double num, int n)
{
    double factor = pow(10, n);
    double scaled = num * factor;
    double fractional = scaled - floor(scaled);
    if (fractional == 0.5)
    {
        if ((int)floor(scaled) % 2 == 0)
        {
            return floor(scaled) / factor;
        }
        else
        {
            return ceil(scaled) / factor;
        }
    }
    else
    {
        return round(scaled) / factor;
    }
}
int main()
{
    double num;
    int n;
    cin >> num;
    cin >> n;
    double rounded = roundBankers(num, n);
    cout << fixed << setprecision(n) << rounded << endl;
    return 0;
}
