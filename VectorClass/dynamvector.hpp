#include <cstddef>
#include <iostream>

// ~std::array
class Vector {
	private:
		int *_values;
		std::size_t _size;

	public:
		Vector();
		Vector(std::size_t size);
		Vector(const Vector &v);

		~Vector();

		std::size_t size() const;
		void print() const;

		Vector &operator=(const Vector &v);
		int &operator[](std::size_t idx);
		friend std::ostream &operator<<(std::ostream &out, const Vector &v);
};
