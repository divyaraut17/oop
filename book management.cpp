#include <iostream>
using namespace std;
class Book {
private:
    string title;
    string author;
    int pageCount;
    bool isHardcover;

public:
    Book() {
        title = "Shama chi Aai";
        author = "sane guruji";
        pageCount = 450;
        isHardcover = false;
    }

    Book(string t, string a, int p, bool format) {
        title = t;
        author = a;
        pageCount = p;
        isHardcover = format;
    }
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        pageCount = b.pageCount;
        isHardcover = b.isHardcover;
    }

   void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pageCount << endl;
        cout << "Format: " << (isHardcover ? "Hardcover" : "Paperback") << endl;
        cout << "___________________________________________________" << endl;
    }
};

int main(){
    Book book1;
    cout << "Book  Details :" << endl;
    book1.display();
    Book book2("Agnipnkh","A.P.j.kalam",350,true);
    cout<<"second book details:"<<endl;
    book2.display();
    Book book3 = book2; 
    cout << "Book 3 Details (Copy of Book 2):" << endl;
    book3.display();
    return 0;
}
