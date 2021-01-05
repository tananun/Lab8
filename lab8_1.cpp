#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,inr,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> inr;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	double INR = loan*inr/100;
	double tt = loan+INR;
	double nb = tt-pay;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double preb = loan;
	cout << fixed << setprecision(2); 
	int i = 1;
	while(nb >= 0){
	cout << setw(13) << left << i; 
	cout << setw(13) << left << preb;
	cout << setw(13) << left << INR;
	cout << setw(13) << left << tt;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << nb;
	preb = nb;
	INR = preb*inr/100;
	tt = preb + INR;
	nb = tt-pay;
	i++;
	cout << "\n";
	}
	pay = tt;
	nb = tt-pay;
	cout << setw(13) << left << i; 
	cout << setw(13) << left << preb;
	cout << setw(13) << left << INR;
	cout << setw(13) << left << tt;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << nb;
		
	
	return 0;
}
