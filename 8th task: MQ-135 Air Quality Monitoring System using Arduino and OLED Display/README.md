Perfect 👍 — I understood your exact format requirement.
Here is your **MQ-135 Air Quality Monitoring System README** in the same style:

---

# 🌫️ MQ-135 Air Quality Monitoring System using Arduino and OLED

An Arduino-based **Air Quality Monitoring System** that measures air pollution using the MQ-135 gas sensor and displays real-time air quality status on an OLED display.
The system detects harmful gases and shows whether the air is **GOOD, MODERATE, or BAD**.

---

## 📌 Project Overview

This project helps in **environmental monitoring and smart air quality analysis**.
The MQ-135 sensor continuously measures gas concentration in the air.

* If air quality is **good**, system shows **GOOD AIR 😊**
* If air quality is **moderate**, system shows **MODERATE ⚠️**
* If air quality is **bad**, system shows **BAD AIR ☠️**

The system also displays:

* Raw sensor value
* Air quality status

on the OLED display.

---

## 🖼️ Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

---

# 🛠️ Components Used

| Component              | Quantity    |
| ---------------------- | ----------- |
| Arduino UNO            | 1           |
| MQ-135 Gas Sensor      | 1           |
| OLED Display (SSD1306) | 1           |
| Jumper Wires           | As Required |
| Breadboard             | 1           |

---

# ⚙️ Working Principle

1. The MQ-135 sensor detects harmful gases in the air.
2. It produces an analog signal based on gas concentration.
3. Arduino reads the analog value from A0 pin.
4. The value is compared with threshold levels:

   * 0–300 → GOOD AIR 😊
   * 300–600 → MODERATE ⚠️
   * 600+ → BAD AIR ☠️
5. OLED displays:

   * Air value
   * Air quality status

---

# 🔌 Pin Connections

## MQ-135 Sensor

| Sensor Pin | Arduino Pin |
| ---------- | ----------- |
| VCC        | 5V          |
| GND        | GND         |
| A0         | A0          |

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

* Real-time air quality monitoring
* Gas level detection
* OLED live display
* Low-cost environmental monitoring system
* Easy Arduino integration

---

# 🧠 Arduino Code Logic

The Arduino performs the following tasks:

* Reads analog value from MQ-135 sensor
* Converts value into air quality level
* Compares value with threshold limits
* Determines air status:

  * GOOD
  * MODERATE
  * BAD
* Displays results on OLED screen

---

# 📊 Air Quality Detection Range

The air quality is calculated based on sensor value:

* **0–300 → GOOD AIR 😊**
* **300–600 → MODERATE ⚠️**
* **600+ → BAD AIR ☠️**

---

# 🚀 Installation Steps

1. Connect all components according to circuit diagram.
2. Install required Arduino libraries:

   * Adafruit GFX Library
   * Adafruit SSD1306 Library
3. Upload the Arduino code.
4. Power the system.
5. Observe air quality on OLED display.

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

* IoT-based air monitoring (ESP32)
* Mobile app integration
* Cloud data logging
* Real-time alerts (SMS/Telegram)
* Multi-sensor system (CO₂, PM2.5, temperature, humidity)

---

# 🎯 Applications

* Smart cities
* Indoor air monitoring
* Industrial safety systems
* Home air quality tracking
* Environmental monitoring projects

---

# 👨‍💻 Author

**Muhammad Zulqarnain**
BS Intelligent Systems & Robotics

---

# 📄 License

This project is open-source and free to use for educational purposes.

