#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1=30;
    int num2=60;
    int gcd;
    for(int i=1;i<=num1||i<=num2;i++ ){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    cout<<"Greatest Common Divisor of "<<num1<<" and "<<num2<<" is "<<gcd;
    return 0;
}