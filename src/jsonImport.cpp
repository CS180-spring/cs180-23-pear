#include <iostream>
#include <fstream>
#include <vector>
#include "nlohmann/json.hpp"
#include "../header/customer.h"
#include "../header/import.h"

using namespace std;
using json = nlohmann::json;

vector<Customer> Import::Importer(){
    string filename;
    bool failed = false;
    cout << "Enter the name of the JSON file: ";
    cin >> filename;
    cout <<endl;
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file: " << filename << ", please try again." << endl;
        failed = true;
    }

    json jsonData;

    if(failed == false){
        try {
            file >> jsonData;
        } catch (const exception& e) {
            cout << "Error parsing JSON file, please try again." << endl;
            failed = true;
        }
    }

    vector<Customer> customers;

    if(failed == false){
        for (int i = 0; i < jsonData.size(); i++) {
            int id = jsonData[i]["id"];
            string name = jsonData[i]["name"];
            string addy = jsonData[i]["address"];
            string pNum = jsonData[i]["phoneNumber"];
            int planID = jsonData[i]["planID"];
            string pMethod = jsonData[i]["paymentMethod"]; 
            Customer c(id, name, addy, pNum, planID, pMethod);
            customers.push_back(c);
        }
    }

    return customers;
}
