#include <iostream>
     using namespace std;
     int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            for(int i = 1;i<=(n+1)/2;i++){
                for(int j = 0;j<(n+1)/2-i;j++){
                    cout<<" ";
                }
                for(int j = 0;j<(2*i)-1;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
            for(int i = (n+1)/2 - 1;i>=1;i--){
                for(int j = 0;j<(n+1)/2-i;j++){
                    cout<<" ";
                }
                for(int j = 0;j<(2*i)-1;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
        }
     }
