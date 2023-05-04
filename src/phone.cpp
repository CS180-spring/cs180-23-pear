#include "phone.h"
#include <iostream>

Phone::Phone() {
    make = "";
    model = "";
    storage = "";
    color = "";
    phoneID = 0;
    phonePrice = 0;
    availibility = true;
}

string Phone::getMake() const {
    return make;
}
string Phone::getModel() const {
    return model;
}
string Phone::getStorage() const {
    return storage;
}
string Phone::getColor() const {
    return color;
}
int Phone::getPhoneID() const {
    return phoneID;
}
double Phone::getPhonePrice() const {
    return phonePrice;
}
bool Phone::getAvail() const {
    return availibility;
}

void Phone::setMake(string make) {
    this->make = make;
}
void Phone::setModel(string model) {
    this->model = model;
}
void Phone::setStorage(string storage) {
    this->storage = storage;
}
void Phone::setColor(string color) {
    this->color = color;
}
void Phone::setPhoneID(int id) {
    phoneID = id;
}
void Phone::setPhonePrice(double price) {
    phonePrice = price;
}
void Phone::setAvail(bool availibility) {
    this->availibility = availibility;
}

void Phone::display() {
    cout << "Phone ID:" << phoneID << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Storage: " << storage << endl;
    cout << "Color: " << color << endl;
    cout << "Price: " << phonePrice << endl;
    cout << "Availibility: " << availibility;
}