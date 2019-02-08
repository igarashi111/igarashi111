#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream SOTUS;
    SOTUS.open("cheerbook.txt");
    string textline;
    ofstream textOut("cheerbook_copy.txt");

    textOut<<"-------------------- SOTUS ---------------------"<<endl;
    while (getline(SOTUS,textline)){
        textOut<<textline<<endl;  
    }
    textOut<<"-------------------- SOTUS ---------------------"<<endl;
    SOTUS.close();
    textOut.close();
    return 0;
}