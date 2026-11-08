#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[105];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

        if(a[n-2] < a[n-1] && a[n-1] != 15 && n >= 2 || a[n-1] == 0){
            cout<<"UP"<<endl;
        }
        else if(a[n-2] > a[n-1]  && n >= 2  && a[n-1] != 0|| a[n-1] == 15 ){
            cout<<"DOWN"<<endl;
        }
        else if(n == 1)
            cout<<"-1"<<endl;
    return 0;
}
