#include <iostream>
#include "CharacterCounterClass.h"
using namespace std;

int main() {
    
    CharacterCounter lCounter;
    unsigned char lChar;
    
    //Count the Inputs
    while(cin >> lChar) {
        lCounter.count(lChar);
    }
    
    //Display the result - Characters Counted
    cout << lCounter;
    
    return 0;
}