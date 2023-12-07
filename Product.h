// Product.h
#pragma once
#include <string>

class Product {
public:
    Product(int id, const std::string& name, double price);

    int getId() const;
    const std::string& getName() const;
    double getPrice() const;

private:
    int id;
    std::string name;
    double price;
};
