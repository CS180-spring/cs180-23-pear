#ifndef CUSTOMER_DATABASE_H
#define CUSTOMER_DATABASE_H

#include "customer.h"
#include <vector>

using namespace std;

class CustomerDatabase {
    private:
        vector<Customer> customers;
    public:
        void addCustomer(Customer customer);
        Customer getCustomerById(int id) const;
};
