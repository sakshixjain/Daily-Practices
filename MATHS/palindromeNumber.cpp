#include <iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int rev= 0;

    int original =n; 
    while(n!=0){
        int dig= n%10;
        rev= rev*10+dig;
        n=n/10;
    }
    if(original==rev){
        cout<<"the number is palindrome"<<endl;
    }
    else{
        cout<<"the number is not palindrome"<<endl;
    }
}