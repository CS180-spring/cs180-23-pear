#ifndef PHONE_H
#define PHONE_H

#include <string>

using namespace std;

class Phone {
    private:
        string make;
        string model;
        string storage;
        string color;
        int phoneID;
        double phonePrice;
        bool availibility;
    public:
        string getMake() const;
        string getModel() const;
        string getStorage() const;
        string getColor() const;
        int getPhoneID() const;
        double getPhonePrice() const;
        bool getAvail() const;

        void setMake(string make);
        void setModel(string model);
        void setStorage(string storage);
        void setColor(string color);
        void setPhoneID(int phoneID);
        void setPhonePrice(double price);
        void setAvail(bool availibility);
};


#endif