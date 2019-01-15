#include<iostream>
#include<cmath>
using namespace std;

double findDistance(double u,double a,double t){
    double s = u*t+0.5*a*t*t;
    return s;
}

int main(){
    cout<<"Expected output ="<<findDistance(0,0.5,1)<<"\n";
    cout<<"Expected output ="<<findDistance(1.5,-1,2)<<"\n";
    cout<<"Expected output ="<<findDistance(5,4,3);

    return 0;
}