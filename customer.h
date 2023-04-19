#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>

using namespace std;

class Customer {
    private:
        int id;
        string name;
        string address;
        int phoneNumber;
        int planId;
        string paymentMethod;
    public:
        Customer(int id, string name, string address, int phoneNumber, int planId, string paymentMethod);

        int getId() const;
        string getName() const;
        string getAddress() const;
        int getPhoneNumber() const;
        int getPlanId() const;
        string getPaymentMethod() const;

        void setName(string name);
        void setAddress(string address);
        void setPhoneNumber(int phoneNumber);
        void setPlanId(int planId);
        void setPaymentMethod(string paymentMethod);

        void display() const;

};

#endif