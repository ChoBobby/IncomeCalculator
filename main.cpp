#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// User Input
	double workWage;
	double workHours;
	int workWeeks;

	cout << "Enter your hourly wage: $";
	cin >> workWage;

	cout << "Enter your hours worked per week: ";
	cin >> workHours;

	cout << "Enter your weeks worked per year: ";
	cin >> workWeeks;



	// Income Output
	double weeklyIncome;
	double monthlyIncome;
	double yearlyIncome;

	weeklyIncome = workWage * workHours;
	cout << endl << "Weekly Income: $" << fixed << setprecision(2) << weeklyIncome;

	monthlyIncome = (workWage * workHours * workWeeks) / 12;
	cout << endl << "Monthly Income: $" << fixed << setprecision(2) << monthlyIncome;

	yearlyIncome = (workWage * workHours * workWeeks);
	cout << endl << "Yearly Income: $" << fixed << setprecision(2) << yearlyIncome;

	cout << endl;



	return 0;
}