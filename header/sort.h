#ifndef SORT_H
#define SORT_H

#include <string>

using namespace std;

class Sorter {
    public:
        vector<Customer> sortByPlanID(const vector<Customer> items, int sortBy);
        vector<Customer> sortByPayment(const vector<Customer> items, string p);
};

#endif
