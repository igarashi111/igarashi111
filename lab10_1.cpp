#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    bool taken[9];

    int i=0;
    for(i=0;i<10;i++){
        taken[i]=false;
    }
    int takenCount=5;
    while(takenCount>0){
        int random=(rand()*100)%10;
        
    }
}