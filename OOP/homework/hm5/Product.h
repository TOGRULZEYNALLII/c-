#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    double productPrice;

public:
    // Constructor
    Product() {}
    Product(int id, const string &name, double price) ;

    // Getter for Product ID
    int getProductID() const;

    // Getter for Product Name
    string getProductName() const ;

    // Getter for Product Price
    double getProductPrice() const ;
};



    Product::Product(int id, const string& name, double price) {
        productID = id;
        productName = name;
        productPrice = price;
    }
    int Product::getProductID() const {
        return productID;
    }
    string Product::getProductName() const {
        return productName;
    }
    double Product::getProductPrice() const {
        return productPrice;
    }

    

    // Print the order total
#endif // PRODUCT_H