#include "CharacterCounterClass.h"
using namespace std;

CharacterCounter::CharacterCounter() {
    fTotalNumberOfCharacters = 0;
    for(int i = 0; i < 256; i++) {
        fCharacterCounts[i] = 0;
    }
}

void CharacterCounter::count(unsigned char aCharacter) {
    fTotalNumberOfCharacters++;
    fCharacterCounts[aCharacter]++;
}

std::ostream& operator<<(std::ostream& aOStream, const CharacterCounter& aCharacterCounter) {
    aOStream << aCharacterCounter.fTotalNumberOfCharacters << " characters found. Frequencies below: " << endl;
    
    //List all character values from ASCII 0 to 255
    for(int i = 0; i < 256; i++) {
        //List if frequency is greater than 0
        if(aCharacterCounter.fCharacterCounts[i] != 0) {
            aOStream << (char)i << "(ASCII: " << i << ")" << ": " << aCharacterCounter.fCharacterCounts[i] << endl;
        }
    }

    return aOStream;
}