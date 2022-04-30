#include <iostream>

#pragma once

template <typename T>
class List {
	public:
		virtual T get_element(std::size_t idx) const = 0;
		virtual void set_element(std::size_t idx, T value) = 0;
		virtual void add_element(T value) = 0;
		virtual std::size_t size() const = 0;

		List<T>* operator=(const List<T> &rhs) {
			return &rhs;
		}
};

