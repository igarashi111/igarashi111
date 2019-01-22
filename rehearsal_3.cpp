#include<iostream>
#include<cmath>
using namespace std;

double sumSqrt(double x){
    double sum=0;
    while(x>0){
        sum=sum+1/sqrt(x);
        x--;
    }
    return 0;
}

int main()
{
    double x;
    cout<<"input= ";
    cin>>x;
    cout<<"out put= "<<sumSqrt(x);
    return 0;
}