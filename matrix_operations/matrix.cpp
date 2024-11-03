#include "matrix.h"

matrix::matrix(int rows, int columns) {
	set_rows(rows);
	set_columns(columns);
}

unsigned int matrix::get_columns() const{
	return columns;
}
unsigned int matrix::get_rows() const {
	return rows;
}
std::vector<std::vector<float>> matrix::get_indicies() {
	return indicies;
}
void matrix::set_rows(unsigned int rows) {
	this->rows = rows;
}
void matrix::set_columns(unsigned int columns) {
	this->columns = columns;
}
void matrix::set_indicies(const std::vector<std::vector<float>>& indicies) {
	this->indicies = indicies;
}
void matrix::print() {
	for (int i = 0; i < get_rows(); i++) {
		std::cout << "[ ";
		for (int j = 0; j < get_columns(); j++) {
			if (j != get_columns() - 1) std::cout << indicies[i][j] << ", ";
			else std::cout << indicies[i][j];
		}
		std::cout << " ]" << std::endl;
	}
}