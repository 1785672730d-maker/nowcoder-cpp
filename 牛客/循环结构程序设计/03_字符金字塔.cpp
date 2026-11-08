#include <iostream>
using namespace std;
int main(){
     char ch;
     cin>>ch;
     char t = ch-'A'+1;
     for(int i = 1;i<=t;i++){
        for(int j = 0;j<t-i;j++){
            cout<<" ";
        }
        for(int k = 0;k<i;k++){
            cout<<(char)(k+'A');
        }
        for(int k = i-2;k>-1;k--){
            cout<<(char)(k+'A');
        }
        cout<<endl;
        }
        for(int i =t-1;i>=1;i--){
        for(int j = 0;j<t-i;j++){
            cout<<" ";
        }
        for(int k = 0;k<i;k++){
            cout<<(char)(k+'A');
        }
        for(int k = i-2;k>-1;k--){
            cout<<(char)(k+'A');
        }
        cout<<endl;
        }
     }
