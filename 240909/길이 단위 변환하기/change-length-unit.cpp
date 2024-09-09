#include <iostream>
using namespace std;

float Ft(float ft)
{
    return ft * 30.48;
}

float Mi(float mi)
{
    return mi * 160934.0;
}

int main() 
{
    cout << fixed;
    cout.precision(1);

    float ft = 9.2f, mi = 1.3f;

    cout << ft <<"ft = " << Ft(ft) << "cm\n";
    cout << mi <<"mi = " << Mi(mi) << "cm";

    return 0;
}