#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double a, b, c;
	cout << "Enter initial loan: ";
	cin >> a;
	cout << "Enter interest rate per year (%): ";
	cin >> b;
	cout << "Enter amount you can pay per year: ";
	cin >> c ;

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
	
    cout << fixed << setprecision(2);

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int year = 1;
	while(a > 0){
	     double interest = a*(b/100.0);
	     double total = a + interest ;
	     double payment = (total < c) ? total : c ;
	     double ad = total - payment ;
	
	    
    	 cout << setw(13) << left << year; 
	     cout << setw(13) << left << a;
	     cout << setw(13) << left << interest;
	     cout << setw(13) << left << total;
	     cout << setw(13) << left << payment;
	     cout << setw(13) << left << ad;
	     cout << "\n";	
	
	     a = ad;
	     year ++;
	}
	
	return 0;
}
