#include <iostream>
#include <vector>
#include <fstream>
#include "../header/customer.h"
#include "../header/plan.h"
#include "../header/phone.h"
#include "../header/searcher.h"
#include "../header/export.h"
#include "../header/import.h"


//Classes to implement: Customer.h, Phones.h, Plan.h

string sname;
string address;
string payment;
string temp;
string startDate;
string endDate;
int id;
int tracker;
string num;
int planId;
string planName;
int choice = -1;
int choice_two = -1;
int var;
char choice_three;
vector<Customer> customerDB;
vector<Plan> planDB;
vector<Phone> phoneDB;
Customer obj;
Plan plan;
int planChoice;
double planPrice;
double minAll;
double textAll;
double dataAll;
Phone phone;

using namespace std;

void AddNewCustomer() {
    cout << "Enter Customer ID: ";
    cin >> id; // TO-DO: Don't allow user to create two customers with same id
    cout << endl << "Enter Customer Name(First-Last): ";
    cin >> sname;
    cout << endl << "Enter Customer Address(State-City-ZIP-Street-Unit): ";
    cin >> address;
    cout << endl << "Enter Customer Phone Number(XXX-XXX-XXXX): ";
    cin >> num;
    cout << endl << "Enter Customer Payment Method(Visa, Master, Paypal, Stripe): ";
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
    choice_two = 1;
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

void AddNewPhone() {
    cout << "Enter Phone ID: ";
    cin >> var;
    phone.setPhoneID(var);
    cout << "Enter Phone Price: ";
    cin >> var;
    phone.setPhonePrice(var);
    cout << "Enter Make: ";
    cin >> temp;
    phone.setMake(temp);
    cout << "Enter Model: ";
    cin >> temp;
    phone.setModel(temp);
    cout << "Enter Storage: ";
    cin >> temp;
    phone.setStorage(temp);
    cout << "Enter Color: ";
    cin >> temp;
    phone.setColor(temp);
    phoneDB.push_back(phone);

    cout << phone.getMake() << " " << phone.getModel() << " has been added to the database!";
}

void EditPhone() {
    cout << "Please enter the Phone ID: ";
    cin >> id;
    bool isTrue = false;

    for(int i = 0; i < phoneDB.size(); i++) {
        phone = phoneDB.at(i);
        if(phone.getPhoneID() == id) {
            tracker = i;
            isTrue = true;
            break;
        }
    }
    if(isTrue == false) {
        cout << "No Phone found!" << endl;
        cout << endl << endl;
        return;
    }

    while(choice_two != 8) {
        cout << endl << "Please choose an attribute(number) to edit: " << endl;
        cout << "1. Change ID " << endl;
        cout << "2. Change Make " << endl;
        cout << "3. Change Model " << endl;
        cout << "4. Change Storage " << endl;
        cout << "5. Change Color " << endl;
        cout << "6. Change Price " << endl;
        cout << "7. Change Availibility" << endl;
        cout << "8. Return" << endl;

        cin >> choice_two;
        while(choice_two < 1 || choice_two > 8) {
            cout << "Invalid Option!" << endl;
            cin >> choice_two;
        }

        if(choice_two == 1) {
            cout << "Enter New Phone ID: ";
            cin >> id;
            cout << endl << phone.getMake() << " " << phone.getModel() << "'s New Customer ID is ";
            phone.setPhoneID(id);
            cout << phone.getPhoneID() << endl;
        }
        if(choice_two == 2) {
            cout << "Enter Phone Make: ";
            cin >> temp;
            cout << endl << phone.getMake() << " " << phone.getModel() << "'s New Make is ";
            phone.setMake(temp);
            cout << phone.getMake() << endl;
        }
        if(choice_two == 3) {
            cout << "Enter New Model: ";
            cin >> temp;
            cout << endl << phone.getMake() << " " << phone.getModel() << "'s New Model is ";
            phone.setModel(temp);
            cout << phone.getModel() << endl;
        }
        if(choice_two == 4) {
            cout << "Enter New Storage: ";
            cin >> temp;
            cout << endl << phone.getMake() << " " << phone.getModel() << "'s New Storage is ";
            phone.setStorage(temp);
            cout << phone.getStorage() << endl;
        }
        if(choice_two == 5) {
            cout << "Enter New Color: ";
            cin >> temp;
            cout << endl << phone.getMake() << " " << phone.getModel() << "'s New Color is ";
            phone.setColor(temp);
            cout << phone.getColor() << endl;
        }
        if(choice_two == 6) {
            cout << "Enter New Price: ";
            cin >> var;
            cout << endl << phone.getMake() << " " << phone.getModel() << "'s New Price is ";
            phone.setPhonePrice(var);
            cout << phone.getPhonePrice() << endl;
        }
        if(choice_two == 7) {
            cout << "Enter New Availibility Status('Y' for Availible, 'N' for Occupied): ";
            cin >> choice_three;
            while(choice_three != 'Y' || choice_three != 'N') {
                cout << "Invalid Option!" << endl;
                cout << "Enter Y/N: ";
                cin >> choice_three;
                cout << endl;
            }
            cout << phone.getMake() << " " << phone.getModel() << "'s New Availibility is ";
            if(choice_three == 'Y') {
                phone.setAvail(true);
                cout << "Availibile" << endl;
            }
            if(choice_three == 'N') {
                phone.setAvail(false);
                cout << "Occupied" << endl;
            }
        }
    }

    phoneDB.at(tracker) = phone;
}

void ViewPhone() {
    cout << "Please enter the Phone ID: ";
    cin >> id;
    bool isTrue = false;

    for(int i = 0; i < phoneDB.size(); i++) {
        phone = phoneDB.at(i);
        if(phone.getPhoneID() == id) {
            phone.display();
            cout << endl;
            isTrue = true;
        }
    }
    if(isTrue == false) {
    cout << "No phone found!" << endl;
    cout << endl << endl;
    }
}

void AddNewPlan() {
    cout << "Enter Plan ID: ";
    cin >> planId;
    cout << "Enter Plan Name: ";
    cin >> planName;
    cout << "Enter Plan Choice: ";
    cin >> planChoice;
    cout << "Enter Plan Price: ";
    cin >> planPrice;
    cout << "Enter Plan Start Date (MM-DD-YYYY): ";
    cin >> startDate;
    cout << "Enter Plan End Date (MM-DD-YYYY): ";
    cin >> endDate;
    cout << "Enter Minute Allowance: ";
    cin >> minAll;
    cout << "Enter Text Allowance: ";
    cin >> textAll;
    cout << "Enter Data Allowance: ";
    cin >> dataAll;
    //plan.calculatePeriod(plan.getStartDate(), plan.getEndDate());
    plan = Plan(planId, planName, startDate, endDate, planChoice, planPrice, minAll, textAll, dataAll);
    planDB.push_back(plan);
    cout << endl << planName << " has been added to the database!" << endl;
}

void EditPlan() {
    cout << "Please enter the Plan ID: ";
    cin >> planId;
    bool isTrue = false;

    for(int i = 0; i < planDB.size(); i++) {
        plan = planDB.at(i);
        if(plan.getPlId() == planId) {
            tracker = i;
            isTrue = true;
            break;
        }
    }
    if(isTrue == false) {
        cout << "No Plan found!" << endl;
        cout << endl << endl;
        return;
    }
    choice_two = 1;
    while(choice_two < 9 && choice_two > 0) {
        cout << endl << "Please choose an attribute(number) to edit: " << endl;
        cout << "1. Change ID " << endl;
        cout << "2. Change Name " << endl;
        cout << "3. Change Choice " << endl;
        cout << "4. Plan Start Date " << endl;
        cout << "5. Plan End Date " << endl;
        cout << "6. Minute Allowance " << endl;
        cout << "7. Text Allowance " << endl;
        cout << "8. Data Allowance " << endl;
        cout << "9. Return" << endl;

        cin >> choice_two;
        while(choice_two < 1 || choice_two > 10) {
            cout << "Invalid Option!" << endl;
            cin >> choice_two;
        }

        if(choice_two == 1) {
            cout << "Current Plan ID is: ";
            cout << plan.getPlId();
            int newId;
            cout << "Enter New Plan ID: ";
            cin >> newId;
            cout << endl << plan.getPlanName() << "'s New Plan ID is ";
            plan.setPlId(newId);
            cout << plan.getPlId() << endl;
        }
        if(choice_two == 2) {
            cout << "Current Plan Name is: ";
            cout << plan.getPlanName();
            cout << "Enter New Plan Name: ";
            cin >> planName;
            cout << endl << plan.getPlanName() << "'s New Plan Name is ";
            plan.setPlanName(planName);
            cout << plan.getPlanName() << endl;
        }
        if(choice_two == 3) {
            cout << "Current Plan Choice is: ";
            cout << plan.getPlanChoice();
            cout << "Enter New Plan Choice (1-3): ";
            cin >> planChoice;
            cout << endl << plan.getPlanName() << "'s New Plan Choice is ";
            plan.setPlanChoice(planChoice);
            cout << plan.getPlanChoice() << endl;
        }
        if(choice_two == 4) {
            cout << "Current Plan Start Date is: ";
            cout << plan.getStartDate();
            cout << "Enter New Start Date: ";
            cin >> startDate;
            cout << endl << plan.getPlanName() << "'s New Start Date is ";
            plan.setStartDate(startDate);
            cout << plan.getStartDate() << endl;
            //plan.calculatePeriod(plan.getStartDate(), plan.getEndDate());
        }
        if(choice_two == 5) {
            cout << "Current Plan End Date is: ";
            cout << plan.getEndDate();
            cout << "Enter New End Date: ";
            cin >> endDate;
            cout << endl << plan.getPlanName() << "'s New End Date is ";
            plan.setEndDate(endDate);
            cout << plan.getEndDate() << endl;
            //plan.calculatePeriod(plan.getStartDate(), plan.getEndDate());
        }
        if(choice_two == 6) {
            cout << "Current Plan Minute Allowance is: ";
            cout << plan.getMinuteAllowance();
            cout << "Enter New Minute Allowance: ";
            cin >> minAll;
            cout << endl << plan.getPlanName() << "'s New Minute Allowance is ";
            plan.setMinuteAllowance(minAll);
            cout << plan.getMinuteAllowance() << endl;
        }
        if(choice_two == 7) {
            cout << "Current Plan Text Allowance is: ";
            cout << plan.getStartDate();
            cout << "Enter New Text Allowance: ";
            cin >> minAll;
            cout << endl << plan.getPlanName() << "'s New Text Allowance is ";
            plan.setTextAllowance(minAll);
            cout << plan.getTextAllowance() << endl;
        }
        if(choice_two == 8) {
            cout << "Current Plan Data Allowance is: ";
            cout << plan.getDataAllowance();
            cout << "Enter New Data Allowance: ";
            cin >> minAll;
            cout << endl << plan.getPlanName() << "'s New Data Allowance is ";
            plan.setDataAllowance(minAll);
            cout << plan.getDataAllowance() << endl;
        }
        
    }

    planDB.at(tracker) = plan;
}

void PrintPlan() {
    cout << "Please enter the plan ID: ";
    cin >> planId;
    bool isTrue = false;

    for(int i = 0; i < planDB.size(); i++) {
        plan = planDB.at(i);
        if(plan.getPlId() == planId) {
            plan.printCurrPlan();
            cout << endl;
            isTrue = true;
        }
    }
    if(isTrue == false) {
    cout << "No plan found!" << endl;
    cout << endl << endl;
    }
}

void searchCust(){
    int searchBy;
    Searcher s;
    int pID;
    string pM;
    int countSC;
    cout << "Please enter 1 to search by plan or 2 to search by payment method: ";
    cin >> searchBy;
    cout<<endl;
    if(searchBy == 1){
        cout<< "Enter the plan # you wish to search by: ";
        cin>> pID;
        cout <<endl;
       vector<Customer> temp = s.searchByPlanID(customerDB, pID);
        for(int i=0; i<temp.size(); ++i) {
            obj = temp.at(i);
            obj.display();
            cout << endl;
            countSC = i + 1;
            if(i == temp.size() - 1){
                cout<<"Total: " << countSC << endl;
                // cout<<countSC<<endl;
            }
        }

    }else if (searchBy == 2){
        cout<< "Enter the payment method you wish to search by (Visa, Master, Paypal, Stripe): ";
        cin>> pM;
        cout <<endl;
        vector<Customer> temp = s.searchByPayment(customerDB, pM);
        for(int i=0; i<temp.size(); ++i) {
            obj = temp.at(i);
            obj.display();
            cout << endl;
            countSC = i + 1;
             if(i == temp.size() - 1){
                cout<<"Total: " << countSC << endl;
                // cout<<countSC<<endl;
            }
        }
    }
}


void doExport(){
    Export e;
    e.Exporter(customerDB);
}

void doImport(){
    int custCounter;
    Import i;
    vector<Customer> temp = i.Importer();
    customerDB = temp;
    for(int i = 0; i < customerDB.size(); i++){
        obj = temp.at(i);
        obj.display();
        cout << endl;
        custCounter = i + 1;
        if(i == temp.size() - 1){
            cout<<"Total: ";
            cout<<custCounter<<endl;
        }
    }
}

void printWelcomeArt(){

    cout << "                                                                                                                                           \n";
    cout << "                                                                                                                                           \n";
    cout << "PPPPPPPPPPPPPPPPP   EEEEEEEEEEEEEEEEEEEEEE               AAA               RRRRRRRRRRRRRRRRR        DDDDDDDDDDDDD      BBBBBBBBBBBBBBBBB   \n";
    cout << "P::::::::::::::::P  E::::::::::::::::::::E              A:::A              R::::::::::::::::R       D::::::::::::DDD   B::::::::::::::::B  \n";
    cout << "P::::::PPPPPP:::::P E::::::::::::::::::::E             A:::::A             R::::::RRRRRR:::::R      D:::::::::::::::DD B::::::BBBBBB:::::B \n";
    cout << "PP:::::P     P:::::PEE::::::EEEEEEEEE::::E            A:::::::A            RR:::::R     R:::::R     DDD:::::DDDDD:::::DBB:::::B     B:::::B\n";
    cout << "  P::::P     P:::::P  E:::::E       EEEEEE           A:::::::::A             R::::R     R:::::R       D:::::D    D:::::D B::::B     B:::::B\n";
    cout << "  P::::P     P:::::P  E:::::E                       A:::::A:::::A            R::::R     R:::::R       D:::::D     D:::::DB::::B     B:::::B\n";
    cout << "  P::::PPPPPP:::::P   E::::::EEEEEEEEEE            A:::::A A:::::A           R::::RRRRRR:::::R        D:::::D     D:::::DB::::BBBBBB:::::B \n";
    cout << "  P:::::::::::::PP    E:::::::::::::::E           A:::::A   A:::::A          R:::::::::::::RR         D:::::D     D:::::DB:::::::::::::BB  \n";
    cout << "  P::::PPPPPPPPP      E:::::::::::::::E          A:::::A     A:::::A         R::::RRRRRR:::::R        D:::::D     D:::::DB::::BBBBBB:::::B \n";
    cout << "  P::::P              E::::::EEEEEEEEEE         A:::::AAAAAAAAA:::::A        R::::R     R:::::R       D:::::D     D:::::DB::::B     B:::::B\n";
    cout << "  P::::P              E:::::E                  A:::::::::::::::::::::A       R::::R     R:::::R       D:::::D     D:::::DB::::B     B:::::B\n";
    cout << "  P::::P              E:::::E       EEEEEE    A:::::AAAAAAAAAAAAA:::::A      R::::R     R:::::R       D:::::D    D:::::D B::::B     B:::::B\n";
    cout << "PP::::::PP          EE::::::EEEEEEEE:::::E   A:::::A             A:::::A   RR:::::R     R:::::R     DDD:::::DDDDD:::::DBB:::::BBBBBB::::::B\n";
    cout << "P::::::::P          E::::::::::::::::::::E  A:::::A               A:::::A  R::::::R     R:::::R     D:::::::::::::::DD B:::::::::::::::::B\n";
    cout << "P::::::::P          E::::::::::::::::::::E A:::::A                 A:::::A R::::::R     R:::::R     D::::::::::::DDD   B::::::::::::::::B\n";
    cout << "                                                                                                                                           \n";

}

void startMenu() {

    printWelcomeArt();

    while(choice != 16) {
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
        //cout << "13. Purchase a phone" << endl;
        cout << "13. Search customers by Plan ID or Payment Method" << endl;
        cout << "14. Export current customer database to JSON file" << endl;
        cout << "15. Import customer database from a JSON file" << endl;
        cout << "16. Exit" << endl;
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
            AddNewPhone();
        }

        else if(choice == 6) {
            ViewPhone();
        }

        else if(choice == 7) {
            EditPhone();
        }

        else if(choice == 8) {
            cout << "Please Enter Phone ID: ";
            cin >> var;
            for(int i = 0; i < phoneDB.size(); i++) {
                phone = phoneDB.at(i);
                if(phone.getPhoneID() == var) {
                    swap(phoneDB.at(i),phoneDB.back());
                    phoneDB.pop_back();
                }
            }
        }

        else if(choice == 9) {
            AddNewPlan();
        }

        else if(choice == 10) {
            PrintPlan();
        }

        else if(choice == 11) {
            EditPlan();
        }

        else if(choice == 12) {
            cout << "Please Enter Plan ID: ";
            cin >> planId;
            for(int i = 0; i < planDB.size(); i++) {
                plan = planDB.at(i);
                if(plan.getPlId() == planId) {
                    swap(planDB.at(i),planDB.back());
                    planDB.pop_back();
                }
            }
        }

        else if(choice == 13) {
            searchCust();
        }
        else if (choice == 14){
            doExport();
        }
        else if (choice == 15){
            doImport();
        }else if(choice == 16){
            break;
        }else if(choice < 1 || choice > 16) {
            cout << "Invalid Option";
        }
    }
}

int main() {

    startMenu();

    return 0;
}