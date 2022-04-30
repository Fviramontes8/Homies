#include "AbstractList.hpp"

#include <cassert>

template <typename T>
class ArrayList : public List<T> {
	private:
		T* _data;
		std::size_t _size;

	public: 
		ArrayList() : _size{0}, _data{nullptr} {}

		ArrayList(T value) {
			_data = new T[1];
			assert(_data != nullptr);
			*_data = value;
			_size = 1;
		}

		~ArrayList() {
			delete[] _data;
		}

		T get_element(std::size_t idx) const override {
			assert(idx < size());
			return  _data[idx];
		}

		void set_element(std::size_t idx, T value) override {
			assert(idx < size());
			_data[idx] = value;
		}

		void add_element(T value) override {
			T* data_copy = new T[size()];
			for (int i=0; i<size(); ++i) {
				data_copy[i] = _data[i];
			}

			delete[] _data;
			_data = new T[size()+1];
			assert(_data!=nullptr);

			int i;
			for (i=0; i<size(); ++i) {
				_data[i] = data_copy[i];
			}
			_data[i] = value;

			++_size;
			delete[] data_copy;
		}

		std::size_t size() const override {
			return _size;
		}

		List<T>* as_list() {
			return static_cast<List<T>*>(this);
		}

		template <typename T2>
		friend std::ostream& operator<<(
			std::ostream& out, 
			const ArrayList<T2>& al
		);
};

template <typename T2>
std::ostream& operator<<(std::ostream& out, const ArrayList<T2>& al) {
	for (int i=0; i<al.size(); ++i) {
		out << al._data[i] << ' ';
	}
	return out;
}

