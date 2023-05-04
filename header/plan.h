#ifndef PLAN_H
#define PLAN_H

#include <string>

using namespace std;

class Plan {
    private:
        string planName;
        int planChoice;
        int phoneID;
        double planPrice;
        int featurePrice;
    public:
        double getPlanPrice() const;
        double getFeaturePrice() const;


        void updatePlanPrice(double priceChange);
        void setPlanPrice(double planPrice);
        void setFeaturePrice(double featurePrice);
        
        void printCurrPlan();
        void printPrevPlan();
};


#endif