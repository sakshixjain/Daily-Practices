#include <iostream>
using namespace std;

int main(){
    int dig = 1234;
int sum=0;
    while(dig >=0){
        if(dig == 0){
            break;
        }
    int mod = dig % 10;
    dig = dig/10;
     sum = sum + mod;

     cout<< "Sum of digits is: " << sum << endl;
    }
    
}