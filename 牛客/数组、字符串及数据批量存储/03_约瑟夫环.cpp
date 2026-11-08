#include <iostream>
using namespace std;
int main(){
    int n,k,m;
    cin>>n>>k>>m;
    bool a[105];
    for(int i = 0;i<n;i++){
        a[i] = true;
    }
    int remain = n;
    int cnt = 0;
    int p = k;
    while(remain > 1){
        if(a[p] == true){
            cnt++;
        }
        if(cnt == m){
            a[p] = false;
            remain--;
            cnt = 0;
        }
        p = (p+1) % n;
    }
    for(int i = 0;i<n;i++){
        if(a[i] == true){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
