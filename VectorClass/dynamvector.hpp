#include <cstddef>
#include <iostream>

// This will be a class implementation of std::array with int
class Vector {
	private:
		int *_values;
		size_t _size;

	public:
		Vector();
		Vector(size_t size);
		Vector(const Vector &v);

		~Vector();

		size_t size() const;
		void print() const;

		Vector &operator=(const Vector &v);
		int &operator[](size_t idx);
		friend std::ostream &operator<<(std::ostream &out, const Vector &v);
};
