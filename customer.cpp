#include "customer.h"
#include <vector>
#include <string>
#include <iostream>


using namespace std;

Customer::Customer(int id, string name, string address, int phoneNumber, int planId, string paymentMethod){
    id = 0;
    name = "";
    address = "";
    phoneNumber = 0;
    planId = 0;
    paymentMethod = "";
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

int Customer::getPhoneNumber() const{
    return phoneNumber;
}

int Customer::getPlanId() const{
    return planId;
}

string Customer::getPaymentMethod() const{
    return paymentMethod;
}

void Customer::setName(string name){
    this->name = name;
}

void Customer::setAddress(string address){
    this->address = address;
}

void Customer::setPhoneNumber(int phoneNumber){
    this->phoneNumber = phoneNumber;
}

void Customer::setPlanId(int planId){
    this->planId = planId;
}

void Customer::setPaymentMethod(string paymentMethod){
    this->paymentMethod = paymentMethod;
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
    else if(planId == 2) {
        cout << "Unlimited Pro 2.0" << endl;
    }
    else {
        cout << "None" << endl;
    }
    cout << "Payment Method: " << paymentMethod << endl;
}