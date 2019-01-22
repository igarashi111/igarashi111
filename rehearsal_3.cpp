#include<iostream>
#include<cmath>
using namespace std;

double sumSqrt(double x){
    x =0.0;
    while(x>0){
        x=1/pow(2,0.5);
        x++;
    }
    
    return 0;
}

int main()
{
    double x=1;
    float sum=0;
    while(x){
        sum=sum+1/x;
        x=x+1;
    }
    cout<<sum;
    return 0;
}