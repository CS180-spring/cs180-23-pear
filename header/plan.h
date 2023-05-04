#ifndef PLAN_H
#define PLAN_H

#include <string>

using namespace std;

class Plan {
    private:
        string planName;
        int planChoice;
        double planPrice;
        double featurePrice;
    public:
        Plan();
        Plan(int planId, string planName, int planChoice, double planPrice);
        double getPlanChoice() const;
        string getPlanName() const;
        double getPlanPrice() const;
        double getFeaturePrice() const;


        void updatePlanPrice(double priceChange);
        void setPlanPrice(double planPrice);
        void setFeaturePrice(double featurePrice);
        
        void printCurrPlan();
        void printPrevPlan();
};


#endif