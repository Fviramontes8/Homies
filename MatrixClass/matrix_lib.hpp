#include <iostream>
#include <vector>
#include "../VectorClass/dynamvector.hpp"

class Matrix {
	private:
		std::vector<Vector> _data;
		size_t _rows;
		size_t _cols;
	
	public:
		Matrix(size_t row, size_t col);
		~Matrix();

		// Getters
		size_t rows() const;
		size_t cols() const;

		int &get(size_t row_idx, size_t col_idx);

		void transpose();

		int &operator[](size_t idx);
		Matrix &operator=(const Matrix &m);
		friend std::ostream &operator<<(std::ostream &out, const Matrix &m);
};
