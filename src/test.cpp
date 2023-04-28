#include "gtest/gtest.h"
#include "../header/customer.h"
#include<vector>
using namespace std;

Customer testList = Customer();
static std::stringstream output2;
vector<Customer> allLists;
Customer staticCustomer = Customer(234156, "Trevor","", "9515588585", 24324, "Master");
Customer customer2 = Customer(33345554, "Josue","", "9512234398", 11345, "Visa");

TEST(TaskConstructorTest, defaultConstructor){
    Customer test = Customer(234156, "Trevor","", "9515588585", 24324, "Master");
    EXPECT_EQ(test.getId(), 561252);
    EXPECT_EQ(test.getName(), "");
    EXPECT_EQ(test.getAddress(), "");
    EXPECT_EQ(test.getPhoneNumber(), 9515444343);
    EXPECT_EQ(test.getPlanId(), 12222);
    EXPECT_EQ(test.getPaymentMethod(), "Visa");
}

int main(int argc, char **argv) {
    Customer customer1 = Customer(561252, "Arthur","", "9515444343", 12222, "Visa");
    //customer1.AddNewCustomer();
    ::testing::InitGoogleTest(&argc, argv);
    int val = RUN_ALL_TESTS();
    allLists.clear();
    return val;
}