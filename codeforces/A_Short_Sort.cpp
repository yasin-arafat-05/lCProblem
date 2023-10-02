#include<iostream>
#include<algorithm>
typedef long long int ll;
using namespace std;
void solve(ll n){
    while(n--){
    string a;cin>>a;
    string d = a;
    string b = a;
    string c = a;
    swap(a[0],a[1]);
    swap(b[0],b[2]);
    swap(c[1],c[2]);
    if(a=="abc" || b=="abc" || c=="abc" || d=="abc"){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    solve(n);
}