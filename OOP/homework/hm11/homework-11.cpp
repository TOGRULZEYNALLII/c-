#include <iostream>
#include <vector>

using namespace std;

/*
    Exercise:
    Implement a program to store and manage the information of students in a class. 
    Each student should have the following attributes: name, roll number, 
    and marks in three subjects (Maths, Physics, and Chemistry).

    1. Define a struct called Student that holds the attributes mentioned above.

    2. Implement a class called Classroom that represents a class of students. 
    The class should have the following functionalities:
        Add a new student to the class.
        Display the details of all students in the class.
        Calculate and display the average marks of each student.
        
    3. In the main() function, create an instance of the Classroom class. 
    Prompt the user to enter the details of multiple students and add them to the class. 
    After adding the students, display the details of all students and their average marks.
*/


/* Solution */
struct Student {


    public:
     string name;
    int rollNumber;
    int mathMarks;
    int physicsMarks;
    int chemistryMarks;
};

class Classroom {
    private:
    vector<Student> students;

    public:
        // Complete the code
             

    void addStudent(Student student){
       students.push_back(student);
    }
   void displayStudents(){

    for (int i = 0; i < students.size(); i++) {
      cout << "Name: " << students[i].name << endl;
      cout << "Roll Number: " << students[i].rollNumber << endl;
      cout << "Maths Marks: " << students[i].mathMarks << endl;
      cout << "Physics Marks: " << students[i].physicsMarks << endl;
      cout << "Chemistry Marks: " << students[i].chemistryMarks << endl;
      cout << "--------------------------" << endl;
    }

   }


  void displayAverageMarks() {
    if (students.empty()) {
        cout << "No students available to calculate average." << endl;
        return;
    }
    int total = 0;
    for (int i = 0; i < students.size(); i++) {
        total += students[i].mathMarks + students[i].physicsMarks + students[i].chemistryMarks;
    }
    int average = total / (students.size() * 3);
    cout << "Class average marks (overall): " << average << endl;
}



   void displayAveragePerStudent() {
    for (const auto& student : students) {
        int total = student.mathMarks + student.physicsMarks + student.chemistryMarks;
        double avg = total / 3.0;
        cout << student.name << " (" << student.rollNumber << ") - Average: " << avg << endl;
    }
}

};



int main() {

    /*      Example usage:     */
    Classroom classroom;
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << endl;

        Student student;
        cout << "Name: ";
         cin>> student.name;
        cout << "Roll Number: ";
        cin >> student.rollNumber;
        cout << "Maths Marks: ";
        cin >> student.mathMarks;
        cout << "Physics Marks: ";
        cin >> student.physicsMarks;
        cout << "Chemistry Marks: ";
        cin >> student.chemistryMarks;

        classroom.addStudent(student);
        cout << endl;
    };

    cout << "Details of all students:" << endl;
    classroom.displayStudents();

    cout << "Average marks of each student:" << endl;
    classroom.displayAverageMarks();
    
    cout << endl;


    cout << "Average marks per student:" << endl;
    classroom.displayAveragePerStudent();

    cout << endl;
    cout << "Thank you for using the Classroom management system!" << endl;

    // Return 0 to indicate successful execution
    cout << "Exiting the program." << endl;
    cout << "Goodbye!" << endl;
    return 0;
}