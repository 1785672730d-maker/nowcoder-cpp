#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    long long ans = 0;
    int a[100005],b[100005];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        int l;
        cin>>l;
        ans += l;
        b[i] = a[i] - l;
    }
    sort(b,b+n);
    for(int i = n - k ; i<n ;i++){
        ans += b[i];
    }
    cout<<ans;
    return 0;
}
