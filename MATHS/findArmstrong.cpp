// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    cout << "Start small. Ship something.";

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    int count=0;
    int original= n;

   while(n!=0){
    int dig= n%10;
    count += dig*dig*dig;
    // cout<<count<<" ";
    n=n/10;
   }
   if(count==original){
    cout<<"yes";
   }
   else{
    cout<<"No";
   }

    return 0;
}