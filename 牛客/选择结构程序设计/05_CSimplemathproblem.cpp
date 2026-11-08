#include <iostream>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b;
    if(b % a == 0){
        c = a + b;
        cout<<c<<endl;
    }
    else{
        c = b - a;
        cout<<c<<endl;
    }
    return 0;
}
