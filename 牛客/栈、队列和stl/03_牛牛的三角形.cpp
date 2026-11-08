#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    long long a[105];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i = 0; i< n - 2; i++){
        if(a[i] + a[i+1] > a[i+2]){
            cout<<a[i]<<' '<<a[i+1]<<' '<<a[i+2]<<endl;
            return 0;
        }
    }
    cout<<"No solution"<<endl;
    return 0;
}
