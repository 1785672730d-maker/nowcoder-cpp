#include <iostream>
using namespace std;
int main(){
    int L,M;
    cin>>L>>M;
    bool a[10005];
    for(int i = 0;i<=L;i++){
        a[i] = true;
    }
    while(M--){
        int x,y;
        cin>>x>>y;
        for(int i = x;i<=y;i++){
            a[i] = false;
        }
    }
    int cnt = 0;
    for(int i = 0;i<=L;i++){
        if(a[i] == true){
            cnt++;
        }
    }
    cout<<cnt<<endl;
return 0;
}
