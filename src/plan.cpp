#include "../header/plan.h"
#include <iostream>


Plan::Plan() {
    int planChoice = 0;
    double planPrice = 0.0;
    double minuteAll = 0.0;
    double textAll = 0.0;
    double dataAll = 0.0;
    string planName = "";
    string startDate = "0000 01 01";
    string endDate = "0000 01 01";
    string contractLength = "0000 01 01";
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

/*void Plan::calculatePeriod() {
    string start, end;
    start = "0000 01 01";
    cout << start;
    end = "0000 01 01";
    cout << end;

    tm tm_start_date = {};
    tm tm_end_date = {};
    istringstream ss_start_date("0000 01 01");
    istringstream ss_end_date("0000-01-01");
    ss_start_date >> get_time(&tm_start_date, "%Y-%m-%d");
    ss_end_date >> get_time(&tm_end_date, "%Y-%m-%d");
    time_t start_time = mktime(&tm_start_date);
    time_t end_time = mktime(&tm_end_date);

    // Calculate the period between the two dates
    chrono::duration<double> duration = chrono::duration_cast<chrono::duration<double>>(chrono::seconds(end_time - start_time));
    int total_days = duration.count() / (60 * 60 * 24);
    int years = total_days / 365;
    int days = total_days % 365;

    // Convert the period to a string
    string period = "";
    if (years > 0) {
        period = to_string(years) + " years and " + to_string(days) + " days";
    } else {
        period = to_string(days) + " days";
    }
    this->contractLength = period;
}*/

void Plan::printCurrPlan() {
    cout << "Plan Name:" << planName << endl;
    cout << "Plan Id:" << planId << endl;
    cout << "Plan Choice:" << planChoice << endl;
    cout << "Plan Price: " << planPrice << endl;
}
