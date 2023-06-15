#ifndef EXPORT_H
#define EXPORT_H

#include <vector>

using namespace std;

class Export {
    public:
        int Exporter(const vector<Customer> items);
        int Exporter(const vector<Customer> items, int flag);
};

#endif
