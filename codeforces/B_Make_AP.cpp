#include<iostream>
#include<vector>
#define yasin {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
typedef long long int ll;
using namespace std;
void solve(){
     ll a,b,c;
    cin>>a>>b>>c;
    bool f=false;
    if((b-a)==(c-b))
    f=true;
    else if((a+c)%(2*b)==0)
    f=true;
    else if((2*b-a)>0){
        if((2*b-a)%c==0)
        f=true;
    }
    if((2*b-c)>0){
    if((2*b-c)%a==0)
    f=true;
    }
    if(f){
        cout<<"YES"<<endl;
    }
    else{
       cout<<"NO"<<endl;
    }
}
int main(){
yasin 
ll t;cin>>t;
while(t--)
solve();
}