// ShoppingCart.cpp
#include "ShoppingCart.h"
#include <iostream>

void ShoppingCart::addToCart(const Product& product) {
    products.push_back(product);
}

void ShoppingCart::displayCart() const {
    std::cout << "Shopping Cart:\n";
    for (const auto& product : products) {
        std::cout << "Product: " << product.getName() << " - Price: " << product.getPrice() << '\n';
    }
}
