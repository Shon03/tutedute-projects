#include <iostream>
using namespace std;
int main() {
 int num;
 // Input from User
 cout << "Enter an integer: ";
 cin >> num;
 // Check if the number is even, odd, or 0
 if (num == 0) {
 cout << "The number is neither even nor odd." << endl;
 } else if (num % 2 == 0) {
 cout << "The number is even." << endl;
 } else {
 cout << "The number is odd." << endl;
 }
 return 0;
}
