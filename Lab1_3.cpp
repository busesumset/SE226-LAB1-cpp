#include <iostream>
#include <string>

using namespace std;

int main() {

    string name;
    int labGrade;
    int finalGrade;
    int midGrade;


    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your lab grade: ";
    cin >> labGrade;

    cout << "Enter your midterm grade: ";
    cin >> midGrade;

    cout << "Enter your final grade: ";
    cin >> finalGrade;



    cout << "Name: " << name << endl;
    cout << "Lab: " << labGrade << endl;
    cout << "Midterm: " << midGrade << endl;
    cout << "Final: " << finalGrade << endl;
    cout << "Last Score: " << (labGrade * 0.25) + (midGrade * 0.35) + (finalGrade * 0.40) << endl;

    return 0;


}

