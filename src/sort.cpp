#include <vector>
#include "../header/customer.h"
#include "../header/sort.h"
#include <iostream>
using namespace std;

    vector<Customer> sortedCustomers;

    vector<Customer> Sorter::sortByPlanID(const vector<Customer> items, int sortBy) {
        sortedCustomers.clear();
        if(sortBy == 1){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPlanId() == sortBy) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else if(sortBy == 2){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPlanId() == sortBy) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else if(sortBy == 3){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPlanId() == sortBy) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else{
            cout<<"No customers exist with plan " << sortBy << " please try again." ;
        }
       if(sortedCustomers.size() == 0){
            cout<<"No customers exist with plan " << sortBy << " please try again." ;

       }
        return sortedCustomers;
    };

    vector<Customer> Sorter::sortByPayment(const vector<Customer> items, string paymentM) {
        sortedCustomers.clear();
        if(paymentM == "master"||"Master"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else if(paymentM == "visa"||"Visa"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else if(paymentM == "paypal"||"Paypal"||"PayPal"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else if(paymentM == "stripe"||"Stripe"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else{
            cout<<"No customers exist with " << paymentM << " payment method please try again." ;
        }
       
        return sortedCustomers;
    };
