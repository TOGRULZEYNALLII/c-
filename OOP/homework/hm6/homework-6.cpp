
#include <iostream>

using namespace std;

/*
    Exercise:   
    Create a program to manage a library with books using Object-Oriented Programming (OOP) principles in C++. 
    Implement the following features:

    1. Define a class named Book with the following private attributes:
        title (string): to store the title of the book.
        author (string): to store the author of the book.
        year (int): to store the year of publication of the book.

    2. Implement a default constructor for the Book class that initializes all attributes to empty or zero.

    3. Implement a parameterized constructor for the Book class that allows setting the values for title, 
    author, and year during object creation.

    4. Implement a member function named display() inside the Book class that displays the details of the book (title, author, and year).

    5. In the main() function, create an array named library of Book objects with a size of 5.

    6. Prompt the user to enter the details of the books (title, author, and year) 
    and populate the library array accordingly using the parameterized constructor.

    7. Display the details of all the books in the library using the display() method.

    8. Compile and run the program to test its functionality.

    Your task is to implement the missing parts and ensure that the program runs correctly, 
    allowing the user to input the details of the books and displaying them.

    Hint: You can use a loop (e.g., for or while) to prompt the user for input and populate the library array.
*/


/* Solution */

class Book {
    // TODO:
};


int main() {

    const int librarySize = 5;
    Book library[librarySize];

    cout << "Enter details for " << librarySize << " books:" << endl;
    for (int i = 0; i < librarySize; ++i) {
        // TODO: 
    }

    cout << endl << "Library Contents:" << endl;
    for (int i = 0; i < librarySize; ++i) {
        cout << "Book " << i + 1 << ":" << endl;
        // TODO:
    }

}