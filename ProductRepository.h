// ProductRepository.h
#pragma once
#include <vector>
#include "Product.h"

class ProductRepository {
public:
    std::vector<Product> getProducts() const;
};
