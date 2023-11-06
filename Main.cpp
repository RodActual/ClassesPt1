// Anthony Rodriguez
// CIS 1202 101
// November 1, 2023

#include "Publication.h"

void getPublicationInfo(Publication& pub) {
    string title, publisher;
    double price;
    int year, stock;
    PublicationType type;

    cout << "Enter title: ";
    getline(cin, title);

    cout << "Enter publisher: ";
    getline(cin, publisher);

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter year of publication: ";
    cin >> year;

    int typeInt;
    do {
        cout << "Enter publication type (0-4):" << endl;
        cout << "1. BOOK\n2. MAGAZINE\n3. NEWSPAPER\n4. AUDIO\n5. VIDEO\n";
        cin >> typeInt;
    } while (typeInt < 1 || typeInt > 5);

    type = static_cast<PublicationType>(typeInt);

    cout << "Enter stock: ";
    cin >> stock;

    pub.storePublication(title, publisher, price, year, type, stock);

    cout << "Publication Type: ";
    switch (type) {
    case BOOK:
        cout << "BOOK";
        break;
    case MAGAZINE:
        cout << "MAGAZINE";
        break;
    case NEWSPAPER:
        cout << "NEWSPAPER";
        break;
    case AUDIO:
        cout << "AUDIO";
        break;
    case VIDEO:
        cout << "VIDEO";
        break;
    }
    cout << endl;
}

int main() {
    Publication myPublication;

    getPublicationInfo(myPublication);

    cout << "Title: " << myPublication.getTitle() << endl;

    int currentStock = myPublication.getStock();
    myPublication.checkOut();

    cout << "Copies in stock: " << currentStock - 1 << endl;

    myPublication.checkIn();

    cout << "Copies in stock: " << myPublication.getStock() << endl;

    return 0;
}