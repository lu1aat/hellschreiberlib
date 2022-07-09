# hellschreiberlib

*A Hellschreiber library for Arduino*

This library will modulate OOK [Hellschreiber](https://en.wikipedia.org/wiki/Hellschreiber) signal in the desired output pin. Can be used for beacons, telemetry, tests and experimentation.

Supported characters: `0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ.-=!:*`. Only **UPPERCASE** letters supported.

![Sample of supported characters](extras/sample.png)

## Example

See `examples/basic/basic.ino` sketch example:

```cpp
#include <Arduino.h>
#include <Hell.h>

// Setup Hell library to work with PIN number 8
Hell hell(8);

// Setup
void setup() {}

// Loop
void loop() {
  // TX
  hell.tx("THIS IS A TEST");

  delay(9000);
}
```

See [extras/testing.md](extras/testing.md) on how you can use test this library with a speaker.


## Library

The library is based on [lu1aat/cw-arduino-beacon](https://github.com/lu1aat/cw-arduino-beacon) for symbol matching procedure, supported characters: `0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ.-=!:*`.

![Sample of supported characters](extras/sample.png)

This library is maintained by LU1AAT Andres (lu1aat.andres at gmail dot com)


## Hellschreiber resources

- fldigi Hellschreiber modem: http://www.w1hkj.com/FldigiHelp/feld_hell_page.html
- nonstopsystems HELLSCHREIBER SOFTWARE: https://www.nonstopsystems.com/radio/hellschreiber-software.htm
- AD9851 Hellschreiber Transmitter: https://www.george-smart.co.uk/arduino/arduino_hellschreiber/
- Hellduino: Sending Hellschreiber from an Arduino: https://brainwagon.org/2012/01/11/hellduino-sending-hellschreiber-from-an-arduino/
- Sending hellschreiber from an Arduino –> Helldunio!: http://www.lb3hc.net/archives/1303
- ARDUINO FOR HAM RADIO | Hellschreiber: https://k183.bake-neko.net/ji3bnb/page14.html