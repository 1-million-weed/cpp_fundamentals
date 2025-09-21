#include <iostream>

using namespace std;

double square(double x)
{
    return x * x;
}

double derivative(double x)
{
    return 2 * x;
}

double sqrt(double y)
{
    double x0 = 1.0;
    double x1 = x0 + (y - square(x0)) / derivative(x0);
    while (x1 != x0) {
        x0 = x1;
        x1 = x0 + (y - square(x0)) / derivative(x0);
        cout << "x1 = " << x1 << " x0 = " << x0 << endl;
    }
    return x1;
}


int main()
{
    cout << "Enter a value to compute the sqrt of (<= 0 to stop): ";
    double y;
    cin >> y;
    if (y <= 0)
        return 0;
    double x = sqrt(y);
    cout << "The sqrt of " << y << " is about " << x << endl;
}