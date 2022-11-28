//  2022-11-28
//      14:16 - 14:31

#include <iostream>
// #include <typeinfo>
using namespace std;


int sum_of_digits(int example_int) {    
    auto example_string = to_string(example_int);
    // cout << typeid(example).name() << endl;
    // cout << typeid(example_string).name() << endl;
    // cout << typeid(example_string[0]).name() << endl;
    int ans;
    for (int i = 0; i < example_string.length(); i++) {
        int digit = example_string[i] - '0';
        ans += digit;
    }
    return ans;
    
}


int main() {
    int example;
    cin >> example;
    cout << sum_of_digits(example);
}




