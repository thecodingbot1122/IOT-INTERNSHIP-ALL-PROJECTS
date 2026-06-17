# 🌃 Automatic Street Light System using LDR Sensor and 16x2 I2C LCD

An Arduino-based **Automatic Street Light System** that automatically detects surrounding light intensity using an LDR (Light Dependent Resistor) sensor and controls a street light (LED).  
The system displays real-time LDR sensor values and street light status (ON/OFF) on a **16x2 I2C LCD**.

---

## 📌 Project Overview

This project helps in **smart lighting** and **energy conservation** by automatically controlling street lights based on ambient light conditions.  
The LDR sensor continuously checks the surrounding light intensity.

- If the environment becomes **dark**, the street light turns **ON**
- If the environment becomes **bright**, the street light turns **OFF**

The system also shows:

- LDR sensor value
- Street light status (ON/OFF)

on the **16x2 I2C LCD**.

---

## 🖼️ Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

---

# 🛠️ Components Used

| Component              | Quantity |
| ---------------------- | -------- |
| Arduino UNO            | 1        |
| LDR Sensor Module      | 1        |
| LED                    | 1        |
| 220Ω Resistor          | 1        |
| 16x2 I2C LCD Display   | 1        |
| Breadboard             | 1        |
| Jumper Wires           | As Required |

---

# ⚙️ Working Principle

1. The LDR sensor reads the surrounding light intensity.
2. Arduino reads the analog value from the sensor.
3. The sensor value is displayed on the LCD.
4. If the light intensity is below the threshold:
   - Street light turns **ON**
5. If the light intensity is above the threshold:
   - Street light turns **OFF**
6. The LCD continuously displays the LDR value and street light status.

---

# 🔌 Pin Connections

## LDR Sensor

| Sensor Pin | Arduino Pin |
| ---------- | ------------ |
| VCC        | 5V           |
| GND        | GND          |
| AO         | A0           |

---

## LED

| LED Pin | Arduino Pin |
| -------- | ------------ |
| Anode (+) | D9 (through 220Ω resistor) |
| Cathode (-) | GND |

---

## I2C LCD

| LCD Pin | Arduino Pin |
| -------- | ------------ |
| VCC      | 5V           |
| GND      | GND          |
| SDA      | A4           |
| SCL      | A5           |

---

# 💻 Features

- Automatic street light control
- Real-time light intensity monitoring
- LCD status display
- Energy-saving system
- Easy to build
- Low-cost smart lighting solution

---

# 🧠 Arduino Code Logic

The Arduino performs the following tasks:

- Reads analog value from the LDR sensor
- Compares the sensor value with a threshold
- Controls the LED automatically
- Displays LDR sensor value on the LCD
- Displays street light status (ON/OFF)

---

# 📊 Light Detection Formula

The street light is controlled using a threshold value:

```text
If LDR Value < 500 → Light ON

If LDR Value ≥ 500 → Light OFF
```

> **Note:** Adjust the threshold value according to your LDR sensor readings and surrounding light conditions.

---

# 🚀 Installation Steps

1. Connect all components according to the circuit diagram.
2. Install the required Arduino libraries:
   - Wire.h
   - LiquidCrystal_I2C.h
3. Upload the code to Arduino UNO.
4. Power the circuit.
5. Cover the LDR sensor to simulate darkness.
6. The LED will turn ON and the LCD will display **Light: ON**.
7. Expose the LDR sensor to light.
8. The LED will turn OFF and the LCD will display **Light: OFF**.

---

# 📚 Required Libraries

```cpp
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
```

Install the **LiquidCrystal_I2C** library from Arduino Library Manager.

---

# 🔮 Future Improvements

- IoT monitoring using ESP32
- Automatic brightness control using PWM
- Motion sensor integration
- Solar-powered street lighting
- Mobile app monitoring

---

# 🎯 Applications

- Smart street lighting
- Home automation
- Garden lighting
- Parking areas
- Campus lighting
- Energy conservation projects

---

# 👨‍💻 Author

**Muhammad Zulqarnain**  
BS Intelligent Systems & Robotics

---

# 📄 License

This project is open-source and free to use for educational purposes.
