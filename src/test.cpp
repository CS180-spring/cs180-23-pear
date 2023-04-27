#include "gtest/gtest.h"
#include "../header/customer.h"
#include<vector>
using namespace std;

Customer testList = Customer("Test");
static std::stringstream output2;
vector<Customer> allLists;
Customer *staticCustomer = new Customer(234156, "Trevor","", 9515588585, 24324, "Master");
Customer *customer2 = new Customer("Study Guide", "For CS 100", 1, 3,"03/11/22", "Winter 2022", false, 0);

TEST(TaskConstructorTest, defaultConstructor){
    Customer *test = new Customer();
    EXPECT_EQ(test->getId(), 561252);
    EXPECT_EQ(test->getName(), "");
    EXPECT_EQ(test->getAddress(), "");
    EXPECT_EQ(test->getPhoneNumber(), 9515444343);
    EXPECT_EQ(test->getPlanId(), 12222);
    EXPECT_EQ(test->getPaymentMethod(), "Visa");
    delete test;
}

int main(int argc, char **argv) {
    Customer *customer1 = new Customer(561252, "Arthur","", 9515444343, 12222, "Visa");
    testList.AddNewCustomer();
    ::testing::InitGoogleTest(&argc, argv);
    int val = RUN_ALL_TESTS();
    delete customer1; delete customer2; delete staticCustomer; 
    allLists.clear();
    return val;
}