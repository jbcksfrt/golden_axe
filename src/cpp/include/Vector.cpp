
#include <iostream>

template <class T>
ga::Vector<T>::Vector(){
	data = new T[capacity]();
	if (!data){
		throw std::runtime_error("Not enough memory.");
	}
}

template <class T>
ga::Vector<T>::Vector(const size_t _num_elements) : capacity(2 * _num_elements), num_elements(_num_elements){
	data = new T[capacity]();
	if (!data){
		throw std::runtime_error("Not enough memory.");
	}
}

template <class T>
T& ga::Vector<T>::operator[](const size_t idx) const {
	return data[idx];
}

template <class T>
T ga::Vector<T>::at(const size_t idx) const {
	if (idx >= num_elements){
		throw std::out_of_range("Invalid index given in ga::Vector::at.");
	}

	return data[idx];
}
