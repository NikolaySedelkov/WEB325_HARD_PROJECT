#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int mas[], int size) {
    int result = 0;
    for (int i = 0; i < size; ++i)
        result += mas[i];

    return result;
}

void testSum()
{
    int c = 0;
    if (sum(2, 2) == 4)
        ++c;

    if (sum(2, -2) == 0)
        ++c;

    if (sum(INT_MAX, INT_MIN) == 1)
        ++c;
}

int main() {
    cout << "Hello world!";
}
