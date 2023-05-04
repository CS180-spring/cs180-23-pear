#include "plan.h"
#include <iostream>


Plan::Plan() {
    int planChoice = 0;
    double planPrice = 0.0;
}

Plan::Plan(int planChoice, double planPrice){
    this->planChoice = planChoice;
    this->planPrice = planPrice;
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