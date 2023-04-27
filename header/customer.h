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
        string phoneNumber;
        int planId;
        string paymentMethod;
        string sname;
        string address;
        string payment;
        string temp;
        int id;
        int tracker;
        string num;
        int planId;
        int choice = -1;
        int choice_two = -1;
        vector<Customer> customerDB;
        
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
        void EditCustomer();
        void AddNewCustomer();
        void ViewCustomer();
        void startMenu();

};

#endif