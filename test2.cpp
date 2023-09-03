#include <iostream>
using namespace std;

int countPairsWithProductInRange(int number, int rangeStart, int rangeEnd) {
    int count = 0;

    for (int a = 1; a <= number; ++a) {
        if (number % a == 0) {
            int b = number / a;
            if (a <= b && a >= rangeEnd && a <= rangeStart && b >= rangeEnd && b <= rangeStart) {
                // (a, b) pair falls within the specified range
                ++count;
            }
        }
    }

    return count;
}

int main() {
    int givenNumber, rangeStart, rangeEnd;
    
    cout << "Enter a number: ";
    cin >> givenNumber;

    cout << "Enter the range start: ";
    cin >> rangeStart;

    cout << "Enter the range end: ";
    cin >> rangeEnd;

    int pairsCount = countPairsWithProductInRange(givenNumber, rangeStart, rangeEnd);
    cout << "Number of pairs with product in the range [" << rangeStart << ", " << rangeEnd << "]: " << pairsCount << endl;

    return 0;
}
