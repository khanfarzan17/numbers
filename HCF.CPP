#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1=20;
    int n2=50;
    int hcf=1;
    for(int i=1;i<=n1||i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    cout<<"HCF OF "<<n1<<" AND "<<n2<<" WILL BE "<<hcf;
}