/*
* Programmer – Problem Question – Part 2 of 2
* Multiples of 2, 3, 5
* Name: Rene An
* Email: auj0827@gmail.com
*/

/*
Consider a series in ascending order that only consists of numbers that can be factored by any combination of 2, 3 and 5.
e.g. 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15....
For example the numbers 7 (prime), 13 (prime) or 14 (2*7, 7 is not a valid factor), are not in the above series.
They are not factorable by 2, 3, 5. The number 1 is included by definition.

Question:
Design an algorithm to find the number that occupies position 1500 in this series.
NOTE: the correct answer is 859963392, use this to verify your algorithm.
Please be prepared to discuss your solution/solutions to this problem, as well as the steps you used to arrive at the solution.
*/

#include <iostream>
using namespace std;

const int FIND_NUM = 1500;

bool factorization_algorithm(int num);

int main() {
	unsigned long long int num = 2;
	// The number 1 is included by definition.
	int count = 1;

	cout << count << ". " << num-1 << endl;
	while (count != FIND_NUM) {
		if (factorization_algorithm(num)) {
			count++;	// This num is good		
			cout << count << ". " << num << endl;
		}
		num++;		// Next check num	
	}

	// Find the number that occupies position 1500 
	cout << "The number that occupies position 1500 is " << num << endl;

	return 0;
}

// factorization in prime factors
bool factorization_algorithm(int num) {
	int count = 2;

	while (num != 1) {
		if (num % count == 0) {
			num /= count;

			// Only combination of 2, 3 and 5
			if ((count == 2) || (count == 3) || (count == 5)) {
				continue;
			}
			else { return false; }
		}
		else {
			count++;
		}
	}

	return true;
}