#include <iostream>
using namespace std;
int main(){
    int n;

    while(cin>>n){
        int k = 2*n+1;
        for(int i = 1;i<=n+1;i++){
            for(int j = 0;j<k-i;j++){
                cout<<" ";
            }
            for(int j = 0;j<i;j++){
                cout<<"*";
            }
            k--;
            cout<<endl;
        }
        for(int i = n;i>=1;i--){
            for(int j = 0;j<k-i+2;j++){
                cout<<" ";
            }
            for(int j = 0;j<i;j++){
                cout<<"*";
            }
            k++;
            cout<<endl;
        }
    }
}
