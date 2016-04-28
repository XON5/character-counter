#pragma once
#include <iostream>

class CharacterCounter {
private:
    int fTotalNumberOfCharacters;
    int fCharacterCounts[256]; //Count all 256 Byte Values
    
public:
    CharacterCounter();
    void count(unsigned char aCharacter);
    friend std::ostream& operator<<(std::ostream& aOStream, const CharacterCounter& aCharacterCounter);
    
};