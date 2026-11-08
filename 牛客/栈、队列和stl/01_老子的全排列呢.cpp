#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s = "12345678";
    do{
        for(int i = 0; i <s.size(); i++){
            if(i !=0 && i<s.size()-1){
                cout<<' ';
            }
            cout<<s[i];
        }
        cout<<endl;
    }while(next_permutation(s.begin(), s.end()));
}
