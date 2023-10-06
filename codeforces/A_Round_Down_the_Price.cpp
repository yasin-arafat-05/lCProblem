#include<iostream>
#include<vector>
#define ya ios_base::sync_with_stdio(0);
#define si cin.tie(0);
#define in cout.tie(0);
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
        ll k;cin>>k;
        if(k<1e1){
            cout<<(k-1)<<endl;
        }else if(k>=1e1 && k<1e2){
            cout<<(k-10)<<endl;

        }else if(k>=1e2 && k<1e3){
            cout<<(k-100)<<endl;

        }else if(k>=1e3 && k<1e4){
            cout<<(k-1000)<<endl;

        }else if(k>=1e4 && k<1e5){
            cout<<(k-10000)<<endl;

        }else if(k>=1e5 && k<1e6){
            cout<<(k-100000)<<endl;

        }else if(k>=1e6 && k<1e7){
            cout<<(k-1000000)<<endl;

        }else if(k>=1e7 && k<1e8){
            cout<<(k-10000000)<<endl;

        }else if(k>=1e8 && k<1e9){
            cout<<(k-100000000)<<endl;
        }else{
            cout<<(k-1000000000)<<endl;
        }
    }
}
int main(){
ya si in 
ll n;cin>>n;
solve(n);
}