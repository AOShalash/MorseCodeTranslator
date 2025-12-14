# MorseCodeTranslator
An Arduino script for Arduino Uno to take an input word and translate it into light blinks representing the input word in morse code.

## Setup
Connect an Arduino Uno board to your computer and interface with it through the Arduino IDE found here: https://www.arduino.cc/en/software/

You can use the built-in LED on the board using pin number 13, if you so desire. (EDIT LED_PIN in MorseCodeTranslator.h)

If you prefer an external LED, wire to one of the digital pins on the Arduino and ensure the LED_PIN definition is MorseCodeTranslator.h is adjusted accordingly.

Connecting an external LED is simple. Wire the digital pin of your choice to a resistor and LED in series.
