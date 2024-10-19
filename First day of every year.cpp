#include <iostream>
using namespace std;

string findDayOfWeek(int year) {
    if (year < 1) {
        return "Invalid input";
    }

    string daysOfWeek[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    int q = 1; // Day of the month
    int m = 13; // Month (January is counted as 13th month of the previous year)
    int K = year % 100; // Year of the century
    int J = year / 100; // Century

    int dayOfWeekIndex = (q + (13*(m+1)/5) + K + (K/4) + (J/4) + (5*J)) % 7;

    return daysOfWeek[dayOfWeekIndex];
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    string dayOfWeek = findDayOfWeek(year);
    cout << "On 1st January of " << year << ", it was a " << dayOfWeek << "." << endl;

    return 0;
}
