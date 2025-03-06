#include <iostream>
#include <cmath>
using namespace std;

// Define the function f(x) = x³ - 9x + 1
double f(double x)
{
    return (x * x * x) - (9 * x) + 1;
}

int main()
{
    double a, b, mid, error = 0.001; // error = 0.001 for 3 decimal places accuracy

    // Step 1: Find initial interval [a,b] where root lies
    cout << "Enter initial interval [a,b] where f(a) and f(b) have opposite signs:\n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // Check if initial interval is valid
    if (f(a) * f(b) >= 0)
    {
        cout << "Invalid interval! f(a) and f(b) must have opposite signs." << endl;
        return 1;
    }

    // Bisection Method
    do
    {
        // Calculate midpoint
        mid = (a + b) / 2;

        // If f(mid) is zero, we found exact root
        if (f(mid) == 0)
        {
            break;
        }
        // If f(a) * f(mid) < 0, root lies in [a, mid]
        else if (f(a) * f(mid) < 0)
        {
            b = mid;
        }
        // If f(mid) * f(b) < 0, root lies in [mid, b]
        else
        {
            a = mid;
        }

    } while (abs(b - a) > error); // Continue until interval is smaller than error

    // Round to 3 decimal places and display result
    cout.precision(3);
    cout << "Root of the equation x^3 - 9x + 1 = 0 is: " << fixed << mid << endl;

    return 0;
}