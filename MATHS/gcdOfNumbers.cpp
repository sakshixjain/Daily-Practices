#include <iostream>
#include <vector>
using namespace std;
int main(){
     int n1,n2;
     int gcd=1;
    cout<<"enter the n1 and n2"<<endl;
    cin>>n1>>n2;
   
 
    for(int i=1; i<=n1 && i<=n2; i++){
        if(n2%i==0 && n1%i==0){
            gcd=i;
        }
    }
    cout<<"the GCD of "<<n1<<" and "<<n2<<" is: "<<gcd<<endl;
    return 0;
    
}