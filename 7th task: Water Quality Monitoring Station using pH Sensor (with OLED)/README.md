Perfect — I converted your **Water Quality Monitoring Station (pH Sensor + OLED)** into the same professional README template style you provided.

---

# 💧 Water Quality Monitoring Station using pH Sensor

An Arduino-based **Water Quality Monitoring System** that measures water pH level using a pH sensor and displays real-time results on an OLED display.
The system indicates whether the water is **SAFE or UNSAFE** based on pH value.

---

## 📌 Project Overview

This project is designed for **water quality monitoring applications** such as drinking water testing, aquariums, and environmental monitoring.

The pH sensor continuously measures the acidity or alkalinity of water and sends analog values to the Arduino.

The system displays:

* Real-time pH value
* Water status (SAFE / UNSAFE)

on an OLED screen.

---

## 🖼️ Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

---

# 🛠️ Components Used

| Component              | Quantity    |
| ---------------------- | ----------- |
| Arduino UNO            | 1           |
| pH Sensor Module       | 1           |
| OLED Display (SSD1306) | 1           |
| Jumper Wires           | As Required |
| Breadboard             | 1           |

---

# ⚙️ Working Principle

1. The pH sensor detects hydrogen ion concentration in water.
2. It generates an analog signal based on water acidity/alkalinity.
3. Arduino reads the analog value from the sensor.
4. The value is converted into pH using calibration formula.
5. OLED displays:

   * pH value
   * Water condition (SAFE / UNSAFE)

---

# 🔌 Pin Connections

## pH Sensor

| Sensor Pin | Arduino Pin |
| ---------- | ----------- |
| VCC        | 5V          |
| GND        | GND         |
| AO         | A0          |

---

## OLED Display (I2C)

| OLED Pin | Arduino Pin |
| -------- | ----------- |
| VCC      | 5V          |
| GND      | GND         |
| SDA      | A4          |
| SCL      | A5          |

---

# 💻 Features

* Real-time pH monitoring
* OLED display output
* Automatic water quality detection
* Low-cost and compact system
* Easy Arduino integration

---

# 🧠 Arduino Code Logic

The Arduino performs the following tasks:

* Reads analog signal from pH sensor
* Converts raw value into pH using calibration formula
* Compares pH with safe range (6.5–8.5)
* Determines water status:

  * SAFE WATER
  * UNSAFE WATER
* Displays results on OLED

---

# 📊 pH Classification Rules

| pH Range  | Water Status      |
| --------- | ----------------- |
| 6.5 – 8.5 | SAFE WATER 💧     |
| < 6.5     | ACIDIC WATER ⚠️   |
| > 8.5     | ALKALINE WATER ⚠️ |

---

# 📐 Calibration Formula

```cpp
pH = (614 - sensorValue) * 14.0 / 614.0;
```

---

# 🚀 Installation Steps

1. Connect all components according to circuit diagram.
2. Install required Arduino libraries:

   * Adafruit GFX Library
   * Adafruit SSD1306 Library
   * Wire.h
3. Upload Arduino code to board.
4. Power the system.
5. Place pH probe in water sample.
6. Observe real-time results on OLED.

---

# 📚 Required Libraries

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
```

Install libraries from Arduino Library Manager:

* Adafruit SSD1306
* Adafruit GFX

---

# 🔮 Future Improvements

* IoT-based water quality monitoring (ESP8266/ESP32)
* Mobile app integration
* Cloud data logging
* Temperature compensation
* Multi-sensor system (TDS + turbidity + pH)
* Automatic alerts (SMS/Telegram)

---

# 🎯 Applications

* Drinking water testing
* Aquaculture (fish farming)
* Environmental monitoring
* Swimming pools
* Laboratory experiments
* Smart water systems

---

# 👨‍💻 Author

**Muhammad Zulqarnain**
BS Intelligent Systems & Robotics

---

# 📄 License

This project is open-source and free to use for educational purposes.

