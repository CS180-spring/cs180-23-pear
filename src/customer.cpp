#include "../header/customer.h"
#include <iostream>


using namespace std;

Customer::Customer() {
    id = 0;
    name = "";
    address = "";
    phoneNumber = "";
    planId = 0;
    paymentMethod = "";
}

Customer::Customer(int id, string name, string address, string phoneNumber, int planId, string paymentMethod){
    this->id = id;
    this->name = name;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->planId = planId;
    this->paymentMethod = paymentMethod;
}

int Customer::getId() const{
    return id;
}

string Customer::getName() const{
    return name;
}

string Customer::getAddress() const{
    return address;
}

string Customer::getPhoneNumber() const{
    return phoneNumber;
}

int Customer::getPlanId() const{
    return planId;
}

string Customer::getPaymentMethod() const{
    return paymentMethod;
}

void Customer::setID(int id) {
    this->id = id;
}

void Customer::setName(string name){
    this->name = name;
}

void Customer::setAddress(string address){
    this->address = address;
}

void Customer::setPhoneNumber(string phoneNumber){
    this->phoneNumber = phoneNumber;
}

void Customer::setPlanId(int planId){
    this->planId = planId;
}

void Customer::setPaymentMethod(string paymentMethod){
    this->paymentMethod = paymentMethod;
}

void Customer::deleteCustomer(int id) {
    
}

void Customer::display() const {
    cout << "Customer ID:" << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Number: " << phoneNumber << endl;
    cout << "PlanID: ";
    /* Will later implement a plan class which will have a display function for plan but this is just a placeholder*/
    if(planId == 1) {
        cout << "Unlimited Start 2.0" << endl;
    }
    else if(planId == 2) {
        cout << "Unlimited Plus 2.0" << endl;
    }
    else if(planId == 3) {
        cout << "Unlimited Pro 2.0" << endl;
    }
    else {
        cout << "None" << endl;
    }
    cout << "Payment Method: " << paymentMethod << endl;
}
