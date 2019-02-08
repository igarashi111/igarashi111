#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
    string data;
    double datad;
    float sum=0;
    ifstream dataIn;
    dataIn.open("score.txt");
    int count =0;
    while (getline(dataIn,data)){
        count++;
    }
    double score[count];
    dataIn.close();
    dataIn.open("score.txt");

    double sum=0;
    for(int i=0;i<=count;i++){
        getline(dataIn,data);
        datad=atof(data.c_str());
        sd[1] += pow(datad-avg,2);
    }
    sd[0]=sqrt(sd[1]/count);

    cout<<"Number of data = "<<count<<endl;
    cout<<"Mean = "<<avg<<endl;
    cout<<"Standard deviation = "<<sd[0];
    

    return 0;


}