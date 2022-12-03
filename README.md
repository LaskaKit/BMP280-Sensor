# Module for atmospheric pressure and temperature measurement with BMP280
We have added another module with a universal and secure uSup connector. Need to add atmospheric pressure measurement to your weather station? Then we have the BMP280 sensor. Accurate and very economical, plus temperature measurement.</br>

![Assembled BMP280 module](https://github.com/LaskaKit/BMP280-Sensor/blob/main/img/4.jpg)

The BMP280 sensor has a very good absolute accuracy of +- 1 hPa, a measurement range of 300 - 1100 hPa and a power consumption of only 2.7 uA (sampled once per second).

The module with BMP280 has two through-hook connectors, so you can connect one to the development board, and connect one of our other modules to the other - [SHT40 (temperature/humidity)](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/), [BME280 (temperature, humidity, atmospheric pressure)](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [SCD41 (CO2, temperature, humidity)](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/).

Of course, you can plug a stylus into the module and connect it anywhere - [Arduino](https://www.laskakit.cz/arduino-2/), Raspberry Pi, [Rock Pi](https://www.laskakit.cz/radxa-rock-pi-4-b--b4e32-4gb-ram-32gb-emmc/), etc.

If you care about size and want the smallest module, just break off the board and plug in a 2x2 header (or cable).

The BMP280 has an I2C bus on the module so it's easy to connect anywhere.

There is a solder bridge on the bottom side where you can select an address and connect two BMP280 sensors directly to one I2C bus.

![Assembled BMP280 module](https://github.com/LaskaKit/BMP280-Sensor/blob/main/img/2.jpg)

## BMP280

Minimum voltage is 1.71V</br>
The maximum is 3.6V.</br>
Consumption is 2.7uA (@1Hz) - suitable for battery powered projects, 0.1 uA in sleep mode.</br>
The resolution of the temperature sensor is 0.01°C, and the measurement range is -40 to 85°C.</br>
Pressure resolution is 1hPa, range 300 to 1100 hPa.</br>

Supported libraries include </br>
https://github.com/adafruit/Adafruit_BMP280_Library</br>
https://github.com/MartinL1/BMP280_DEV</br>
