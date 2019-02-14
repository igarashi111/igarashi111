#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    string grade[9]={"A","B+","B","C+","C","D+","D","F","W"};
    int x=rand()%9;
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout<<"You will get "<<grade[x]<< " in this 261102.";
}
