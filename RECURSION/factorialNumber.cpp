#include <iostream>
using namespace std;

void printFact(int n, int fact){
    if(n==0){
        cout<<fact<<endl;
        return;
    }

    if(n==1){
        cout<<fact<<endl;
        return;
    }

    fact = fact*n;
    printFact(n-1, fact);
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int fact =1;

    printFact(n, fact);
    return 0;

}