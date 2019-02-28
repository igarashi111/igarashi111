#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

void stat(const double a[],int N,double b[]){
    b[2]=-99999;
    b[3]=99999;
    for(int i=0;i<N;i++){
        b[0] = b[0] + a[i]/N;
        if(a[i] < b[3]) b[3] = a[i];
        if(a[i] > b[2]) b[2] = a[i];
        b[1] = b[1] + pow(a[i],2);
        }
        b[1] = sqrt((b[1]/N) - pow(b[0],2));
    }
