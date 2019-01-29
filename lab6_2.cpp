#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout<<"Me: ";
    cin>>name;
    cout<<"Fahsai: Wow!!! Luke Skywalker that is a really cool name.\n";
    
    int id;
    cout<<"Fahsai: I think you are Engineering student. What is your student ID?\n";
    cout<<"Me: ";
    cin>>id;
    cin.ignore();
    cout<<"Fahsai: I think you may be GEAR "<<id/10000000<<".  I have a free movie tickets for you.\n";
    cout<<"Fahsai: Let's go to cinema together!!!\n";
    

    string movie;
    cout<<"Fahsai: What movie do you want to watch?\n";
    cout<<"Me: ";
    cin>>movie;
    cin.ignore();
    
    string day;
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<"Me: \n";
    cin>>day;
    cout<<"Fahsai: Next "<<day<<"....that is OK!!! I'm looking forward to watch Star Wars VII with you.\n";
    cout<<"Me: \n";
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \(^ ^)/ \n";








    return 0;
}