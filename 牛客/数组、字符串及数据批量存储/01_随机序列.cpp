#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        double k;
        long long sum = 0;
        double sum1 = 0;
        int n;
        cin>>n;
        long a[100005];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int i = 0;i<n;i++){
            sum += a[i];
        }
        k = (double)sum/n;
        for(int i = 0;i<n;i++){
            sum1 += pow(a[i]-k, 2);
        }
        double ans = sum1/n;
        sort(a,a+n);
        cout<<a[n-1]-a[0]<<" ";
        cout<<fixed<<setprecision(3)<<ans<<endl;
    }
}
