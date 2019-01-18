#include<iostream>
#include<string>
using namespace std;



string mixText(string x,string y){
    string z="";
    if(x.size()==y.size()){
        for(int i=0;i<x.size();i++){
            z=z+x[i]+y[i];
        }
    }
    else
    {
        z="E";
    }
    return z;
}
    
int main(){
    
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}