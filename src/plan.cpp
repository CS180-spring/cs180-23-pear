#include "../header/plan.h"
#include <iostream>

using namespace std;


Plan::Plan() {
    int planChoice = 0;
    double planPrice = 0.0;
    double minuteAll = 0.0;
    double textAll = 0.0;
    double dataAll = 0.0;
    string planName = "";
    string startDate = "01-01-0000";
    string endDate = "01-01-0000";
    int planId = 0;
}

Plan::Plan(int planId, string planName, string startDate, string endDate, int planChoice, double planPrice, double minuteAll, double textAll, double dataAll){
    this->planId = planId;
    this->planName = planName;
    this->planChoice = planChoice;
    this->planPrice = planPrice;
    this->startDate = startDate;
    this->endDate = endDate;
    this->minuteAll = minuteAll;
    this->textAll = textAll;
    this->dataAll = dataAll;
}

double Plan::getPlanPrice() const {
    return planPrice;
}

double Plan::getMinuteAllowance() const {
    return minuteAll;
}

double Plan::getTextAllowance() const {
    return textAll;
}

double Plan::getDataAllowance() const {
    return dataAll;
}

int Plan::getPlanChoice() const {
    return planChoice;
}

int Plan::getPlId() const {
    return planId;
}

string Plan::getPlanName() const {
    return planName;
}

string Plan::getEndDate() const {
    return endDate;
}

string Plan::getStartDate() const {
    return startDate;
}

void Plan::setPlanPrice(double planPrice) {
    this->planPrice = planPrice;
}

void Plan::setPlId(int planId) {
    this->planId = planId;
}

void Plan::setPlanName(string planName) {
    this->planName = planName;
}

void Plan::setPlanChoice(int planChoice) {
    this->planChoice = planChoice;
}

void Plan::setStartDate(string startDate) {
    this->startDate = startDate;
}

void Plan::setEndDate(string endDate) {
    this->endDate = endDate;
}

void Plan::setDataAllowance(double dataAll) {
    this->dataAll = dataAll;
}

void Plan::setMinuteAllowance(double minuteAll) {
    this->minuteAll = minuteAll;
}

void Plan::setTextAllowance(double textAll) {
    this->textAll = textAll;
}

/*void Plan::calculatePeriod(string start, string end) {
    int years = 0, months = 0, days = 0;
    string period = "";
    int monthsDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Convert the period to a string
    int d1, m1, y1, d2, m2, y2;
    cout << "start here@@@@@@@@" << endl;
    string tempVar;
    tempVar = start.substr(0,2);
    cout << tempVar << endl;
    d1 = stoi(start.substr(0,2));
    cout << d1 << endl;
    m1 = stoi(start.substr(3,5));
    cout << m1 << endl;
    y1 = stoi(start.substr(6,9));
    cout << y1 << endl;
    d2 = stoi(end.substr(0,2));
    cout << d2 << endl;
    m2 = stoi(end.substr(3,5));
    cout << m2 << endl;
    y2 = stoi(end.substr(6,9));
    cout << y2 << endl;

    cout << d1 << " " << m1 << " " << y1 << " " << d2 << " " << m2 << " " << y2;

    /*if(y1%4 == 0) {
        if(y2%4 == 0) {
            if (m1 < 2) {
                days++;
            }
            if (m2 > 2) {
                days++;
            }
            if (y2 - y1 > 0) {
                days+= 365 * (y2 - y1);
            }
        }
    }*/

    /*if(y1 == y2) {
        months = m2 - m1;
        if (d2 < d1) {
            months--;
        }
        if(y1 % 4 == 0 && y1 % 100 != 0) {
            days ++;
        }
        if (y1 % 400 == 0) {
            days++;
        }
    
    }
    else {
        if(y1 % 4 == 0 && m2 > 2) {
            days--;
        }
        while (y1 != y2) {
            years++;
            if(y1 % 4 == 0 && y1 % 100 != 0) {
                days ++;
            }
            if (y1 % 400 == 0) {
                days++;
            }
            y1++;
        }
        /*if (y2 % 4 == 0 && y2 % 100 != 0 && (m2 == 1 || (m2 == 2 && days < 29))) {
            days--;
        }*/
        /*if (m1 > m2 || (m1 == m2 && d1 > d2)) {
            years--;
            months = (12 - m1) + m2;
        }
        else {
            months = m2 - m1;
        }
        if (d1 > d2) {
            days = monthsDays[m1-1] - d1 + d2;
        }
        else {
            days = d1 - d2;
        }
    }

    if (years > 0) {
        period = to_string(years) + " year(s) and " + to_string(months) + " month(s) " + to_string(days) + " day(s)";
    } 
    else {
        period = to_string(days) + " day(s)";
    }
    this->contractLength = period;
    cout << period << endl;
}*/

void Plan::printCurrPlan() {
    cout << "Plan Name:" << planName << endl;
    cout << "Plan Id:" << planId << endl;
    cout << "Plan Choice:" << planChoice << endl;
    cout << "Plan Price: " << planPrice << endl;
    cout << "Plan Start Date: " << startDate << endl;
    cout << "Plan End Date: " << endDate << endl;
    cout << "Contract Period: " << contractLength << endl;
    cout << "Plan Minute Allowance: " << minuteAll << endl;
    cout << "Plan Text Allowance: " << textAll << endl;
    cout << "Plan Data Allowance: " << dataAll << endl;
}
