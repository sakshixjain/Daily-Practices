// #include <iostream>
// using namespace std;

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;

//     return gcd(b, a % b);
//     cout << "G of " << a << " and " << b << " is " << gcd(b, a%b) << endl;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
//     return 0;
// }


// second method to find gcd of two numbers

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;

        if(a==b){
            return a;
        }

        // if a is greater
        if(a>b){
            return gcd(a - b , b);
        }
        else{
            return gcd( a, b-a);
        }


}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    return 0;
}