#include <iostream>
#include <vector>
#include <fstream>
#include "customer.h"

//Classes to implement: Customer.h, Phones.h, Plan.h

using namespace std;

void startMenu() {

    string sname;
    string address;
    string payment;
    int id;
    int num;
    int planId;
    int choice = -1;

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
            cout << "Enter Customer Plan Choice(1-3): ";
            cin >> planId;

            Customer(id, sname, address, num, planId, payment);
            cout << sname << " has been added to the database!" << endl;

        }

        else if(choice == 2) {

        }

        else if(choice == 3) {
            
        }

        else if(choice == 3) {
            
        }

        else if(choice == 4) {
            
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
    }
}

int main() {

    startMenu();

    return 0;
}