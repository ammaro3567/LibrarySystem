#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << " EGP" << endl;
    }
};
