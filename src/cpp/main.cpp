
#include <iostream>

#include "include/Vector.hpp"

int main (int argc, char** argv){

	using namespace std;

	if (argc < 2){
		cerr << "See arguments." << endl;
		return 1;
	}

	int argi = 1;
	const int size = atoi(argv[argi++]);

	const ga::Vector<double> vec(size);

	for (int i = 0; i < size; i++){
		cout << vec[i] << endl;
	}

	return 0;
}