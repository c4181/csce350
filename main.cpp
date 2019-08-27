#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int> slices;
int uin;
int sum;
bool run = true;
bool all_zeros = true;


void input() {
    slices.clear();
    sum = 0;
    all_zeros = true;
    for(int i = 0; i < 4; ++i) {
        cin >> uin;
        if(uin > 0) {
            all_zeros = false;
        }

        slices.push_back(uin);
    }

    if(all_zeros) {
        run = false;
    }
    else {
        for(int i = 0; i < slices.size(); ++i) {
            sum += slices.at(i);
        }
        cout << sum << endl;
    }
}

int main() {
    while(run) {
        input();
    }
    return 0;
}


