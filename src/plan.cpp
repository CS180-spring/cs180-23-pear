#include "plan.h"
#include <iostream>


Plan::Plan() {
    id = 0;
    name = "";
    address = "";
    phoneNumber = "";
    planId = 0;
    paymentMethod = "";
    string planName;
    int planChoice = 0;
    double planPrice = 0.0;
    double featurePrice = 0.0;
}

Plan::Plan(int id, string name, string address, string phoneNumber, int planId, string paymentMethod){
    this->id = id;
    this->name = name;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->planId = planId;
    this->paymentMethod = paymentMethod;
}

double Plan::getPlanPrice() const {
    return planPrice;
}

double Plan::getFeaturePrice() const {
    return featurePrice;
}

void Plan::updatePlanPrice(double priceChange) {
    this->planPrice += priceChange;
}

void Plan::setPlanPrice(double planPrice) {
    this->planPrice = planPrice;
}

void Plan::setFeaturePrice(double planPrice) {
    this->featurePrice = featurePrice;
}

void printCurrPlan() {

}

void printPrevPlan() {

}