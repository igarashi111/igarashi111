//status = "ONE-NIGHT-STAND";
#include<iostream>
using namespace std;

int main(){
    int age,height,money;
    string status;
    cout<<"Enter age: ";
    cin>>age;
    if(age<20){
        cout<<"Enter height: ";
        cin>>height;
        if(height<160){
            status="unfriend";
        }else if(height>=160&&height<175){
            status="friend";
        }else{
            cout<<"Enter money: ";
            cin>>money;
            if(money>69000000)
            status="married";
            else status="one night stand good good";
        }
    }else{
        if(age<30){
            cout<<"Enter money: ";
            cin>>money;
            if(money>10000000)status="best friend";
            else status="unfriend";
        }
        cout<<status;
    }
    return 0;
}