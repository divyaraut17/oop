#include <iostream>
#include <string>
using namespace std;

// Class remains unchanged
class BookBus {
    private:
        string from_city;
        string to_city;
        int seats;

    public:
        static int available_seats;

        // Constructor with initialization
        BookBus(string s = "source", string d = "destination", int n = 1) 
            : from_city(s), to_city(d), seats(n) {}

        void showbooking() {
            cout << "Source: " << from_city << endl;
            cout << "Destination: " << to_city << endl;
            cout << "Seats booked: " << seats << endl;
        }

        
};

// Initialize static variable
int BookBus::available_seats = 50;

int main() {
    string source, destination;
    int seats_to_book;

    cout << "Enter source city: ";
    cin >> source;

    cout << "Enter destination city: ";
    cin >> destination;

    cout << "Enter number of seats to book: ";
    cin >> seats_to_book;

    try {
        if (seats_to_book <= 0) {
            throw "Invalid number of tickets!";
        }
        if (seats_to_book > BookBus::available_seats) {
            throw "Sorry! Not enough seats available.";
        }

        

        cout << "You have successfully booked " << seats_to_book << " ticket(s)." << endl;
        cout << "Seats remaining: " << BookBus::available_seats << endl;

        // Show booking details
        BookBus b1(source, destination, seats_to_book);
        b1.showbooking();
    }
    catch (const char* str) {
        cout << "Exception: " << str << endl;
    }

    return 0;
}
