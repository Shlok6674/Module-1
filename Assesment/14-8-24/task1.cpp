#include <iostream>
#include <string>

using namespace std;

// Class to represent lecture details
class Lecture 
{
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    // Constructor to initialize lecture details
    Lecture(string lecturer = "", string subject = "", string course = "", int numLectures = 0) 
        : lecturerName(lecturer), subjectName(subject), courseName(course), numberOfLectures(numLectures) {}

    // Function to display lecture details
    displayDetails(){
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numberOfLectures << endl;
    }

    // Function to set lecture details
    setDetails(string lecturer, string subject, string course, int numLectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numberOfLectures = numLectures;
    }
};

// Function to add lecture details to the system
addLectureDetails(Lecture lectures[], int& count, int maxLectures) {
    if (count >= maxLectures) {
        cout << "Cannot add more lectures. Maximum capacity reached." << endl;
        
    }

    string lecturer, subject, course;
    int numLectures;

    cout << "Enter Lecturer Name: ";
    cin >> lecturer;
    cout << "Enter Subject Name: ";
    cin >> subject;
    cout << "Enter Course Name: ";
    cin >> course;
    cout << "Enter Number of Lectures: ";
    cin >> numLectures;

    // Set details for the new lecture
    lectures[count].setDetails(lecturer, subject, course, numLectures);
    count++;
};

main() {
    const int MAX_LECTURES = 10; // Maximum number of lectures that can be stored
    Lecture lectureList[MAX_LECTURES];
    int lectureCount = 0; // Start with zero lectures

    char choice;
    do {
        cout << "\nLecture Management System" << endl;
        cout << "1. Add Lecture Details" << endl;
        cout << "2. Display All Lecture Details" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                addLectureDetails(lectureList, lectureCount, MAX_LECTURES);
                break;
            case '2':
                if (lectureCount == 0) {
                    cout << "No lecture details available. Please add some lectures first." << endl;
                } else {
                    for (int i = 0; i < lectureCount; ++i) 
                    {
                        lectureList[i].displayDetails();
                        cout << "------------------------" << endl;
                    }
                }
                break;
            case '3':
                cout << "Exiting system..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != '3');

    
}
