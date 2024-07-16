// Laura Hernandez
// Dr. Nina Javaher
// 20/06/24
// Menu Driven Project
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;

int main() {
	char ans = ' ';
	do{
	int choice = 0;
	cout << "\nmenu" << endl;
	cout << "1. Ask a user for their age and determine whether the user was born in an odd or an even year " << endl;
	cout << "2. Calculate the tax based on user's weekly income assuming the tax deduction rate is %8.25 " << endl;
	cout << "3. It is the pi day, and Lone Star College wants to bake pies for students. Your job is to write a program to calculate the number of slices a pie of any size can be divided into." << endl;
	cout << "4. Quit the program" << endl;
	cout << "Welcome!, please make your selection (1-4): ";
	cin >> choice;
	switch (choice){
	case 1:
	{
		string name = "";
	    int age = 0;
	    int current_year = 2024;
	    int birth_year = 0;

		//input name
	    cout << "What is your name? ";
		cin.ignore();
		getline(cin, name, '\n');
	    cout << "How old are you? ";
	    cin >> age;

		//input age 
		if(age < 0 || !age) {
			cout << "\n NOT VALID INPUT: ONLY POSITIVE INTEGERS \n";
			cin.clear();
			cin.ignore();
			break;
		}

		//calculate birth year
		char ans = ' ';
		cout << "Have you already had your birthday in the current year?(Y/N) ";
		cin >> ans;
		if(ans == 'Y'){
			birth_year = current_year - age;
		}else birth_year = current_year - age - 1;

		cout << name << " you were born in " << birth_year;

		//determine the parity of the year
	    if (birth_year % 2 == 0) cout << ",this is an EVEN YEAR!" << endl;
	    else cout << ",this is an ODD YEAR!" << endl;
	    break;
	}
	case 2:
	{
		string name = "";
	    double weekly_income = 0.0;
	    double tax = 0.0;

		//input name
	    cout << "What is your name? ";
		cin.ignore();
	    getline(cin, name, '\n');

		//input income
	    cout << "What is your weekly income? ";
	    cin >> weekly_income;
		//input validation for income 
		if (weekly_income < 0 || !weekly_income) {
			cout << "\n NOT VALID INPUT: ONLY POSITIVE INTEGERS \n";
			cin.clear();
			cin.ignore();
			break;
		}

		//calculate tax
	    tax = 0.0825 * weekly_income;

		//output answer
		cout << name << " the tax amount you own is " << fixed << setprecision(2) << tax; //limiting decimals to be only two 
	    break; 
	}	
	case 3:
	{
		string  first_name = "";
		string last_name = "";
		double diameter = 0.0;
		double pie_area = 0.0;
		double slice_area = 9.75;
		double PI = 3.14159;
		int slice_num = 0;

		//greeting message
		cout << setw(46) << setfill('*') << "Welcome to Lone Star College Pie Day" << setfill('*') << setw(11) << " " << endl;
		
		//input first name
		cout << "What is your first name? ";
		cin.ignore();
	    getline(cin, first_name, '\n');
		
		//input last name
	    cout << "What is your last name? ";
		cin.ignore();
		getline(cin, last_name, '\n');
		
		//input diameter
	    cout << "Diameter [inches] = ";
		cin >> diameter;
		//input validation for diameter 
		if (diameter < 0 || !diameter) {
			cout << "\n NOT VALID INPUT: ONLY POSITIVE INTEGERS \n";
			cin.clear();
			cin.ignore();
			break;
		}
		
		//calculate circle area: pi*r^2
		//using pow function to find the radius to the power of two
	    pie_area = PI * pow(diameter / 2, 2);
		//calculate number of slices:
		slice_num = pie_area / slice_area;

		//output answer 
		cout << "Hi " << first_name + " " + last_name << " your pie will have " << slice_num << " slices" << endl;
	    break; 
	}
	 case 4: 
	{
		 cout << "Would you like to quit(Y or y)?";
	     cin >> ans; }
	}
	}while(ans != 'Y' && ans != 'y');

}
