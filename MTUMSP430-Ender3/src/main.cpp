#include <Energia.h>
#include "4bits_lcd.h"

void setup() {
    //pinMode(2, OUTPUT); 
    lcd_init();
    send_string("Temp.: 35 C");
    send_command(0xC0);
    send_string("Umid.: 56 %");
}

void loop() {

    //digitalWrite(2, HIGH);       // sets the digital pin 13 on
    //delay(1000);                  // waits for a second
    //digitalWrite(2, LOW);        // sets the digital pin 13 off
    delay(1000);                  // waits for a second
}
