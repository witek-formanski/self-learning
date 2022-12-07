//  2022-12-07
//      15:06 - 15:21

#include <iostream>
using namespace std;

#include <vector>

vector <vector <int>> two_element_combinations(int highest) {
    vector <vector <int>> all_combinations;
    for (int i = 1; i <= highest; i++) {
        int current_first_number = i;
        int current_second_number = i;
        for (int j = current_first_number; j < highest; j++) {
            current_second_number += 1;
            vector <int> combination;
            combination.push_back(current_first_number);
            combination.push_back(current_second_number);
            cout << current_first_number << " : " << current_second_number << endl;
            all_combinations.push_back(combination);
        }
    }
    return all_combinations;
}


int main() {
    int number= 14;
    two_element_combinations(number);

}