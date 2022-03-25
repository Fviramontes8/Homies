#include "dynamvector.hpp"
#include <cassert>

Vector::Vector() : _values{nullptr}, _size{0} {}

Vector::Vector(size_t size) : _values{nullptr}, _size{size} {
	_values = new int[size];
	assert(_values != nullptr);
}

Vector::~Vector() {
	delete[] _values;
}

size_t Vector::size() const {
	return _size;
	//return this->_size;
}

void Vector::print() const {
	for (size_t i=0; i<_size; ++i) {
		std::cout << _values[i];
		std::cout << ' ';
	}
}

Vector &Vector::operator=(const Vector &v) {
	if (this == &v) {
		return *this;
	}
	assert(_size == v._size);

	for (size_t i=0; i<_size; ++i) {
		_values[i] = v._values[i];
	}

	return *this;
}

int &Vector::operator[](size_t idx) {
	assert(idx < _size);
	return _values[idx];
}

std::ostream &operator<<(std::ostream &out, const Vector &v) {
	for (size_t i=0; i<v.size(); ++i) {
		out << v._values[i] << ' ';
	}
	return out;
}
