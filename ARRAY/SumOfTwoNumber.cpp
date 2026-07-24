#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int carry = 0;
    int result = 0;
    int place = 1;

    while (a != 0 || b != 0 || carry != 0) {
        int dig1 = (a != 0) ? (a % 10) : 0;
        int dig2 = (b != 0) ? (b % 10) : 0;

        int total = dig1 + dig2 + carry;
        result += (total % 10) * place;
        carry = total / 10;

        a /= 10;
        b /= 10;
        place *= 10;
    }

    cout << "Sum = " << result << endl;
    if (carry != 0) {
        cout << "Carry = " << carry << endl;
    }

    return 0;
}