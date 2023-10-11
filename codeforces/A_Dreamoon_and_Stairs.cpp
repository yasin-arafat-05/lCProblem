#include<iostream>
#include<vector>
#define yasin {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
typedef long long int ll;
using namespace std;
void solve(){
   ll a,b,ans=0;cin>>a>>b;
    if(b>a){
        cout<<-1<<endl;
    }else{
        if(a%2==0){
            ans = a/2;
        }else{
            ans = a/2 + 1;
        }

        ll rem = ans/b;
        if(ans%b==0){
            cout<<(rem*b)<<endl;
        }else{
            cout<<(b*(rem+1))<<endl;
        }
    }
}
int main(){
yasin 
solve();
}