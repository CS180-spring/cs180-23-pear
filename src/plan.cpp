#include "plan.h"
#include <iostream>

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