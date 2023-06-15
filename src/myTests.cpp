#include "gtest/gtest.h"
#include "../header/customer.h"
#include "../header/searcher.h"
#include "../header/export.h"
#include "../header/import.h"
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

// Test fixture for the Searcher class
class SearcherTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Initialize customerDB with some test data
        customerDB.push_back(Customer(1, "John", "", "1234567890", 1, "Visa"));
        customerDB.push_back(Customer(2, "Jane", "", "9876543210", 2, "Master"));
        customerDB.push_back(Customer(3, "Alice", "", "4567891230", 1, "Visa"));
        customerDB.push_back(Customer(4, "Bob", "", "3216549870", 3, "Paypal"));
    }

    void TearDown() override {
        // Clear customerDB after each test case
        customerDB.clear();
    }

    vector<Customer> customerDB;
};

TEST_F(SearcherTest, SearchByPlanID_ValidPlanID) {
    Searcher s;
    vector<Customer> searchResult = s.searchByPlanID(customerDB, 2);

    // Verify that the correct number of customers is returned
    EXPECT_EQ(searchResult.size(), 1);

    // Verify the attributes of the returned customer
    EXPECT_EQ(searchResult[0].getId(), 2);
    EXPECT_EQ(searchResult[0].getName(), "Jane");
    EXPECT_EQ(searchResult[0].getPhoneNumber(), "9876543210");
    EXPECT_EQ(searchResult[0].getPlanId(), 2);
    EXPECT_EQ(searchResult[0].getPaymentMethod(), "Master");
}

TEST_F(SearcherTest, SearchByPlanID_InvalidPlanID) {
    Searcher s;
    vector<Customer> searchResult = s.searchByPlanID(customerDB, 5);

    // Verify that no customers are returned
    EXPECT_TRUE(searchResult.empty());
}

TEST_F(SearcherTest, SearchByPaymentAndPlan_ValidPaymentAndPlan) {
    Searcher s;
    vector<Customer> searchResult = s.searchByPaymentAndPlan(customerDB, 1, "Visa");

    // Verify that the correct number of customers is returned
    EXPECT_EQ(searchResult.size(), 2);

    // Verify the attributes of the returned customers
    EXPECT_EQ(searchResult[0].getId(), 1);
    EXPECT_EQ(searchResult[0].getName(), "John");
    EXPECT_EQ(searchResult[0].getPhoneNumber(), "1234567890");
    EXPECT_EQ(searchResult[0].getPlanId(), 1);
    EXPECT_EQ(searchResult[0].getPaymentMethod(), "Visa");

    EXPECT_EQ(searchResult[1].getId(), 3);
    EXPECT_EQ(searchResult[1].getName(), "Alice");
    EXPECT_EQ(searchResult[1].getPhoneNumber(), "4567891230");
    EXPECT_EQ(searchResult[1].getPlanId(), 1);
    EXPECT_EQ(searchResult[1].getPaymentMethod(), "Visa");
}

TEST_F(SearcherTest, SearchByPaymentAndPlan_InvalidPaymentAndPlan) {
    Searcher s;
    vector<Customer> searchResult = s.searchByPaymentAndPlan(customerDB, 2, "Paypal");

    // Verify that no customers are returned
    EXPECT_TRUE(searchResult.empty());
}

// Test fixture for the Export class
class ExportTest : public ::testing::Test {
protected:
    void TearDown() override {
        // Delete the generated test files after each test case
        remove("test1.json");
        remove("test2.json");
    }
};

TEST_F(ExportTest, Exporter_ValidData) {
    Export exporter;
    vector<Customer> customers;
    customers.push_back(Customer(1, "John", "123 Main St", "1234567890", 1, "Visa"));
    customers.push_back(Customer(2, "Jane", "456 Elm St", "9876543210", 2, "Master"));

    int result = exporter.Exporter(customers);

    // Verify that the export operation succeeded
    EXPECT_EQ(result, 0);

    // Verify that the output file exists and contains the expected JSON data
    ifstream outputFile("test1.json");
    ASSERT_TRUE(outputFile.is_open());

    stringstream buffer;
    buffer << outputFile.rdbuf();
    string fileContent = buffer.str();

    json jsonArray = json::parse(fileContent);

    // Verify the number of objects in the JSON array
    EXPECT_EQ(jsonArray.size(), 2);

    // Verify the attributes of the first customer
    EXPECT_EQ(jsonArray[0]["id"], 1);
    EXPECT_EQ(jsonArray[0]["name"], "John");
    EXPECT_EQ(jsonArray[0]["address"], "123 Main St");
    EXPECT_EQ(jsonArray[0]["phoneNumber"], "1234567890");
    EXPECT_EQ(jsonArray[0]["planID"], 1);
    EXPECT_EQ(jsonArray[0]["paymentMethod"], "Visa");

    // Verify the attributes of the second customer
    EXPECT_EQ(jsonArray[1]["id"], 2);
    EXPECT_EQ(jsonArray[1]["name"], "Jane");
    EXPECT_EQ(jsonArray[1]["address"], "456 Elm St");
    EXPECT_EQ(jsonArray[1]["phoneNumber"], "9876543210");
    EXPECT_EQ(jsonArray[1]["planID"], 2);
    EXPECT_EQ(jsonArray[1]["paymentMethod"], "Master");
}

TEST_F(ExportTest, Exporter_EmptyData) {
    Export exporter;
    vector<Customer> customers; // Empty customer vector

    int result = exporter.Exporter(customers);

    // Verify that the export operation succeeded
    EXPECT_EQ(result, 0);

    // Verify that the output file exists and contains an empty JSON array
    ifstream outputFile("test2.json");
    ASSERT_TRUE(outputFile.is_open());

    stringstream buffer;
    buffer << outputFile.rdbuf();
    string fileContent = buffer.str();

    json jsonArray = json::parse(fileContent);

    // Verify that the JSON array is empty
    EXPECT_TRUE(jsonArray.empty());
}

// Test fixture for the Import class
class ImportTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Create test JSON files
        ofstream file1("test1.json");
        file1 << R"([
            {
                "id": 1,
                "name": "John",
                "address": "123 Main St",
                "phoneNumber": "1234567890",
                "planID": 1,
                "paymentMethod": "Visa"
            },
            {
                "id": 2,
                "name": "Jane",
                "address": "456 Elm St",
                "phoneNumber": "9876543210",
                "planID": 2,
                "paymentMethod": "Master"
            }
        ])";
        file1.close();

        ofstream file2("test2.json");
        file2 << "invalid JSON data"; // Invalid JSON data
        file2.close();

        ofstream file3("test3.json");
        file3 << "[]"; // Empty JSON array
        file3.close();
    }

    void TearDown() override {
        // Delete the generated test files after each test case
        remove("test1.json");
        remove("test2.json");
        remove("test3.json");
    }
};

TEST_F(ImportTest, Importer_ValidData) {
    Import importer;

    vector<Customer> customers = importer.Importer("test1.json");

    // Verify the number of customers imported
    EXPECT_EQ(customers.size(), 2);

    // Verify the attributes of the first customer
    EXPECT_EQ(customers[0].getId(), 1);
    EXPECT_EQ(customers[0].getName(), "John");
    EXPECT_EQ(customers[0].getAddress(), "123 Main St");
    EXPECT_EQ(customers[0].getPhoneNumber(), "1234567890");
    EXPECT_EQ(customers[0].getPlanId(), 1);
    EXPECT_EQ(customers[0].getPaymentMethod(), "Visa");

    // Verify the attributes of the second customer
    EXPECT_EQ(customers[1].getId(), 2);
    EXPECT_EQ(customers[1].getName(), "Jane");
    EXPECT_EQ(customers[1].getAddress(), "456 Elm St");
    EXPECT_EQ(customers[1].getPhoneNumber(), "9876543210");
    EXPECT_EQ(customers[1].getPlanId(), 2);
    EXPECT_EQ(customers[1].getPaymentMethod(), "Master");
}

TEST_F(ImportTest, Importer_InvalidData) {
    Import importer;

    vector<Customer> customers = importer.Importer("test2.json");

    // Verify that no customers are imported
    EXPECT_TRUE(customers.empty());
}

TEST_F(ImportTest, Importer_EmptyData) {
    Import importer;

    vector<Customer> customers = importer.Importer("test3.json");

    // Verify that no customers are imported
    EXPECT_TRUE(customers.empty());
}

int main(int argc, char **argv) {
    Customer customer1 = Customer(561252, "Arthur","", "9515444343", 12222, "Visa");
    //customer1.AddNewCustomer();
    ::testing::InitGoogleTest(&argc, argv);
    int val = RUN_ALL_TESTS();
    allLists.clear();
    return val;
}