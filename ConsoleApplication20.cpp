#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main()
{
    int c = 0;
    if (sum(2, 2) == 4)
        ++c;

    if (sum(2, -2) == 0)
        ++c;

    if (sum(INT_MAX, INT_MIN) == 1)
        ++c;
}
