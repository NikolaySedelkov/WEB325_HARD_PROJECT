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

int main()
{
    cout << "Hello World!\n";
}
