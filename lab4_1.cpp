#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    double x;
    cout<<"Enter x ";
    cin>>x;
    double y = 3*pow(x,3)+2*2.71828 + pow(2,2*x+1)+pow(x*x+1,0.5);
    cout<<"Result y"<<y; 
    cout<<"y";
    return 0;
}