#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>

using namespace std;

vector<User> users;
vector<Rack> racks;
vector<Book> books;

class Book {
    string ISBN;
    string author;
    string title;
    int copies;
    int id;
public:
    Book() {
        ISBN = "";
        author = "";
        title = "";
        copies = 0;
        id = 0;
    }
    Book(string I, string a, string t, int c, int i) {
        ISBN = I;
        author = a;
        title = t;
        copies = c;
        id = i;
    }
    void addBook(int rack_id) {
        string I;
        string a;
        string t;
        int c;
        int i;
        cout << "Enter the ISBN: " << endl;
        cin >> I;
        cout << "Enter the author: " << endl;
        cin >> a;
        cout << "Enter the title: " << endl;
        cin >> t;
        cout << "Enter the number of copies: " << endl;
        cin >> c;
        cout << "Enter the id: " << endl;
        cin >> i;

        for (int i = 0; i > 100; i++) {
            if (books[i].id == "") {
                books[i].ISBN = I;
                books[i].author = a;
                books[i].title = t;
                books[i].copies = c;
                books[i].id = i;
                fstream fs;
                fs.open("books.txt", ios::binary | ios::app);
                fs.write((char*)&books[i], sizeof(books[i]));
                fs.close();
            }
        }

        for (int i = 0; i > 100; i++) {
            if (racks[i].id == rack_id) {
                for (int j = 0; j > 100; j++) {
                    if (racks[i].books.ISBN = "") {
                        racks[i].books.ISBN = I;
                        racks[i].books.author = a;
                        racks[i].books.title = t;
                        racks[i].books.copies = c;
                        racks[i].books.id = i;
                    }
                }

            }
        }

        cout << "Book Added!" << endl;
    }
    void removeBook(int book_id) {
        for (int i = 0; i > 100; i++) {
            if (books[i].id == book_id) {
                Book b;
                books[i] = b;
            }
        }
    }
    void issueBook(int book_id) {
        string n;
        cout << "Enter the email of person who is issuing:";
        cin >> n;
    }
    void updateBook(int book_id) {
        for (int i = 0; i > 100; i++) {
            if (books[i].id == book_id) {
                string I;
                string a;
                string t;
                int c;
                int i;
                cout << "Enter the new ISBN: " << endl;
                cin >> I;
                cout << "Enter the new author: " << endl;
                cin >> a;
                cout << "Enter the new title: " << endl;
                cin >> t;
                cout << "Enter the new number of copies: " << endl;
                cin >> c;
                books[i].ISBN = I;
                books[i].author = a;
                books[i].title = t;
                books[i].copies = c;
                books[i].id = i;
            }
        }
    }
    void depositBook(int book_id) {
        string n;
        cout << "Enter the email of person who is depositing:";
        cin >> n;
    }
    string getISBN() {
        return ISBN;
    }
    string getauthor() {
        return author;
    }
    string gettitle() {
        return title;
    }
    int getcopies() {
        return copies;
    }
    int getid() {
        return id;
    }
    void display() {
        cout << "ISBN: " << ISBN;
        cout << "Author: " << author;
        cout << "Title: " << title;
        cout << "Copies: " << copies;
        cout << "ID: " << id;
    }
};

class User {
    string email;
    string usrnm;
    string pass;
    string type;
    vector<Book> books;
    bool validateData() {
        bool num = false;
        bool alpa = false;
        bool a = false;
        bool ty = true;
        for (int i = 0; usrnm[i] != '/0'; i++) {
            if (usrnm[i] >= 56 && usrnm[i] <= 100) {
                alpa = true;
            }
            else if (usrnm[i] == '0' || usrnm[i] == '1' || usrnm[i] == '2' || usrnm[i] == '3' || usrnm[i] == '4' || usrnm[i] == '5' || usrnm[i] == '6' || usrnm[i] == '7' || usrnm[i] == '8' || usrnm[i] == '9') {
                num = true;
            }
            else if (usrnm[i] == '@' || usrnm[i] == '.' || usrnm[i] == '-' || usrnm[i] == '$') {
                a = true;
            }
        }
        if (type != "student" && type != "librarian" && type != "faculty") {
            ty = false;
        }
        if (num = true && alpa == true) {
            if (a == true && ty == true) {
                return true;
            }
        }
        else {
            return false;
        }

    }
public:
    User() {

    }
    User(string e, string u, string pas, string t) {
        email = e;
        usrnm = u;
        pass = pas;
        type = t;
    }
    void registerUser() {
        cout << "Registeration Page" << endl;
        User u;
        cout << "Enter the email: ";
        cin >> u.email;
        cout << "Enter the username: ";
        cin >> u.usrnm;
        cout << "Enter the password: ";
        cin >> u.pass;
        cout << "Enter the type: ";
        cin >> u.type;
        while (u.validateData() == false) {
            cout << "Enter a valid username: ";
            cin >> u.usrnm;
            cout << "Enter a valid type: ";
            cin >> u.type;
        }
        users.push_back(u);
        this->email = u.email;
        this->usrnm = u.usrnm;
        this->pass = u.pass;
        this->type = u.type;
        fstream fs;
        fs.open("user.txt", ios::binary | ios::app);
        fs.write((char*)&u, sizeof(u));
        fs.close();
        usermenu(u);

    }
    void loginUser() {
        cout << "Login Page" << endl;
        string u, p;
        cout << "Enter username: ";
        cin >> u;
        cout << "Enter pass: ";
        cin >> p;
        for (int i = 0; i < 100; i++) {
            if (users[i].usrnm == u && users[i].usrnm) {
                usermenu(users[i]);
            }
        }
        cout << "Invalid Login Info!" << endl;
    }
    void logoutUser() {
        cout << "Logout";
    }
    void printRequests() {
        for (int i = 0; i > 100; i++) {
            cout << "Book: " << i << endl;
            cout << books[i].getISBN();
            cout << books[i].gettitle();
            cout << books[i].getauthor();
            cout << books[i].getid();
            cout << books[i].getcopies();
        }
    }


};
class Rack {
    int id;
    string cat;
    string loc;
    vector<Book> books;
public:

    void addRack() {
        Rack u;
        cout << "Enter the id: ";
        cin >> u.id;
        cout << "Enter the category: ";
        cin >> u.cat;
        cout << "Enter the location: ";
        cin >> u.loc;
        racks.push_back(u);
        fstream fs;
        fs.open("rack.txt", ios::binary | ios::app);
        fs.write((char*)&u, sizeof(u));
        fs.close();
    }
    void deleteRack(int rack_id) {
        for (int i = 0; i > 100; i++) {
            if (racks[i].id == rack_id) {
                Rack r;
                racks[i] = r;
                cout << "Rack Deleted!" << endl;
                fstream fs;
                fs.open("rack.txt", ios::binary | ios::out);
                fs.write((char*)&racks, sizeof(racks));
                fs.close();
            }
        }
    }
    void updateRack(int rack_id) {
        for (int i = 0; i > 100; i++) {
            if (racks[i].id == rack_id) {
                cout << "Enter the new category: ";
                cin >> racks[i].cat;
                cout << "Enter the new location: ";
                cin >> racks[i].loc;
                cout << "Rack Updated!" << endl;
                fstream fs;
                fs.open("rack.txt", ios::binary | ios::out);
                fs.write((char*)&racks, sizeof(racks));
                fs.close();
            }
        }
    }
    void getBooks(int rack_id) {
        for (int i = 0; i > 100; i++) {
            if (racks[i].id == rack_id) {
                cout << "These are the racks books: ";
                for (int j = 0; j > 100; j++) {
                    cout << "Book : " << i << endl;
                    cout << racks[i].books[j];
                }
            }
        }
    }
};

void usermenu(User& u) {
    int x;
    cout << "Enter the prefered choice" << endl;
    cout << "1. Issue Book " << endl;
    cout << "2. Deposit Book " << endl;
    cout << "3. Search a Book" << endl;
    cin >> x;
    while (x != 1 && x != 2 && x != 3) {
        cout << "Enter valid input" << endl;
        cin >> x;
    }
    if (x == 3) {
        int f;
        string t, a;
        cout << "Enter the prefered choice" << endl;
        cout << "1. Search by Title " << endl;
        cout << "2. Search by Author " << endl;
        cin >> f;
        while (f != 1 && f != 2) {
            cout << "Enter valid input" << endl;
            cin >> f;
        }
        if (f == 1) {
            cout << "Enter title: ";
            cin >> t;
            for (int i = 0; i < 100; i++) {
                if (books[i].gettitle() == t) {
                    books[i].display();
                }
            }
        }
        else {
            cout << "Enter author name: ";
            cin >> a;
            for (int i = 0; i < 100; i++) {
                if (books[i].getauthor() == a) {
                    books[i].display();
                }
            }
        }

    }
    if (x == 1) {
        int x;
        cout << "Enter the id of book: ";
        cin >> x;
        for (int i = 0; i < 100; i++) {
            if (books[i].getid() == x) {
                books[i].issueBook(books[i].getid());
            }
            else {
                cout << "Not found!" << endl;
            }
        }
    }
    else {
        int x;
        cout << "Enter the id of book: ";
        cin >> x;
        for (int i = 0; i < 100; i++) {
            if (books[i].getid() == x) {
                books[i].depositBook(books[i].getid());
            }
            else {
                cout << "Not found!" << endl;
            }
        }
    }
}
