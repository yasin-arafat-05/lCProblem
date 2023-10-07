#include<iostream>
#include<vector>
#define yasin {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
typedef long long int ll;
using namespace std;
void solve(){
    ll a,b,c;cin>>a>>b>>c;
    char test[] = "abcdefghijklmnopqrstuvwxyz";
    char ans[a];
    for(int i=0;i<c;i++){
        ans[i] = test[i];
    }
    ll dist = 0;
    for(int i=0;i<a;i++){
        cout<<ans[dist];
        dist++;
        if(dist==c){
            dist = 0;
        }
    }
    cout<<endl;
}
int main(){
yasin 
ll t;cin>>t;
while(t--){
solve();
}
}