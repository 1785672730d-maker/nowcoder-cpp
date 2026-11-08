#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    string s[21];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    sort(s,s+n,[](const string &a, const string &b) -> bool{
        return a+b > b+a;
    });
    for(int i = 0; i < n; i++){
        cout<<s[i];
    }
    return 0;
}
