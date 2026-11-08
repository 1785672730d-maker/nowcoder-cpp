#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string a,b;
        cin>>a>>b;
        int x = a.size();
        int y = b.size();
        int c[105] = {0};
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                int n = a[x - 1 - i] - '0';
                int m = b[y - 1 - j] - '0';
                c[i+j] += n * m;
            }
        }
        for(int i=0;i<x+y-1;i++){
            c[i+1] += c[i] / 10;
            c[i] %= 10;
        }
        int k = x + y - 1;
        while(k > 0 && c[k] == 0){
            k--;
        }
        for(int i=k;i>=0;i--){
            cout<<c[i];
        }
        cout<<endl;
    }
    return 0;
}
