#include <bits/stdc++.h>
using namespace std;
int evaluatePolynomial(int x)
{
    int coeffs[] = {1, -2, 5, 10};
    int result = coeffs[0];

    for (int i = 1; i < 4; i++)
    {
        result = result * x + coeffs[i];
    }

    return result;
}
int main()
{
    int x;
    cout << "Enter a number for x: ";
    cin >> x;

    int result = evaluatePolynomial(x);
    cout << "The polynomial value x = " << x << " is: " << result << endl;

    return 0;
}