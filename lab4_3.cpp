#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int x)
{
    int min ;
    if(x>= 1){
        min = x;
    }
    int i =min;
    while(i>0){
        if(x%i==0 ){
            return i;
        }else{
            i--;
        }
    }
}

int main(){
    int x;
    cout<<"input";
    cin>>x;
    cout<<"Expected output ="<<findDivisor(x);
    
    
    return 0;
}