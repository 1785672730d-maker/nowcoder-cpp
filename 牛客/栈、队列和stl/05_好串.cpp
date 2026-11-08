#include <iostream>
#include <string>
using namespace std;
int main(){
    string t;
    cin>>t;
    int cnt = 0;
    int cnt1 = 0;
    for(int i = 0; i < t.size(); i++){
        if(t[i] == 'a'){
            cnt++;
            if (cnt1 > cnt) {
                    cout << "Bad" << endl;
                    return 0;
            }
        }
        if(t[i] == 'b'){
            cnt1++;
            if (cnt1 > cnt) {
            cout << "Bad" << endl;
            return 0;
            }
        }
    }
    if(cnt == cnt1){
        cout<<"Good"<<endl;
    }
    else{
        cout<<"Bad"<<endl;
    }
    return 0;
}
