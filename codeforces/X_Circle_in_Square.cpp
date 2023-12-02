#include<iostream>
#include<math.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k;cin>>k;
    for(int i=0;i<k;i++){
        double a;cin>>a;
        double PI = 2* acos(0.0);
        double sq = (a+a)*(a+a);
        double tri = PI*a*a;
        double ans = (sq-tri);
        printf("Case %d: %.2f \n",(i+1),ans);
    }
}