#include<iostream>
#include<cmath>
using namespace std;

double sumSqrt(double x){
    double x =pow(2,0.5);
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