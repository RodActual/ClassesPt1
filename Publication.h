// Anthony Rodriguez
// CIS 1202 101
// November 1, 2023

#pragma once
#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <string>
#include <iostream>

using namespace std;

enum PublicationType { BOOK, MAGAZINE, NEWSPAPER, AUDIO, VIDEO };

class Publication {
private:
    string title;
    string publisher;
    double price;
    int year;
    PublicationType type;
    int stock;

public:
    void storePublication(string itemTitle, string itemPublisher, double itemPrice, int itemYear, PublicationType itemType, int itemStock);
    void displayInfo();
    void checkOut();
    void checkIn();
    string getTitle();
    int getStock();
};
#endif
