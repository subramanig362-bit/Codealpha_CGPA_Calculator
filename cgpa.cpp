#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Simple function to convert grade letters to grade points
double gradeToPoint(string g) {
    if (g == "A+" || g == "a+") return 10;
    if (g == "A"  || g == "a")  return 9;
    if (g == "B+" || g == "b+") return 8;
    if (g == "B"  || g == "b")  return 7;
    if (g == "C"  || g == "c")  return 6;
    if (g == "D"  || g == "d")  return 5;
    return 0;
}

int main() {

    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    string grade;
    double credit;

    double totalCredits = 0;
    double totalPoints = 0;

    for (int i = 1; i <= n; i++) { 
        cout << "\nCourse " << i << " grade: ";
        cin >> grade;

        cout << "Course " << i << " credit: ";
        cin >> credit;

        double gp = gradeToPoint(grade);

        totalCredits += credit;
        totalPoints += gp * credit;
    }

    double cgpa = totalPoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "Your CGPA = " << cgpa << endl;

    return 0;
}
