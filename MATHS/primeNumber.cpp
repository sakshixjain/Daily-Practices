#include <iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int count=0;

for(int i=1; i<=n; i++){
    if(n%i==0){
        count++;
    }
}
if(count==2){
    cout<<"n is prime number"<<endl;
}
else{
    cout<<"n is not a prime number"<<endl;
}
    return 0;
}