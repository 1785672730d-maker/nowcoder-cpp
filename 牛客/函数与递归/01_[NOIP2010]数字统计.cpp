#include <iostream>
using namespace std;
int main(){
    int L,R;
    cin>>L>>R;
    int cnt=0;
    for(int i=L;i<=R;i++){
        int t = i;
        while(t>0){
            if(t % 10 == 2){
                cnt++;
            }
            t /= 10;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
