#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double NewBalance,Money,Interest,InterestAmount,CanPayPerYear,RatePerYear;
	cout <<"Enter initial: ";
	cin >> Money;
	cout <<"Enter interest rate per year (%): ";
	cin >> RatePerYear;
	cout <<"Enter amount you can pay year: ";
	cin >> CanPayPerYear;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	int year = 1;
	NewBalance = Money;
	while(NewBalance != 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << NewBalance;
	InterestAmount = (NewBalance * RatePerYear)/100;
	cout << setw(13) << left << InterestAmount;
	NewBalance = NewBalance + InterestAmount;
	cout << setw(13) << left << NewBalance;
	if(CanPayPerYear > NewBalance) CanPayPerYear = NewBalance;
	cout << setw(13) << left << CanPayPerYear;
	NewBalance = NewBalance - CanPayPerYear;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	year ++;
	}
	return 0;
}
