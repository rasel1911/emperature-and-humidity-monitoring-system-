# Temperature and Humidity Monitoring System

A simple project using Arduino Uno, DHT22 sensor, and a 16x2 LCD to monitor and display temperature and humidity.

---

## Components Used
- **Arduino Uno**
- **DHT22 Sensor**
- **16x2 LCD Display**
- **10kΩ Potentiometer** (for LCD contrast)
- **10kΩ Resistor** (pull-up resistor for DHT22)
- **Breadboard and Jumper Wires**

---

## Circuit Diagram
*Refer to the provided circuit diagram for visual wiring.*

---

## Wiring Connections

### DHT22 Sensor
- **VCC (1st pin):** 5V on Arduino
- **Data (2nd pin):** Digital Pin 7 on Arduino
- **GND (4th pin):** GND on Arduino
- **10kΩ resistor** between VCC and Data pin (pull-up resistor)

### 16x2 LCD Display (4-bit mode)
- **VSS:** GND
- **VDD:** 5V
- **VO (contrast):** Middle pin of potentiometer
- **RS:** Pin 12 on Arduino
- **E (Enable):** Pin 11 on Arduino
- **D4:** Pin 5 on Arduino
- **D5:** Pin 4 on Arduino
- **D6:** Pin 3 on Arduino
- **D7:** Pin 2 on Arduino
- **RW:** GND
- **Backlight Anode (+):** 5V (via breadboard)
- **Backlight Cathode (−):** GND

### Potentiometer (for LCD contrast)
- **One side:** GND
- **Other side:** 5V
- **Middle pin (wiper):** VO pin of LCD

---

## Power Supply
All components share the 5V and GND rails from the Arduino Uno.

---

## Working Principle
- The **DHT22 sensor** measures temperature and humidity.
- The **Arduino** reads data from pin 7 using the DHT library.
- The values are displayed on the **16x2 LCD** using the LiquidCrystal library.
- The **contrast** of the LCD can be adjusted using the potentiometer.

---

## Libraries Required
- [DHT sensor library](https://github.com/adafruit/DHT-sensor-library)
- [LiquidCrystal library](https://www.arduino.cc/en/Reference/LiquidCrystal)

---

## Usage
1. Connect all components as per the wiring instructions above.
2. Upload the Arduino code (`arduino_code.ino`) to your Arduino Uno.
3. Power on the Arduino. The LCD will display the current temperature and humidity.

---

## License
This project is open-source and free to use for educational purposes.
