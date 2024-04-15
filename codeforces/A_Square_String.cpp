#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll t;cin>>t;
while(t--){
    string k;cin>>k;
    if(k.length()%2==0){
        string x,y;
        for(int i=0;i<k.size()/2;i++) x+=k[i];
        for(int i=k.size()/2;i<k.size();i++) y+=k[i];
        if(x==y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
  }
}