#ifndef Hell_h
#define Hell_h

class Hell
{
    public:
        Hell(int pin);
        void tone();
        void tx(char message[]);
    private:
        unsigned int _pin;
    
        const unsigned int _toneDurationMicrosconds = 8160;  // Tone ("pixel") duration
        const unsigned int _wordSpacingMs = ((_toneDurationMicrosconds / 1000) * 7) * 7;             // Delay spacing between words
        const unsigned int _columns = 7;                     // How many "columns" (pixels wide) have a single character
        const unsigned int _hellSymbols;                           // Symbol table, declared in Hell.cpp
        const unsigned int _charDelay = (_toneDurationMicrosconds / 1000) * 7;   // Delay between each character of the message in millisencos

        int _charCurrent;
};

#endif