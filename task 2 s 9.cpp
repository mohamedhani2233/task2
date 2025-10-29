#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double newPrice) {
        if (newPrice > 0)
            price = newPrice;
    }
};

int main() {
    Book b("C++ Basics", "John Smith", 29.99);
    cout << b.getTitle() << endl;
    cout << b.getAuthor() << endl;
    cout << b.getPrice() << endl;

    b.setPrice(35.50);
    cout << b.getPrice() << endl;

    b.setPrice(-10);
    cout << b.getPrice() << endl;

    return 0;
}
