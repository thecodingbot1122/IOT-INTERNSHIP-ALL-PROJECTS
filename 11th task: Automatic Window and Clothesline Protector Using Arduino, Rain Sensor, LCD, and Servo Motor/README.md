# 🌧️ Automatic Window and Clothesline Protector Using Arduino, Rain Sensor, LCD, and Servo Motor

An Arduino-based **Automatic Window and Clothesline Protector** that automatically detects rain using a **Rain Sensor** and protects windows or clothes from getting wet by controlling a **Servo Motor**. The system displays the real-time rain sensor value and window status on a **16x2 I2C LCD**.

---

## 📌 Project Overview

This project is a **smart home automation system** that automatically protects windows or clotheslines during rainy weather.

The rain sensor continuously monitors moisture levels.

* If **rain is detected**, the servo motor automatically **closes the window** (or retracts the clothesline).
* If **no rain is detected**, the servo keeps the window **open**.

The system also displays:

* Rain sensor value
* Window status (Open/Closed)

on the **16x2 I2C LCD**.

---

## 🖼️ Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

---

# 🛠️ Components Used

| Component            | Quantity    |
| -------------------- | ----------- |
| Arduino UNO          | 1           |
| Rain Sensor Module   | 1           |
| Servo Motor (SG90)   | 1           |
| 16x2 I2C LCD Display | 1           |
| Breadboard           | 1           |
| Jumper Wires         | As Required |

---

# ⚙️ Working Principle

1. The rain sensor continuously detects moisture.
2. Arduino reads the analog value from the rain sensor.
3. The rain sensor value is displayed on the LCD.
4. If rain is detected:

   * The servo rotates to **90°**.
   * The window closes (or the clothesline is protected).
5. If no rain is detected:

   * The servo rotates back to **0°**.
   * The window remains open.
6. The LCD continuously displays the rain sensor value and the current window status.

---

# 🔌 Pin Connections

## Rain Sensor

| Sensor Pin | Arduino Pin |
| ---------- | ----------- |
| VCC        | 5V          |
| GND        | GND         |
| AO         | A0          |

---

## Servo Motor

| Servo Pin | Arduino Pin |
| --------- | ----------- |
| Signal    | D9          |
| VCC       | 5V          |
| GND       | GND         |

---

## I2C LCD

| LCD Pin | Arduino Pin |
| ------- | ----------- |
| VCC     | 5V          |
| GND     | GND         |
| SDA     | A4          |
| SCL     | A5          |

---

# 💻 Features

* Automatic rain detection
* Automatic window closing
* Clothesline protection
* Real-time rain sensor monitoring
* LCD status display
* Smart home automation
* Low-cost and easy to build

---

# 🧠 Arduino Code Logic

The Arduino performs the following tasks:

* Reads the analog value from the rain sensor.
* Compares the sensor value with a threshold.
* Controls the servo motor automatically.
* Displays the rain sensor value on the LCD.
* Displays the window status (Open/Closed).

---

# 📊 Rain Detection Formula

The window is controlled using a threshold value:

```text
If Rain Value < 500 → Window Closed

If Rain Value ≥ 500 → Window Open
```

> **Note:** Adjust the threshold value according to your rain sensor readings and environmental conditions.

---

# 🚀 Installation Steps

1. Connect all components according to the circuit diagram.
2. Install the required Arduino libraries:

   * Wire.h
   * LiquidCrystal_I2C.h
   * Servo.h
3. Upload the code to the Arduino UNO.
4. Power the circuit.
5. Simulate rain by wetting the rain sensor (or changing the analog value in a simulator).
6. The servo will rotate to **90°**, and the LCD will display **Window Closed**.
7. Remove the moisture from the sensor.
8. The servo will return to **0°**, and the LCD will display **Window Open**.

---

# 📚 Required Libraries

```cpp
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>
```

Install the **LiquidCrystal_I2C** library from the Arduino Library Manager.

---

# 🔮 Future Improvements

* IoT monitoring using ESP32 or ESP8266
* Mobile notifications during rain
* Buzzer alarm for rain detection
* Automatic weather logging
* Integration with smart home systems
* Solar-powered operation

---

# 🎯 Applications

* Smart home automation
* Automatic window control
* Clothesline protection
* Rain monitoring system
* Greenhouse automation
* Weather-responsive home systems

---

# 👨‍💻 Author

**Muhammad Zulqarnain**
BS Intelligent Systems & Robotics

---

# 📄 License

This project is open-source and free to use for educational purposes.

