#include<iostream>
using namespace std;


void displaystar()
{
	cout << "xxxxxxxxxxxxxxxxxxxxxxx\n";
}

void main()
{
	displaystar();

	//somecalculation
	//initialize an int x with a value of 10
	//initialize an int y with a value of 38
	int x = 10, y = 38;
	//add this two value and display the total
	//int total = 0;
	//total = x + y;
	cout << x + y << endl;
	
	int loanAmount;
	double interestRate;
    int years;
	int monthlyPayment;

	cout << "please enter loan amount (RM)" << endl;
	cin >> loanAmount;
	cout << "please enter interest rate (%)" << endl;
	cin >> interestRate;
	cout << "please enter number of years" << endl;
	cin >> years;
	//calculate
	monthlyPayment = ((loanAmount * (interestRate / 100) * years) + loanAmount) / (years * 12);
	cout << monthlyPayment << endl;
		displaystar();

}