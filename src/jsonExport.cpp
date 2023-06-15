#include <iostream>
#include <fstream>
#include <vector>
#include "nlohmann/json.hpp"
#include "../header/customer.h"
#include "../header/export.h"


using namespace std;
using json = nlohmann::json;

int Export::Exporter(const vector<Customer> items){
    json jsonArray;
    for(int i = 0; i < items.size(); i++){
        json jsonObj;
        jsonObj["id"] = items.at(i).getId();
        jsonObj["name"] = items.at(i).getName();
        jsonObj["address"] = items.at(i).getAddress();
        jsonObj["phoneNumber"] = items.at(i).getPhoneNumber();
        jsonObj["planID"] = items.at(i).getPlanId();
        jsonObj["paymentMethod"] = items.at(i).getPaymentMethod();
        jsonArray.push_back(jsonObj);

    }
    string filename;
    cout << "Enter the filename to create and write the JSON data to: ";
    cin >> filename;

    // Create the output file and write the JSON array to it
    ofstream outputFile(filename);
    if (outputFile.is_open()) {
        outputFile << jsonArray.dump(4); 
        outputFile.close();
        cout << "JSON file '" << filename << "' created and saved successfully.\n";
    } else {
        cerr << "Failed to create the output file.\n";
        return 1;
    }

    return 0;
}

int Export::Exporter(const vector<Customer> items, int flag){
    json jsonArray;
    for(int i = 0; i < items.size(); i++){
        json jsonObj;
        jsonObj["id"] = items.at(i).getId();
        jsonObj["name"] = items.at(i).getName();
        jsonObj["address"] = items.at(i).getAddress();
        jsonObj["phoneNumber"] = items.at(i).getPhoneNumber();
        jsonObj["planID"] = items.at(i).getPlanId();
        jsonObj["paymentMethod"] = items.at(i).getPaymentMethod();
        jsonArray.push_back(jsonObj);

    }
    string filename = "autosave";
    //cout << "Enter the filename to create and write the JSON data to: ";
    //cin >> filename;

    // Create the output file and write the JSON array to it
    ofstream outputFile(filename);
    if (outputFile.is_open()) {
        outputFile << jsonArray.dump(4); 
        outputFile.close();
        //cout << "JSON file '" << filename << "' created and saved successfully.\n";
    } else {
        cerr << "Failed to autosave.\n";
        return 1;
    }

    return 0;
}