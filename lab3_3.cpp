#include<iostream>

using namespace std;


int main()
{
    float x=6;
    float sum=0;
    while(x<=19){
        sum=sum+1/x;
        x=x+1;
    }
    cout<<sum;
    return 0;
}