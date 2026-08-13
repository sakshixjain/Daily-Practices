#include <iostream>
using namespace std;

// void printTable(int n, int i){
//       if(i>10) return;

//     cout<<""<<n<<"*"<<i<<" = "<<n*i<<endl;

//     return printTable(n, i+1);

// }

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;

    // printTable(n,1);
int i=1;
    while(i<=10){
        cout<<n*i<<endl;
        i++;
    }
    
}