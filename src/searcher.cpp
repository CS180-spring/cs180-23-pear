#include <vector>
#include "../header/customer.h"
#include "../header/searcher.h"
#include <iostream>
using namespace std;

    vector<Customer> searchCustomers;

    vector<Customer> Searcher::searchByPlanID(const vector<Customer> items, int searchBy) {
        searchCustomers.clear();
        if(searchBy == 1){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPlanId() == searchBy) {
                    searchCustomers.push_back(items.at(i));
                }
            }
        }else if(searchBy == 2){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPlanId() == searchBy) {
                    searchCustomers.push_back(items.at(i));
                }
            }
        }else if(searchBy == 3){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPlanId() == searchBy) {
                    searchCustomers.push_back(items.at(i));
                }
            }
        }else{
            cout<<"No customers exist with plan " << searchBy << " please try again."<<endl ;
        }
    //    if(searchCustomers.size() == 0){
    //         cout<<"No customers exist with plan " << searchBy << " please try again."<<endl ;
    //    }
        return searchCustomers;
    };

    vector<Customer> Searcher::searchByPayment(const vector<Customer> items, string paymentM) {
        searchCustomers.clear();
        if(paymentM == "master"||"Master"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    searchCustomers.push_back(items.at(i));
                }
            }
        }else if(paymentM == "visa"||"Visa"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    searchCustomers.push_back(items.at(i));
                }
            }
        }else if(paymentM == "paypal"||"Paypal"||"PayPal"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    searchCustomers.push_back(items.at(i));
                }
            }
        }else if(paymentM == "stripe"||"Stripe"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    searchCustomers.push_back(items.at(i));
                }
            }
        }else{
            cout<<"No customers exist with " << paymentM << " payment method please try again." <<endl;
        }
        if(searchCustomers.size() == 0){
            cout<<"No customers exist with " << paymentM << " payment method please try again."<<endl ;
       }
       
        return searchCustomers;
    };

    vector<Customer> Searcher::searchByPaymentAndPlan(const vector<Customer>& items, int searchByPlan, const string& searchByPayment) {
    searchCustomers.clear();

    for (const Customer& customer : items) {
        if (customer.getPlanId() == searchByPlan && customer.getPaymentMethod() == searchByPayment) {
            searchCustomers.push_back(customer);
        }
    }

    if (searchCustomers.empty()) {
        cout << "No customers exist with plan " << searchByPlan << " and " << searchByPayment << " payment method. Please try again." << endl;
    }

    return searchCustomers;
}
