#include <vector>
#include "../header/customer.h"
#include "../header/sort.h"
#include <iostream>
using namespace std;


    vector<Customer> sortedCustomers;

    vector<Customer> Sorter::sortByPlanID(const vector<Customer> items, int sortBy) {
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
       
        return sortedCustomers;
    };

    vector<Customer> Sorter::sortByPayment(const vector<Customer> items, string paymentM) {
        if(paymentM == "mastercard"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else if(paymentM == "visa"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else if(paymentM == "amex"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else if(paymentM == "cash"){
            for (int i = 0; i < items.size(); i++) {
                if (items.at(i).getPaymentMethod() == paymentM) {
                    sortedCustomers.push_back(items.at(i));
                }
            }
        }else if(paymentM == "check"){
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

// // Example usage:
// int main() {
//     

//     return 0;
// }
