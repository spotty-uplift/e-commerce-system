// ShoppingCart.h
#pragma once
#include <vector>
#include "Product.h"

class ShoppingCart {
public:
    void addToCart(const Product& product);
    void displayCart() const;

private:
    std::vector<Product> products;
};
