#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int age, dailyGoal;

    string subject1, subject2, subject3;
    int hours1, hours2, hours3;
    int marks1, marks2, marks3;

    string task1, task2, task3;

    cout << "====================================" << endl;
    cout << "       SMART STUDY PLANNER" << endl;
    cout << "====================================" << endl;

    cout << "\nEnter Student Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Daily Study Goal (hours): ";
    cin >> dailyGoal;
    cin.ignore();

    cout << "\nEnter Subject 1: ";
    getline(cin, subject1);

    cout << "Study Hours: ";
    cin >> hours1;

    cout << "Marks: ";
    cin >> marks1;
    cin.ignore();

    cout << "Daily Task: ";
    getline(cin, task1);

    cout << "\nEnter Subject 2: ";
    getline(cin, subject2);

    cout << "Study Hours: ";
    cin >> hours2;

    cout << "Marks: ";
    cin >> marks2;
    cin.ignore();

    cout << "Daily Task: ";
    getline(cin, task2);

    cout << "\nEnter Subject 3: ";
    getline(cin, subject3);

    cout << "Study Hours: ";
    cin >> hours3;

    cout << "Marks: ";
    cin >> marks3;
    cin.ignore();

    cout << "Daily Task: ";
    getline(cin, task3);

    int totalHours = hours1 + hours2 + hours3;
    float average = (marks1 + marks2 + marks3) / 3.0;

    cout << "\n\n====================================" << endl;
    cout << "          STUDY PLAN REPORT" << endl;
    cout << "====================================" << endl;

    cout << "\nStudent Name : " << name << endl;
    cout << "Age          : " << age << endl;
    cout << "Daily Goal   : " << dailyGoal << " hours" << endl;

    cout << "\n--------- SUBJECT 1 ---------" << endl;
    cout << "Subject      : " << subject1 << endl;
    cout << "Study Hours  : " << hours1 << " hours" << endl;
    cout << "Marks        : " << marks1 << "/100" << endl;
    cout << "Daily Task   : " << task1 << endl;

    cout << "\n--------- SUBJECT 2 ---------" << endl;
    cout << "Subject      : " << subject2 << endl;
    cout << "Study Hours  : " << hours2 << " hours" << endl;
    cout << "Marks        : " << marks2 << "/100" << endl;
    cout << "Daily Task   : " << task2 << endl;

    cout << "\n--------- SUBJECT 3 ---------" << endl;
    cout << "Subject      : " << subject3 << endl;
    cout << "Study Hours  : " << hours3 << " hours" << endl;
    cout << "Marks        : " << marks3 << "/100" << endl;
    cout << "Daily Task   : " << task3 << endl;

    cout << "\n--------- SUMMARY ---------" << endl;
    cout << "Total Study Hours : " << totalHours << " hours" << endl;
    cout << "Average Marks     : " << average << "%" << endl;

    if (average >= 75)
        cout << "Performance       : Excellent" << endl;
    else if (average >= 60)
        cout << "Performance       : Very Good" << endl;
    else if (average >= 40)
        cout << "Performance       : Good" << endl;
    else
        cout << "Performance       : Needs Improvement" << endl;

    cout << "\n====================================" << endl;
    cout << "       STUDY PLANNER COMPLETED" << endl;
    cout << "====================================" << endl;

    return 0;
}