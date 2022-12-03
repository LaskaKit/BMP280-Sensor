# Modul pro měření atmosférického tlaku a teploty s BMP280
Přidali jsme další modul s univerzálním a bezpečným konektorem uŠup. Potřebuješ přidat měření atmosférického tlaku do své meteostanice? Pak tu máme čidlo BMP280. Přesné a velmi úsporné a navíc s měřením teploty.

![Osazený modul](https://github.com/LaskaKit/BMP280-Sensor/blob/main/img/4.jpg)

Čidlo BMP280 má velmi dobrou absolutní přesnost +- 1 hPa, rozsah měření 300 - 1100 hPa a jeho spotřeba je pouhých 2,7 uA (při vzorkování 1x za sekundu).

Modul s BMP280 má dva průchozí uŠup konektory a tak jeden můžeš připojit do vývojové desky, do druhého připojit jeden z našich dalších modulů - [SHT40 (teplota/vlhkost)](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/), [BME280 (teplota, vlhkost, atmosférický tlak)](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [SCD41 (CO2, teplota, vlhkost)](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/).

Na modul můžeš samozřejmě zapájet hřebínek a zapojit kamkoliv - [Arduino](https://www.laskakit.cz/arduino-2/), Raspberry Pi, [Rock Pi](https://www.laskakit.cz/radxa-rock-pi-4-b--b4e32-4gb-ram-32gb-emmc/) a další. 

Když ti  záleží na velikosti a chceš co nejmenší modul, stačí desku odlomit a zapájet 2x2 hřebínek (nebo kabel).

BMP280 na modulu má vyvedenou I2C sběrnici a tak je jednoduše připojitelný kamkoliv. 

Na zadní straně je pájecí most, kde si můžeš vybrat adresu a zapojit tak na jednu I2C sběrnici rovnou dvě BMP280 čidla.

![Osazený modul - zadní strana](https://github.com/LaskaKit/BMP280-Sensor/blob/main/img/2.jpg)

## BMP280
Minimální napětí je 1.71V</br>
Maximální pak 3.6V.</br>
Spotřeba je 2.7uA (@1Hz) - hodí se tak na bateriově napájené projekty, ve spánku pak 0.1 uA.</br>
Rozlišení teplototního čidla je 0.01 °C, rozsah měření pak -40 až 85 °C.</br>
Rozlišení tlaku je 1hPa, rozsah 300 - 1100 hPa. </br>

Mezi podporované knihovny patří </br>
https://github.com/adafruit/Adafruit_BMP280_Library</br>
https://github.com/MartinL1/BMP280_DEV</br>
