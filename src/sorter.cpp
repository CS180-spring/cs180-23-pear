#include "../header/sorter.h"
#include "../header/customer.h"
#include <vector>
#include <algorithm>

int Sorter::userChoice;

bool Sorter::compareCustomers(const Customer& c1, const Customer& c2) {
    if(getUserChoice() == 1){
        return c1.getPlanId() < c2.getPlanId();
    }
    return c1.getPaymentMethod() < c2.getPaymentMethod();
}

// static bool compareCustomersW(const Customer& c1, const Customer& c2){
//     return compareCustomers(c1, c2);
// }

vector<Customer> Sorter::sortBy(const vector<Customer> items, int choice) {
    vector <Customer> sortedCust = items;
    userChoice = choice;
    sort(sortedCust.begin(), sortedCust.end(), compareCustomers);
    return sortedCust;
}

int Sorter::getUserChoice(){
    return userChoice;
}