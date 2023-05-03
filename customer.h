#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

using namespace std;

class Customer {
    private:
        int id;
        string name;
        string address;
        string phoneNumber;
        int planId;
        string paymentMethod;
    public:
        Customer();
        Customer(int id, string name, string address, string phoneNumber, int planId, string paymentMethod);

        int getId() const;
        string getName() const;
        string getAddress() const;
        string getPhoneNumber() const;
        int getPlanId() const;
        string getPaymentMethod() const;

        void setID(int id);
        void setName(string name);
        void setAddress(string address);
        void setPhoneNumber(string phoneNumber);
        void setPlanId(int planId);
        void setPaymentMethod(string paymentMethod);
        void display() const;

};

#endif
