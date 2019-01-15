#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int x)
{
    int y=2 ;
    while(y<x)
    {
        if(x%y ==0 ){
            return y ;
        }else{
            y++;
        }
    }
}

int main(){
    int x;
    cout<<"input";
    cin>>x;
    cout<<"Expected output ="<<findDivisor(x)<<;
    
    
    return 0;
}