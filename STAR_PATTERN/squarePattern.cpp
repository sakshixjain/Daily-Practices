#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<j+1<< " ";
    //     }
    //     cout<<endl;
    // }

    
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 



// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         if(j==1 || j==i || i==n){
//             cout<<"*";
//         }else{
//             cout<<" ";
//         } 
        
//     }
//     cout<<endl;
// }

// *
// **
// * *
// *  *
// *****


for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(j==1 ||j==n || i==1 || i==n){
            cout<<"*";
        }else{
            cout<<" ";
        } 
    }
    cout<<endl;
}
}