#include <iostream>
#include <iomanip> // for setting precision

using namespace std;

int main() {
    const int numSubjects = 5;
    const int maxMarksPerSubject = 100;

    int marks[numSubjects];
    int totalMarks = 0;

    // Input marks for each subject
    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];

        totalMarks += marks[i];
    }

    // Calculate average and percentage
    double averageMarks = static_cast<double>(totalMarks) / numSubjects;
    double percentage = static_cast<double>(totalMarks) / (numSubjects * maxMarksPerSubject) * 100;

    // Display results
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Average Marks: " << fixed << setprecision(2) << averageMarks << endl;
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;

    return 0;
}
