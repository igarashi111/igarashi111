#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

template <typename T>
int countIf(T data[],int size,T key){
    
	

}

 
int main(){
	int a[12] = {1,0,2,3,4,0,1,0,0,5,1,9};
	cout << countIf(a,12,0) << "\n";
	cout << countIf(a,12,8) << "\n";
	
	char b[6] = "CPECMU";
	cout << countIf(b,6,'C') << "\n";
	cout << countIf(b,6,'E') << "\n";
	
	return 0;
}
