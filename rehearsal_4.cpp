#include<iostream>
#include<string>
using namespace std;



string compress(string x){
    int i=0;
    string chosen;
    while((i+1)<=x.size()){
        chosen=x[i];
        i+=3;
    }
    return chosen;
}
    
int main(){
    string x;
    cout<<"Enter Word: ";
    cin>>x;
    cout<<"=> "<<compress(x);
	return 0;	
}