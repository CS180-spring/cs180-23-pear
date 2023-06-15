#ifndef SORTER_H
#define SORTER_H

#include <string>
#include <vector>
#include "../header/customer.h"

using namespace std;

class Sorter {

    private:
        static int userChoice;
        static int getUserChoice();

    public:
        static bool compareCustomers(const Customer& c1, const Customer& c2);
        vector<Customer> sortBy(const vector<Customer> items, int choice);
};

#endif
