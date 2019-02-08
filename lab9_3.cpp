#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string data;
    double datad;
    ifstream dataIn;
    dataIn.open("score.txt");

    double count =0.0;
    while (getline(dataIn,data)){
        count++;
    }
    double score[count];

    dataIn.close();
    dataIn.open("score.txt");

    double sum=0.0;
    for(double i=0;i<=count;i++){
        getline(dataIn,data);
        datad=atof(data.c_str());
        sum += datad;
    }
    double avg=sum/count;

    dataIn.close();
    dataIn.open("score.txt");

    double sd[2]={0.0,0.0};
    for(double i=0;i<=count;i++){
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