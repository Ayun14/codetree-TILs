#include <iostream>
using namespace std;

int main() {
    int n = 4;
    while (n--)
    {
        int inp, sum = 0;
        for (int i = 0; i < 4; ++i)
        {
            cin >> inp;
            sum += inp;
        }
        cout << sum << '\n';
    }    
    return 0;
}