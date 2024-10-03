#include <iostream>
using namespace std;

int main() {
    int row = 5, col = 3;
    for (int i = 0; i < row; ++i)
    {
        char c;
        for (int j = 0; j < col; ++j)
        {
            cin >> c;
            cout << (char)(c - 32) << ' ';
        }
        cout << endl;
    }
    return 0;
}