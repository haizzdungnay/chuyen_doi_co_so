//chuyển đổi số nguyên N sang hệ cơ số B (2 <= B <= 32) bất kỳ.
#include <iostream>
#include <string>
using namespace std;
string convertToBase(int number, int base) {
    string result = "";
    while (number > 0)
    {
        int remainder = number % base;
        char digit;

        if (remainder < 10)
        {
            digit = '0' + remainder;
        }
        else
        {
            digit = 'A' + (remainder - 10);
        }

        result = digit + result;
        number /= base;
    }

    return result;
}
int main() {
    int number, base;
    cin >> number;
    cout << endl;
    cin >> base;
    string result = convertToBase(number, base);
    cout << result << endl;
    return 0;
}
