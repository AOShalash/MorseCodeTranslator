#include "morseCodeTranslator.h"

const char* inputWord = "paste";

void setup() {
  pinMode(LED_PIN, OUTPUT); // initialize pin for LED
  Serial.begin(BAUD_RATE);  // initialize serial for the Serial Monitor
}

void loop() {
  Serial.println(inputWord); // print the word for confirmation

  for (int i = 0; i < strlen(inputWord); i++) {
    int* code = getMorseCode(inputWord[i]);
    if (code == NULL) {
      return;
    }
    convertLetterToLEDOutput(code);
  }

  delay(GAP_AFTER_WORD_IS_DISPLAYED);
}

// ****** FUNCTION DEFINITIONS ****** //
void convertLetterToLEDOutput(int code[]) {
  for (int i = 0; code[i] != 0; i++) {
    if (code[i] == DOT) {
      digitalWrite(LED_PIN, HIGH);
      delay(DOT);
    } else if (code[i] == DASH) {
      digitalWrite(LED_PIN, HIGH);
      delay(DASH);
    }
    digitalWrite(LED_PIN, LOW);
    delay(GAP_BETWEEN_MORSE_LETTERS);
  }
  digitalWrite(LED_PIN, LOW);
  delay(GAP_BETWEEN_ENGLISH_LETTERS);
}

int* getMorseCode(char letter) {
  if (letter >= 'A' && letter <= 'Z') {
    letter = letter + ('a' - 'A');
  }
  
  // O(N) runtime, could be optimized with binary search
  // since alphabet list is sorted
  for (int i = 0; i < NUM_LETTERS_ALPHABET; i++) {
    if (morseCodeTable[i].letter == letter) {
      return morseCodeTable[i].morseCodeList;
    }
  }
  
  return NULL;
}