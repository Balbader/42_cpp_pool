#include "PMergeMe.hpp"

// ----------------------------------------------------------------------------
// ---------------------------------------------------------------- Constructor
// ----------------------------------------------------------------------------
PMergeMe::PMergeMe() {
    if (DEBUG)
        std::cout << LGREEN << "PMergeMe base constructor called" << RESET << std::endl;
}

PMergeMe::PMergeMe(PMergeMe const& rhs) : _deque(rhs._deque), _vector(rhs._vector) {
    if (DEBUG)
        std::cout << LGREEN << "PMergeMe args constructor called" << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Destructor
// ----------------------------------------------------------------------------
PMergeMe::~PMergeMe() {
    if (DEBUG)
        std::cout << LRED << "PMergeMe base destructor called" << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ------------------------------------------------------------------- Overload
// ----------------------------------------------------------------------------
PMergeMe& PMergeMe::operator=(PMergeMe const& rhs) {
    if (DEBUG)
        std::cout << ORANGE << "PMergeMe assignment operator called" << RESET << std::endl;

    this->_deque = rhs._deque;
    this->_vector = rhs._vector;
    return *this;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Exceptions
// ----------------------------------------------------------------------------
const char* ErrorTimeException::what() const throw() {
	return ("an error occured using gettimeoftheday()");
}

const char* WrongInputException::what() const throw() {
	return ("please enter unsigned ints only");
}


// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Methods
// ----------------------------------------------------------------------------
void PMergeMe::checkInput(int argc, char **argv) {

	for (int i = 1; i < argc; i++) {

		std::string input = argv[i];

		for (int j = 0; j < (int)input.size(); j++) {
			if (isdigit(input[j]) == 0)
				throw(WrongInputException());
		}

		double dbl = atof(argv[i]);
		if (dbl < 0 || dbl > __INT_MAX__)
			throw(WrongInputException());
	}
}

void PMergeMe::fillDeque(int argc, char **argv) {

	for (int i = 1; i < argc; i++)
		this->_deque.push_back(atoi(argv[i]));
}

void PMergeMe::fillVector(int argc, char **argv) {

	for (int i = 1; i < argc; i++)
		this->_vector.push_back(atoi(argv[i]));
}

void PMergeMe::printBefore(void) {

	std::cout << "\n" << "Before: ";

	for (int i = 0; i < (int)this->_vector.size(); i++)
		std::cout << this->_vector[i] << " ";

	std::cout << std::endl;
}

void PMergeMe::printAfter(void) {

	std::cout << "\n" << "After: ";

	for (int i = 0; i < (int)this->_vector.size(); i++)
		std::cout << this->_vector[i] << " ";

	std::cout << std::endl;
}

/*
This function aims to sort a data structure of type deque_t using a divide-and-conquer strategy,
reminiscent of the Merge Sort algorithm.
The function recursively divides the input deque into two halves until the base case
(deque size less than 2) is reached, and then merges these halves back together in a
sorted manner using a mergeSort function.

Here's a step-by-step explanation of the cutAndSort function:

Initialization of two empty deque_t objects, dequeOne and dequeTwo:
These are used to hold the two halves of the original deque.

Base Case Check: If the size of the input deque is less than 2,
the function returns the deque as is, because a deque of size 0 or 1 is already "sorted."

Dividing the deque into two halves:

The first loop iterates from the start of the deque up to (but not including)
the halfway point, pushing each element into dequeOne.

The second loop starts from the halfway point to the end of the deque, pushing each element into dequeTwo.

Recursive Calls: Both dequeOne and dequeTwo are then passed to recursive calls of cutAndSort,
which continues to split and sort each half until the base case is reached.

Merging: Once the base case is reached for all recursive calls,
the mergeSort function is used to merge dequeOne and dequeTwo back together in a sorted manner.
This step is crucial and where the actual sorting happens.
Each level of recursion will merge its two halves in a sorted order,
building up to the final, sorted deque.

Return Statement: The function returns the result of the mergeSort call,
which should be the sorted version of the original input deque.
*/

deque_t	PMergeMe::cutAndSort(deque_t deque) {

	deque_t	dequeOne;
	deque_t	dequeTwo;

	if (deque.size() < 2)
		return (deque);

	for (int i = 0; i < (int)(deque.size() / 2); i++)
		dequeOne.push_back(deque[i]);

	for (int i = (int)(deque.size() / 2); i < (int)deque.size(); i++)
		dequeTwo.push_back(deque[i]);

	dequeOne = cutAndSort(dequeOne);
	dequeTwo = cutAndSort(dequeTwo);

	return (mergeSort(dequeOne,dequeTwo));
}

vector_t PMergeMe::cutAndSort(vector_t vector)
{
	vector_t vectorOne;
	vector_t vectorTwo;

	if (vector.size() < 2)
		return (vector);

	for (int i = 0; i < (int)(vector.size() / 2); i++)
		vectorOne.push_back(vector[i]);

	for (int i = (int)(vector.size() / 2); i < (int)vector.size(); i++)
		vectorTwo.push_back(vector[i]);

	vectorOne = cutAndSort(vectorOne);
	vectorTwo = cutAndSort(vectorTwo);

	return (mergeSort(vectorOne,vectorTwo));
}

/*
The mergeSort function provided is part of the sorting algorithm implementation,
specifically designed to merge two sorted deque_t objects
(dequeOne and dequeTwo) into a single sorted deque_t object (dequeThree).
This function is a critical component of the merge sort algorithm, where the "conquer" phase involves merging sorted
sequences back together into a single sorted sequence. Here's how it works:

Initialization of dequeThree: This is an empty deque_t object that will eventually
contain the sorted elements from both dequeOne and dequeTwo.

Merging Process:

The function enters a while loop that continues as long as
both dequeOne and dequeTwo are not empty. Within this loop,
it compares the front elements of both deques.

If the front element of dequeOne is less than the front element of dequeTwo,
that element is moved from dequeOne to dequeThree, and then removed from dequeOne.

If the front element of dequeTwo is less than or equal
to the front element of dequeOne, that element is moved
from dequeTwo to dequeThree, and then removed from dequeTwo.

This comparison and movement of elements continue until one of the deques is empty.

Draining the Remaining Elements:

After the initial merging loop, there could be remaining elements in either dequeOne or dequeTwo
(but not in both, since the loop continues until one is empty).

Two additional while loops ensure that any remaining elements
in dequeOne or dequeTwo are moved to dequeThree.
This is necessary because, after the first while loop,
at least one of the deques will be empty, but the other might still have elements
that are already sorted and just need to be appended to dequeThree.

Returning the Merged dequeThree: Once both dequeOne and dequeTwo are completely
empty, the function returns dequeThree, which now contains all elements
from the original two deques in a sorted order.
*/

deque_t	PMergeMe::mergeSort(deque_t dequeOne, deque_t dequeTwo) {

	deque_t	dequeThree;

	while (dequeOne.empty() != true && dequeTwo.empty() != true) {

		if (dequeOne[0] < dequeTwo[0]) {
			dequeThree.push_back(dequeOne[0]);
			dequeOne.erase(dequeOne.begin());
		}

		else {
			dequeThree.push_back(dequeTwo[0]);
			dequeTwo.erase(dequeTwo.begin());
		}
	}
	
	while (dequeOne.empty() != true) {
		dequeThree.push_back(dequeOne[0]);
		dequeOne.erase(dequeOne.begin());
	}

	while (dequeTwo.empty() != true) {
			dequeThree.push_back(dequeTwo[0]);
			dequeTwo.erase(dequeTwo.begin());
	}

	return (dequeThree);
}

vector_t PMergeMe::mergeSort(vector_t vectorOne, vector_t vectorTwo) {

	vector_t vectorThree;

	while (vectorOne.empty() != true && vectorTwo.empty() != true) {

		if (vectorOne[0] < vectorTwo[0]) {
			vectorThree.push_back(vectorOne[0]);
			vectorOne.erase(vectorOne.begin());
		}

		else {
			vectorThree.push_back(vectorTwo[0]);
			vectorTwo.erase(vectorTwo.begin());
		}
	}
	
	while (vectorOne.empty() != true) {
		vectorThree.push_back(vectorOne[0]);
		vectorOne.erase(vectorOne.begin());
	}

	while (vectorTwo.empty() != true) {
			vectorThree.push_back(vectorTwo[0]);
			vectorTwo.erase(vectorTwo.begin());
	}

	return (vectorThree);
}

double getTime(void) {

	struct timeval	tv;
	double			milisecondes;
	double			secondes;
	double			time;

	if (gettimeofday(&tv, NULL) == -1)
		throw(ErrorTimeException());

	milisecondes = (double)tv.tv_usec / 1000;
	secondes = (double)tv.tv_sec * 0.001;
	time = secondes + milisecondes;

	return (time);
}

void PMergeMe::printTime(int containerType, double time) {

	std::string container = "deque";

	if (containerType == VECTOR)
		container = "vector";

    std::cout << "\n";
	std::cout << "Time to process elements with std::" << container << " : " << std::fixed << std::setprecision(4) << time << "ms.\n";
}


// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Setters
// ----------------------------------------------------------------------------
void PMergeMe::setDeque(deque_t deque) {
	this->_deque = deque;
}

void PMergeMe::setVector(vector_t vector) {
	this->_vector = vector;
}

// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Getters
// ----------------------------------------------------------------------------
deque_t const&	PMergeMe::getDeque(void) const {
	return (this->_deque);
}

vector_t const& PMergeMe::getVector(void) const {
	return (this->_vector);
}
