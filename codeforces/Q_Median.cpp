#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int med = (a+c)/2;
    if(med<b){
        printf("No");
    }else{
        cout<<"Yes";
    }
}