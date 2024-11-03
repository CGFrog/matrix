#pragma once
#include <vector>
#include <iostream>

class matrix {
    unsigned int rows;
    unsigned int columns;
    std::vector<std::vector<float>> indicies;
public:
    matrix(int, int);
    unsigned int get_rows() const;
    unsigned int get_columns() const;
    std::vector<std::vector<float>> get_indicies();
    void set_rows(unsigned int);
    void set_columns(unsigned int);
    void set_indicies(const std::vector<std::vector<float>>&);
    void print();
};