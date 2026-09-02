#include <iostream>
#include <vector>
using namespace std;
int main(){
     int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    vector<int> divisors;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            divisors.push_back(i);
        }
    }
    cout<<"divisors of "<<n<<" are: ";
    for(int divisor : divisors){
        cout<<divisor<<" ";
    }
    cout<<endl;
    return 0;
}