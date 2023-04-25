#include "gtest/gtest.h"
#include "../header/Filter.h"
#include "../header/Task.h"
#include "../header/TaskList.h"
#include "../header/Goal.h"
#include "../header/Menu.h"
#include "../testing/View_test.hpp"
#include<vector>
using namespace std;

CustomerList testList = CustomerList("Test");
static std::stringstream output2;
vector<Customer> allLists;
Customer *staticCustomer = new Customer("Essay", "For HIST 108", 1, 20,"07/01/20", "Summer 2020", false, 2);
Customer *customer2 = new Customer("Study Guide", "For CS 100", 1, 3,"03/11/22", "Winter 2022", false, 0);
Customer *customer3 = new Customer("Lab 3", "For CS 111", 1, 20,"03/01/22", "Winter 2022", false, 2);

TEST(TaskConstructorTest, defaultConstructor){
    Customer *test = new Customer();
    EXPECT_EQ(test->Goal::getName(), "");
    EXPECT_EQ(test->getId(), "561252");
    EXPECT_EQ(test->getAddress(), "");
    EXPECT_EQ(test->getPhoneNumber(), "9515444343");
    EXPECT_EQ(test->getPlanId(), "12222");
    EXPECT_EQ(test->getPaymentMethod(), "Visa");
    delete test;
}

int main(int argc, char **argv) {
    Customer *customer1 = new Customer("Lecture Videos", "For CS 100", 2, 10,"03/19/22", "Winter 2022", false, 5);
    testList.addCustomer(customer1);
    ::testing::InitGoogleTest(&argc, argv);
    int val = RUN_ALL_TESTS();
    delete customer1; delete customer2; delete customer3; delete staticCustomer; 
    allLists.clear();
    return val;
}