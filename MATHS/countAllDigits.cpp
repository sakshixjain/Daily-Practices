#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int count=0;


    while(n!=0){
        int dig= n%10;
        cout<<dig<<endl;
    
         count++;
         n=n/10;
    }
    cout<<"total number of count "<<count<<endl;
    return 0;
}