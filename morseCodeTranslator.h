#define LED_PIN 12 // digital pin connected to output on Arduino Uno
#define BAUD_RATE 9600

// time in ms
#define DOT 300 
#define DASH 900

// time in ms
#define GAP_BETWEEN_MORSE_LETTERS 500
#define GAP_BETWEEN_ENGLISH_LETTERS 1500
#define GAP_AFTER_WORD_IS_DISPLAYED 2100

// for code styling, may never change, who knows?
#define NUM_LETTERS_ALPHABET 26

struct morseCodePair {
  char letter;
  int morseCodeList[5];  // max 4 morse symbols + 1 sentinel (0)
} morseCodeTable[] = {
  {'a', {DOT, DASH, 0}},
  {'b', {DASH, DOT, DOT, DOT, 0}},
  {'c', {DASH, DOT, DASH, DOT, 0}},
  {'d', {DASH, DOT, DOT, 0}},
  {'e', {DOT, 0}},
  {'f', {DOT, DOT, DASH, DOT, 0}},
  {'g', {DASH, DASH, DOT, 0}},
  {'h', {DOT, DOT, DOT, DOT, 0}},
  {'i', {DOT, DOT, 0}},
  {'j', {DOT, DASH, DASH, DASH, 0}},
  {'k', {DASH, DOT, DASH, 0}},
  {'l', {DOT, DASH, DOT, DOT, 0}},
  {'m', {DASH, DASH, 0}},
  {'n', {DASH, DOT, 0}},
  {'o', {DASH, DASH, DASH, 0}},
  {'p', {DOT, DASH, DASH, DOT, 0}},
  {'q', {DASH, DASH, DOT, DASH, 0}},
  {'r', {DOT, DASH, DOT, 0}},
  {'s', {DOT, DOT, DOT, 0}},
  {'t', {DASH, 0}},
  {'u', {DOT, DOT, DASH, 0}},
  {'v', {DOT, DOT, DOT, DASH, 0}},
  {'w', {DOT, DASH, DASH, 0}},
  {'x', {DASH, DOT, DOT, DASH, 0}},
  {'y', {DASH, DOT, DASH, DASH, 0}},
  {'z', {DASH, DASH, DOT, DOT, 0}}
};

int* getMorseCode(char letter);
void convertLetterToLEDOutput(int code[]);