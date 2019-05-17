
namespace ga {

	template <class T>
	class Vector {

	public:

		// initialization
		//	- default init all elements

		Vector();
		Vector(const size_t num_elements);

		T& operator[](const size_t idx) const;
		T at(const size_t idx) const;

		// replace data with n-element vector where all elements are val.
		void assign(const size_t n, const T& val);

		// replace data with whatever is between the iterators.
		template <class InputIt>
		void assign(InputIt first, InputIt last);

		// replace data with data in ilist.
		void assign(std::initializer_list<T> ilist);

		// add one element to vector
		void append(const T& val);

		// add all elements of other to the end of this vector.
		void append(const Vector& other);

		// CAPACITY

		// true if has no elements, false otherwise.
		bool isEmpty() const;

		// returns the number of elements
		size_t getSize() const;

		// get the maximum possible number of elements.
		size_t getMaxSize() const;

		// reserves storage	
		void reserve(const size_t capacity);

		// the number of elements that can be held in currently-allocated storage.
		size_t getCapacity() const;

		// reduces memory by freeing unused memory.
		void shrinkToFit();

	private:

		T* data;

		size_t num_elements = 0;
		size_t capacity = 10;

	};

}

#include "Vector.cpp"