#include "LibrarySystem.h"

// Book class methods (empty)
Book::Book() {}
Book::Book(string t, string a, string i) {}
string Book::getTitle() const { return ""; }
string Book::getAuthor() const { return ""; }
string Book::getId() const { return ""; }
bool Book::getIsBorrowed() const { return false; }
void Book::setTitle(string t) {}
void Book::setAuthor(string a) {}
void Book::setId(string i) {}
void Book::setIsBorrowed(bool status) {}

// User class methods (empty)
User::User() {}
User::User(string n, string id, string pass) {}
string User::getName() const { return ""; }
string User::getUserId() const { return ""; }
string User::getPassword() const { return ""; }
void User::setName(string n) {}
void User::setUserId(string id) {}
void User::setPassword(string pass) {}

// LibrarySystem class methods (empty)
LibrarySystem::LibrarySystem() {}
void LibrarySystem::addBook(Book b) {}
void LibrarySystem::removeBook(string bookId) {}
Book* LibrarySystem::searchBook(string bookId) { return nullptr; }
void LibrarySystem::borrowBook(string userId, string bookId) {}
void LibrarySystem::returnBook(string userId, string bookId) {}
void LibrarySystem::addUser(User u) {}
User* LibrarySystem::searchUser(string userId) { return nullptr; }
bool LibrarySystem::login(string userId, string password) { return false; }
