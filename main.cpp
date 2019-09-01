/***************************************************************************
 * Author: Christopher Moyer
 * Date: September 1, 2019
 *
 * This class will do take in 4 numbers (zero or positive) from standard
 * input, find the sum, and write to standard output.
 *
**/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int> numbers;
int user_input;
int sum;
bool run = true;
bool all_zeros = true;

// Find the sum of the 4 numbers given by the user
// If all 4 numbers are 0, this will stop the program
void FindSum() {
    numbers.clear();
    sum = 0;
    all_zeros = true;
    for(int i = 0; i < 4; ++i) {
        cin >> user_input;
        if(user_input > 0) {
            all_zeros = false;
        }

        numbers.push_back(user_input);
    }

    if(all_zeros) {
        run = false;
    }
    else {
        for(int i = 0; i < numbers.size(); ++i) {
            sum += numbers.at(i);
        }
        cout << sum << endl;
    }
}

int main() {
    while(run) {
        FindSum();
    }
    return 0;
}


