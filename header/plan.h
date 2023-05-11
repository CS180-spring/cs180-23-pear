#ifndef PLAN_H
#define PLAN_H

#include <string>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;
using std::istringstream;

class Plan {
    private:
        string planName;
        int planId;
        int planChoice;
        double planPrice;
        string startDate;
        string endDate;
        double minuteAll;
        double textAll;
        double dataAll;
        string contractLength;
    public:
        Plan();
        Plan(int planId, string planName, string startDate, string endDate, int planChoice, double planPrice, double minuteAll, double textAll, double dataAll);
        int getPlanChoice() const;
        int getPlanId() const;
        string getPlanName() const;
        string getStartDate() const;
        string getEndDate() const;
        double getPlanPrice() const;
        double getMinuteAllowance() const;
        double getTextAllowance() const;
        double getDataAllowance() const;


        void updatePlanPrice(double priceChange);
        void setPlanPrice(double planPrice);
        void setPlanName(string planName);
        void setPlanChoice(int planChoice);
        void setPlanId(int planId);
        void setStartDate(string startDate);
        void setEndDate(string endDate);
        void setMinuteAllowance(double minuteAll);
        void setTextAllowance(double textAll);
        void setDataAllowance(double dataAll);
        
        void calculatePeriod();
        void printCurrPlan();
};


#endif