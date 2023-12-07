// ProductRepository.cpp
#include "ProductRepository.h"

std::vector<Product> ProductRepository::getProducts() const {
    // Fetch products from the database or any other data source
    // This is a simplified example; in a real-world scenario, you would interact with a database
    return {
        {1, "Product A", 19.99},
        {2, "Product B", 29.99},
        {3, "Product C", 39.99}
        // Add more products as needed
    };
}
