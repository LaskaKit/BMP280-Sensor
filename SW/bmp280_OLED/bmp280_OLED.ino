/*
* This example code for Temperature, Humidity and Pressure BMP280 module
* is used with ESP32 LPkit board.
* ESP32-LPkit reads Temperature, Humidity and Pressure from BMP280 sensor 
* and shows on OLED display
*
* SDA - GPIO21
* SCL - GPIO22
*
* Made by (c) laskakit.cz 2022
*
* Libraries
* https://github.com/adafruit/Adafruit_BMP280_Library
* https://github.com/adafruit/Adafruit-GFX-Library
* https://github.com/adafruit/Adafruit_SH110X
*/

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>     // https://github.com/adafruit/Adafruit-GFX-Library
#include <Adafruit_SH110X.h>  // https://github.com/adafruit/Adafruit_SH110X
#include <Adafruit_BMP280.h>  // https://github.com/adafruit/Adafruit_BMP280_Library

#define DELAYTIME 1000
#define i2c_Address 0x3c

Adafruit_BMP280 bmp; // use I2C interface
Adafruit_Sensor *bmp_temp = bmp.getTemperatureSensor();
Adafruit_Sensor *bmp_pressure = bmp.getPressureSensor();

Adafruit_SH1106G display = Adafruit_SH1106G(128, 64, &Wire, -1); //Nastavý display


void setup() {
    Serial.begin(115200);
    while(!Serial);    // time to get serial running
    
  // initilizace BMP280 | BMP280 Initialization
    unsigned status = bmp.begin();
  if (!status) {
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring or "
                      "try a different address!"));
    Serial.print("SensorID was: 0x"); Serial.println(bmp.sensorID(),16);
    Serial.print("        ID of 0xFF probably means a bad address, a BMP 180 or BMP 085\n");
    Serial.print("   ID of 0x56-0x58 represents a BMP 280,\n");
    Serial.print("        ID of 0x60 represents a BME 280.\n");
    Serial.print("        ID of 0x61 represents a BME 680.\n");
    while (1) delay(10);
  }

  /* Default settings from datasheet. */
  bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,     /* Operating Mode. */
                  Adafruit_BMP280::SAMPLING_X2,     /* Temp. oversampling */
                  Adafruit_BMP280::SAMPLING_X16,    /* Pressure oversampling */
                  Adafruit_BMP280::FILTER_X16,      /* Filtering. */
                  Adafruit_BMP280::STANDBY_MS_500); /* Standby time. */

  bmp_temp->printSensorDetails();
                  
  delay(250);
  
  display.begin(i2c_Address, true); 
  display.clearDisplay(); 
  display.setTextColor(SH110X_WHITE); 
  display.setTextSize(1); 
}

void loop() {
  sensors_event_t temp_event, pressure_event;
  bmp_temp->getEvent(&temp_event);
  bmp_pressure->getEvent(&pressure_event);

  // put your main code here, to run repeatedly:
   display.setCursor(0,0);
   display.println((String)"Teplota:"+temp_event.temperature+"C");       //Zobrazí na displeji teplotu z čidla
   display.println((String)"Tlak:"+pressure_event.pressure / 100.0F+"hPa");  //Zobrazí na displeji tlak z čidla
   display.println((String)"Nadmorska vyska:"+String(bmp.readAltitude(),0) + "m"); //Zobrazí na displeji nadmořskou výšku vypočtenou z údajů z čidla
   display.display(); 
   delay(500);
   display.clearDisplay();
}  
