#include "gtest/gtest.h"
#include "../header/customer.h"
#include<vector>
using namespace std;

Customer testList = Customer();
static std::stringstream output2;
vector<Customer> allLists;
Customer staticCustomer = Customer(234156, "Trevor","", "9515588585", 24324, "Master");
Customer customer2 = Customer(33345554, "Josue","", "9512234398", 11345, "Visa");

// Plan testPlan = Plan();
// static std::stringstream output3;
// vector<Plan> allPLanLists;
// Plan staticPlan = Plan(114567, "Test Plan 1", "10-02-2022", "12-04-2023", 2, 120.99, 49.99, 30.00, 41.00);
// Plan plan2 = Plan(114567, "Test Plan 2", "11-07-2020", "12-10-2029", 1, 199.99, 79.99, 50.00, 70.00);


TEST(TaskConstructorTest, AddNewCustomer){
    Customer *test = new Customer(234156, "Trevor","", "9515588585", 24324, "Master");
    EXPECT_EQ(test->getId(), 234156);
    EXPECT_EQ(test->getName(), "Trevor");
    EXPECT_EQ(test->getAddress(), "");
    EXPECT_EQ(test->getPhoneNumber(), "9515588585");
    EXPECT_EQ(test->getPlanId(), 24324);
    EXPECT_EQ(test->getPaymentMethod(), "Master");
    delete test;
}

TEST(TaskConstructorTest2, AddNewCustomer){
    Customer *test = new Customer(33345554, "Josue","", "9512234398", 11345, "Visa");
    EXPECT_EQ(test->getId(), 33345554);
    EXPECT_EQ(test->getName(), "Josue");
    EXPECT_EQ(test->getAddress(), "");
    EXPECT_EQ(test->getPhoneNumber(), "9512234398");
    EXPECT_EQ(test->getPlanId(), 11345);
    EXPECT_EQ(test->getPaymentMethod(), "Master");
    delete test;
}

int main(int argc, char **argv) {
    Customer customer1 = Customer(561252, "Arthur","", "9515444343", 12222, "Visa");
    //customer1.AddNewCustomer();
    ::testing::InitGoogleTest(&argc, argv);
    int val = RUN_ALL_TESTS();
    allLists.clear();
    return val;
}