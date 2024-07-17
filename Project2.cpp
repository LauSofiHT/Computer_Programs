// Laura Hernandez
// Dr. Nina Javaher
// 07/05/24
// Menu Driven Program
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

// function prototypes for choice 1
double USD_to_EUR(double);
void choice_1();
void print_EUR(double);

// function prototypes for choice 2
double Cdeg_to_Fdeg(double);
void choice_2();
void print_Fdeg(double);

// function prototypes for choice 3
int letter_counter(string);
void choice_3();

// function prototypes for choice 4
bool check_parity(int);
void choice_4();

// function prototype for choice 5
int choice_5();


int main() {

	char ans = ' ';

	do{

	int choice = 0;

	cout << "menu" << endl;
	cout << "1. Convert dollar to euro  (ask the user to input the exchange rate) limit to two decimals utilizing set precision)" << endl;
	cout << "2. Convert Celsius to  Fahrenheit (hint: following is the conversion formula  °F = (°C x 1.8) + 32" << endl;
	cout << "3. Count the letters in users name - Ask the user to input their name and your program will tell the user how many letters is in their name." << endl;
	cout << "4. Finds if a number is even or odd" << endl;
	cout << "5. Quit" << endl;
	cout << "Welcome!, please make your selection (1-5): ";
	
	cin >> choice;

	switch (choice)
	{
	case 1:
		choice_1();
		break;

	case 2:
		choice_2();
		break;

	case 3:
		choice_3();
		break;

	case 4:
		choice_4();
		break;

	case 5: 
		choice_5();

	default:
		break;
	}

	cout << "Would you like to try another option?(Y/N) ";
	cin >> ans;
	} while (ans == 'Y');
}

//**********************************************************

// input USD
void choice_1() {
	double money = 0.0;
	cout << "USD $ ";
	cin >> money;

	// input validation 
	while (!cin || money < 0) {
		cout << "not valid input" << endl;
		cout << "USD $ ";
		cin.clear();
		cin.ignore(20, '\n');
		cin >> money;
		}

	print_EUR(USD_to_EUR(money));
}


// convert USD to EUR 
double USD_to_EUR(double money){
	money = money * 0.9235;
	return money;
}


// output EUR
void print_EUR(double money) {
	cout << "This is " << fixed << setprecision(2) << money << " euros." << endl;
}

//**********************************************************

void choice_2() {

	double Cdeg = 0.0;
	cout << "How many degrees Celsius? ";
	// input Celsius
	cin >> Cdeg;

	// input validation
	while (!cin) {
		cout << " How many °C? ";
		cin.clear();
		cin.ignore(20, '\n');
		cin >> Cdeg;
	}
	print_Fdeg(Cdeg_to_Fdeg(Cdeg));
}

// convert Celsius to Fahrenheit
double Cdeg_to_Fdeg(double Cdeg) {

	double Fdeg = Cdeg * (9.0 / 5) + 32;
	return Fdeg;
}

// output Fahrenheit
void print_Fdeg(double Fdeg) {

	cout << "This is " << Fdeg << fixed << setprecision(2) << " Fahrenheit degrees " << endl;
}

//*************************************************************


void choice_3() {

	cout << "What is your name? ";
	string name = " ";

	cin.ignore();
	// input name
	getline(cin, name);

	// input validation
	while (!cin ) {
		cout << "What is your name ? ";
		cin.clear();
		cin.ignore(20, '\n');
		getline(cin, name);
	}

	cout << name << " has " << letter_counter(name) << " letters " << endl;
}

// how many letters
int letter_counter(string name) {
	return name.length();
}

//*************************************************************


void choice_4() {

	int number = 0;
	cout << "Please enter a number: ";
	// input number
	cin >> number;
	if (check_parity(number) == true) cout << "EVEN number" << endl;
	else cout << "ODD number" << endl;
}


// check parity 
bool check_parity(int number) {
	if ((number % 2) == 0)
		return true;
	else
		return false;
}

//*************************************************************

int choice_5() {
	return 0;
}
