#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
    int count =0;
    float sum=0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline)){
        cout<<textline<<'\n';
        sum += atof(textline.c_str());
        count++;
    }
    cout<<"Number of data = "<<count<<'\n';
    cout<<"Mean = "<<sum/count<<'\n';
    cout<<"Standard deviation = "<<pow();
    source.close();
    return 0;


}