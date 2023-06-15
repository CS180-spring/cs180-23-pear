#ifndef SORT_H
#define SORT_H

#include <string>
#include <vector>

using namespace std;

class Searcher {
    public:
        vector<Customer> searchByPlanID(const vector<Customer> items, int searchBy);
        vector<Customer> searchByPayment(const vector<Customer> items, string p);
        vector<Customer> searchByPaymentAndPlan(const vector<Customer>& items, int searchByPlan, const string& searchByPayment);
};

#endif
