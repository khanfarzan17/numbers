#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1=12;
    int num2=56;
    int lcm;
    for(int i=1;i<=num1||i<num2;i++){
        if(num1%i==0 && num2%i==0){
            lcm=i;
        }
    }
    lcm=(num1*num2)/lcm;
    cout<<" LCM OF "<<num1<<" AND "<<num2<<" IS "<<lcm;
    return 0;

}