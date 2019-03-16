#include <Energia.h>
#include "4bits_lcd.h"
#include "DHT.h"

#define DHTPIN 11  
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    lcd_init();
    send_string("Ender 3");
    send_command(0xC0);
    send_string("Medidor T.U");
    dht.begin();
    delay(5000); 
}

void loop() {

    float h = dht.readHumidity();
    float t = dht.readTemperature();

    String svalueUmid = "Umid.: " + String(h, 0) + " %";
    send_command(0x80);
    send_string((char*)svalueUmid.c_str());

    String svalueTemp = "Temp.: " + String(t, 0) + " C";
    send_command(0xC0);
    send_string((char*)svalueTemp.c_str());

    delay(500);                 
}
