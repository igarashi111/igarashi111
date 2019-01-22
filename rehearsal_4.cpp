#include<iostream>
#include<string>
using namespace std;



string compress(string x){
    int i=3;
    string chosen = "";
    chosen = x[0];
    while(i<=x.size()){
        chosen=chosen+x[i];
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