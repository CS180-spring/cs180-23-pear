#include <iostream>
#include <vector>
#include <fstream>
#include "../header/customer.h"
#include "../header/plan.h"

//Classes to implement: Customer.h, Phones.h, Plan.h

string sname;
string address;
string payment;
string temp;
int id;
int tracker;
string num;
int planId;
int choice = -1;
int choice_two = -1;
vector<Customer> customerDB;
Customer obj, obj2;
int planChoice;
double planPrice;

using namespace std;

void AddNewCustomer() {
    cout << "Enter Customer ID: ";
    cin >> id;
    cout << endl << "Enter Customer Name(First-Last): ";
    cin >> sname;
    cout << endl << "Enter Customer Address(State-City-ZIP-Street-Unit): ";
    cin >> address;
    cout << endl << "Enter Customer Phone Number(XXX-XXX-XXXX): ";
    cin >> num;
    cout << endl << "Enter Customer Payment Method(\"Visa, Master, Paypal, Stripe): ";
    cin >> payment;
    cout << endl << "Enter Customer Plan Choice(1-3): ";
    cin >> planId;

    obj = Customer(id, sname, address, num, planId, payment);
    customerDB.push_back(obj);
    cout << endl << sname << " has been added to the database!" << endl;
}

void ViewCustomer() {
    cout << "Please enter the customer ID: ";
    cin >> id;
    bool isTrue = false;

    for(int i = 0; i < customerDB.size(); i++) {
        obj = customerDB.at(i);
        if(obj.getId() == id) {
            obj.display();
            cout << endl;
            isTrue = true;
        }
    }
    if(isTrue == false) {
    cout << "No customer found!" << endl;
    cout << endl << endl;
    }
}

void EditCustomer() {
    cout << "Please enter the customer ID: ";
    cin >> id;
    bool isTrue = false;

    for(int i = 0; i < customerDB.size(); i++) {
        obj = customerDB.at(i);
        if(obj.getId() == id) {
            tracker = i;
            isTrue = true;
            break;
        }
    }
    if(isTrue == false) {
        cout << "No customer found!" << endl;
        cout << endl << endl;
        return;
    }

    while(choice_two != 6) {
        cout << endl << "Please choose an attribute(number) to edit: " << endl;
        cout << "1. Change ID " << endl;
        cout << "2. Change Name " << endl;
        cout << "3. Change Address " << endl;
        cout << "4. Change Phone Number " << endl;
        cout << "5. Switch Plan " << endl;
        cout << "6. Return " << endl;

        cin >> choice_two;
        while(choice_two < 1 || choice_two > 6) {
            cout << "Invalid Option!" << endl;
            cin >> choice_two;
        }
        if(choice_two == 1) {
            cout << "Enter New Customer ID: ";
            cin >> id;
            cout << endl << obj.getName() << "'s New Customer ID is ";
            obj.setID(id);
            cout << obj.getId() << endl;
        }
        if(choice_two == 2) {
            cout << "Enter New Name: ";
            cin >> sname;
            cout << endl << obj.getName() << "'s New Name is ";
            obj.setName(sname);
            cout << obj.getName() << endl;
        }
        if(choice_two == 3) {
            cout << "Enter New Address: ";
            cin >> address;
            cout << endl << obj.getName() << "'s New Address is ";
            obj.setAddress(address);
            cout << obj.getAddress() << endl;
        }
        if(choice_two == 4) {
            cout << "Enter New Phone Number: ";
            cin >> num;
            cout << endl << obj.getName() << "'s New Phone Number is ";
            obj.setPhoneNumber(num);
            cout << obj.getPhoneNumber() << endl;
        }
        if(choice_two == 5) {
            cout << "Enter New Plan ID: ";
            cin >> planId;
            cout << endl << obj.getName() << "'s New Plan is ";
            obj.setPlanId(planId);
            cout << obj.getPlanId() << endl;
        }
    }

    customerDB.at(tracker) = obj;
}

void AddNewPlan() {
    cout << "Enter Plan ID: ";
    cin >> planId;
    cout << endl << "Enter Plan Choice: ";
    cin >> planChoice;
    cout << endl << "Enter Plan Price: ";
    cin >> planPrice;

    obj2 = Plan(id, sname, address, num, planId, payment);
    customerDB.push_back(obj);
    cout << endl << sname << " has been added to the database!" << endl;
}

void startMenu() {

    while(choice != 14) {
        cout << "=================================" << endl;
        cout << "Welcome to PearDB" << endl;
        cout << "=================================" << endl;
        cout << endl;
        cout << "Please select an option:" << endl;
        cout << "1. Add a new customer" << endl;
        cout << "2. View customer information" << endl;
        cout << "3. Edit customer information" << endl;
        cout << "4. Delete a customer" << endl;
        cout << "5. Add a new phone" << endl;
        cout << "6. View phone information" << endl;
        cout << "7. Edit phone information" << endl;
        cout << "8. Delete a phone" << endl;
        cout << "9. Add a new phone plan" << endl;
        cout << "10. View phone plan information" << endl;
        cout << "11. Edit phone plan information" << endl;
        cout << "12. Delete a phone plan" << endl;
        cout << "13. Purchase a phone" << endl;
        cout << "14. Exit" << endl;
        cout << endl;
        cout << "Please enter the number corresponding to your selection: ";
        cin >> choice;
        cout << endl;

        if(choice == 1) {
            AddNewCustomer();
        }

        else if(choice == 2) {
            ViewCustomer();
        }

        else if(choice == 3) {
            EditCustomer();
        }

        else if(choice == 4) {
            cout << "Please Enter Customer ID: ";
            cin >> id;
            for(int i = 0; i < customerDB.size(); i++) {
                obj = customerDB.at(i);
                if(obj.getId() == id) {
                    swap(customerDB.at(i),customerDB.back());
                    customerDB.pop_back();
                }
            }
        }

        else if(choice == 5) {
            
        }

        else if(choice == 6) {
            
        }

        else if(choice == 7) {
            
        }

        else if(choice == 8) {
            
        }

        else if(choice == 9) {
            
        }

        else if(choice == 10) {
            
        }

        else if(choice == 11) {
            
        }

        else if(choice == 12) {
            
        }

        else if(choice == 13) {
            
        }
        else if(choice < 1 || choice > 14) {
            cout << "Invalid Option";
        }
    }
}

int main() {

    startMenu();

    return 0;
}