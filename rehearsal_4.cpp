#include<iostream>
#include<string>
using namespace std;



string compress(string x){
    string z="";

    if(int i=1,4,7,10,13;i<x.size();i++){
            z=z+x[i];
        }
    
    
    return z;
}
    
int main(){
    
	cout << compress("ABCDEFGHIJKLMN") << "\n";
	cout << compress("123456") << "\n";
	cout << compress("HelloWorld") << "\n";
	cout << compress("BNK48 ") << "\n";
	cout << compress("COMPROG261102") << "\n";
	cout << compress("A") << "\n";	
	cout << compress("AB") << "\n";	
    cout << compress("ABC") << "\n";	
    cout << compress("ABCD") << "\n";	
	
	return 0;	
}