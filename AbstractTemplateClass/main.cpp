#include "AbstractList.hpp"
#include "ArrayList.hpp"

int main() {
	ArrayList<int> a;
	List<int>* x = &a;

	x->add_element(12);
	x->add_element(21);
	x->add_element(4);
	std::cout << x->size() << '\n';

	x->add_element(11);
	x->set_element(1, 34);

	for(int i=0; i<x->size(); ++i) {
		std::cout << x->get_element(static_cast<std::size_t>(i)) << ' ';
	}
	std::cout << '\n';

	return 0;
}

