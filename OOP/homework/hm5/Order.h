
// . The "Order" class should have the following attributes:
//         Order ID (an integer)
//         Customer name (a string)
//         Ordered products (an array/vector of Product objects)
//         (Vectors: https://www.geeksforgeeks.org/vector-in-cpp-stl/)

#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "Product.h" // Include the Product class header

using namespace std;

class Order {
private:
    int orderID;
    string customerName;
    vector<Product> orderedProducts; // Vector to hold ordered products

public:
    // Constructor
    Order(int id, const string &name);

    // Method to add a product to the order
    void addProduct(const Product &product);

    // Method to calculate the total price of the order
    double calculateTotal() const;

    // Getters
    int getOrderID() const;
    string getCustomerName() const;
    const vector<Product>& getOrderedProducts() const;
};
Order::Order(int id, const string &name) : orderID(id), customerName(name) {}

void Order::addProduct(const Product &product) {
    orderedProducts.push_back(product);
}

double Order::calculateTotal() const {
    double total = 0.0;
    for (const auto &product : orderedProducts) {
        total += product.getProductPrice();
    }
    return total;
}

int Order::getOrderID() const {
    return orderID;
}

string Order::getCustomerName() const {
    return customerName;
}

const vector<Product>& Order::getOrderedProducts() const {
    return orderedProducts;
}


#endif // ORDER_H