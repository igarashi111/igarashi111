#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    double GPA;
    cout<<"What is your name?: ";
    cin>>name;
    cout<<"What is your GPA?: ";
    cin>>GPA;

    
    if(GPA>=3.5){
        cout<<name<<"InW Jrim Jrim!!!";
        
    if(GPA<3.5){
         cout<<"Try harder,"<<name;
        

        

    }
    return 0;
}