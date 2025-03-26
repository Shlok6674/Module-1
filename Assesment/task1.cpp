#include <iostream>
#include <string>
using namespace std;

// Class to manage lecture details
class LectureDetails {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numOfLectures;

public:
    // Constructor to initialize values
    LectureDetails() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numOfLectures = 0;
    }

    // Function to assign initial values
    assignInitialValues(string lName, string sName, string cName, int lectures) {
        lecturerName = lName;
        subjectName = sName;
        courseName = cName;
        numOfLectures = lectures;
    }

    // Function to add lecture details
    addLectureDetails() {
        cout << "\nEnter Lecturer Name: ";
        cin.ignore();
        getline(cin, lecturerName);
        
        cout << "Enter Subject Name: ";
        getline(cin, subjectName);
        
        cout << "Enter Course Name: ";
        getline(cin, courseName);
        
        cout << "Enter Number of Lectures: ";
        cin >> numOfLectures;
    }

    // Function to display lecture details
    displayLectureDetails() {
        cout << "\n----------------------------------------" << endl;
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name : " << subjectName << endl;
        cout << "Course Name  : " << courseName << endl;
        cout << "No. of Lectures: " << numOfLectures << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main() {
    const int MAX_LECTURERS = 5;
    LectureDetails lectures[MAX_LECTURERS];
    int currentCount = 0;
    char choice;

    cout << "Welcome to Lecture Management System" << endl;
    
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add Lecture Details" << endl;
        cout << "2. Display All Lectures" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch(choice) {
            case '1':
                if (currentCount < MAX_LECTURERS) {
                    cout << "\nAdding details for Lecturer " << currentCount + 1;
                    lectures[currentCount].addLectureDetails();
                    currentCount++;
                    cout << "Lecture details added successfully!" << endl;
                } else {
                    cout << "Cannot add more lecturers. Maximum limit (5) reached!" << endl;
                }
                break;

            case '2':
                if (currentCount == 0) {
                    cout << "\nNo lecture details available to display!" << endl;
                } else {
                    cout << "\nDisplaying All Lecture Details:" << endl;
                    for (int i = 0; i < currentCount; i++) {
                        cout << "\nLecture " << i + 1 << " Details:";
                        lectures[i].displayLectureDetails();
                    }
                }
                break;

            case '3':
                cout << "\nThank you for using Lecture Management System!" << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a number between 1 and 3." << endl;
        }
    } while (choice != '3');

    return 0;
}