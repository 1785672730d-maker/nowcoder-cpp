#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<i;j++){
            if(k<=9){
                cout<<"   "<<k;
            }
            else if(k<=99){
                cout<<"  "<<k;
            }
            else if(k<=999){
                cout<<" "<<k;
            }else{
                cout<<k;
            }
            k++;
        }
        cout<<endl;
    }
}
