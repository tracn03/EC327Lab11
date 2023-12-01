#include <iostream>
#include <string>
#include "Library.h"

using namespace std;

int main(){
    Library library;
    char command;
    string bookName;
    bool result;

    do {
        cout << "Enter a command (a, r, p, q): ";
        cin >> command;

        if (command == 'p') {
            library.print();
        } else if (command == 'a') {
            cin >> bookName;
            result = library.addBook(bookName);

            if (result) {
                cout << "Book added" << endl;
            } else {
                cout << "Book already exists or library is full" << endl;
            }
        } else if (command == 'r') {
            cin >> bookName;
            result = library.removeBook(bookName);

            if (result) {
                cout << "Book removed" << endl;
            } else {
                cout << "Book does not exist" << endl;
            }
        }
    } while (command != 'q');

    return 0;

}
