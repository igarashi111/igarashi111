#include<iostream>
#include <cmath>

using namespace std;

double sg(float x,float y);

int main(){
    cout << sg(-2.5,1.1) << "\n";
    cout << sg(1,10000) << "\n";
    cout << sg(8.5,2.4) << "\n";
    cout << sg(0.1,0.0001) << "\n";
    cout << sg(10,0.007) << "\n";
    cout << sg(1,-2) << "\n";
    cout << sg(15,100) << "\n";
    cout << sg(123,5432) << "\n";
}
double sg(float x,float y){
	if(x <=0||y<=0){
		return 0;
	}else{
        if(sqrt(x*y))<=10{
            return 0;

        }else{
            if(double sg(float x,sqrt(x*y))+double sg(float y,sqrt(x*y)){
                return 0
            }
            
        }
        
		
	}
}
//Write function definition of  sg() here.