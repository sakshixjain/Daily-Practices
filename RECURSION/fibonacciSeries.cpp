#include <iostream>
using namespace std;

int printF(int n){
    if(n==0) return 0;
    if(n==1){
        return 1;
    }
    
    return  printF(n-1) + printF(n-2);
    // cout<<ans<<" ";
}

int main(){
    int n; 
    cout<<"enter the nmuber"<<endl;
    cin>>n;

    cout<<printF(n)<<endl;
}