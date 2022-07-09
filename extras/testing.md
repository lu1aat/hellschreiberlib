# Testing

An easy way to test the library is to hook up a piezo speaker to the output PIN and decode with [fldigi](https://sourceforge.net/projects/fldigi/).

## Speaker setup

In this diagram, we use the PIN marked as `13`:

<<<<<<< HEAD
<img src="https://github.com/lu1aat/cw-arduino-beacon/raw/master/diagram-connections.png">
=======
![diagram-connections.png]()
>>>>>>> b293322d6825fe9879520b9fb5f115b436bf3191


## Upload sketch

Use the [example](../examples/basic/basic.ino), see the PIN `13` set in line 7:

```cpp
#include <Arduino.h>

// Import library
#include <Hell.h>

// Set Hell library to work with PIN number 13
Hell hell(13);

// Setup
void setup() {
}

// Loop
void loop() {
  // TX
  hell.tx("THIS IS A TEST");
  
  delay(9000);
}
```

Upload into Arduino and the speaker should be doing the classic hell cricket sound.


## Decode with fldigi

- Download, install and run [fldigi](https://sourceforge.net/projects/fldigi/)
- From the `Op Mode` menu, select the `Hell` category and then `Feld Held` mode
- Identify the audio frequency of the hell tone sound in the waterfall and click on the center of it
- The message `THIS IS A TEST` should be printed in the screen