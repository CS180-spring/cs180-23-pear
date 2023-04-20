#include "customer.db"

using namespace std;

void CustomerDatabase::addCustomer(Customer customer) {
    customers.push_back(customer);
}
CustomerDatabase::Customer getCustomerById(int id) const {
    // Iterate through customers vector to find customer by ID
    for (const auto& customer : customers) {
        if (customer.getId() == id) {
            return customer;
        }
    }
    // If no customer with the given ID was found, return a default-constructed Customer object.
    return Customer();
}