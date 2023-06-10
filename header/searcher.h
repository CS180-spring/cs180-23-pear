#ifndef SORT_H
#define SORT_H

#include <string>

using namespace std;

class Searcher {
    public:
        vector<Customer> searchByPlanID(const vector<Customer> items, int searchBy);
        vector<Customer> searchByPayment(const vector<Customer> items, string p);
};

#endif
