#include <iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    cin>>x;
    int a[1000005];
    for(int i = 1;i<=n;i++){
        a[i] = i;
    }
    int cnt = 0;
    for(int i = 1;i<=n;i++){
        while(a[i] > 0){
            if(a[i] % 10 == x){
                cnt++;
            }
            a[i] /= 10;
        }
    }
    cout<<cnt<<endl;
}
