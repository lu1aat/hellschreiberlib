#ifndef Hell_h
#define Hell_h

class Hell
{
    public:
        Hell(int pin);
        void tone();
        void tx(char message[]);
    private:
        int _pin;
    
        const int _toneDurationMicrosconds = 8160;  // Tone ("pixel") duration
        const int _wordSpacingMs = 600;             // Delay spacing between words
        const int _columns = 7;                     // How many "columns" (pixels wide) have a single character
        int _hellSymbols;                           // Symbol table, declared in Hell.cpp
        int _charDelay = 200;                       // Delay between each character of the message, in milliseconds
};

#endif