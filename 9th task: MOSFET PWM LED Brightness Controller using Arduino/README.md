# 💡 MOSFET PWM LED Brightness Controller

An Arduino-based **PWM LED Brightness Control System** using a MOSFET to adjust LED brightness smoothly. The system controls high-power LEDs efficiently using PWM (Pulse Width Modulation) and displays brightness level on the Serial Monitor.

---

## 📌 Project Overview

This project demonstrates how to control LED brightness using **PWM signals and MOSFET switching**. Instead of simply turning LED ON/OFF, the system allows smooth dimming control.

* PWM value increases → LED brightness increases
* PWM value decreases → LED brightness decreases

A MOSFET is used to handle higher current safely.

---

## 🖼️ Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

---

# 🛠️ Components Used

| Component                | Quantity    |
| ------------------------ | ----------- |
| Arduino UNO              | 1           |
| N-Channel MOSFET         | 1           |
| LED (High Power / Strip) | 1           |
| Resistor (220Ω)          | 1           |
| Power Supply (5V–12V)    | 1           |
| Jumper Wires             | As Required |
| Breadboard               | 1           |

---

# ⚙️ Working Principle

1. Arduino generates a **PWM signal** using `analogWrite()`.
2. PWM signal is sent to the MOSFET gate.
3. MOSFET controls current flow to the LED.
4. Duty cycle of PWM determines brightness:

   * 0 → OFF
   * 255 → FULL BRIGHTNESS
5. LED brightness smoothly increases or decreases.

---

# 🔌 Pin Connections

## MOSFET Connection

| MOSFET Pin | Connection           |
| ---------- | -------------------- |
| Gate       | Arduino PWM Pin (D9) |
| Drain      | LED Negative         |
| Source     | GND                  |

---

## LED Connection

| LED Pin  | Connection            |
| -------- | --------------------- |
| Positive | +5V / External Supply |
| Negative | MOSFET Drain          |

---

# 💻 Features

* Smooth LED brightness control
* PWM-based dimming
* Supports high-power LEDs using MOSFET
* Energy efficient switching
* Simple Arduino-based design

---

# 🧠 Arduino Code Logic

The Arduino performs the following tasks:

* Sends PWM signal from pin 9
* Gradually increases brightness from 0 to 255
* Gradually decreases brightness from 255 to 0
* Creates smooth fading effect

---

# 📊 PWM Brightness Control Formula

Brightness is controlled using PWM duty cycle:

```math
Brightness ∝ PWM Value (0 to 255)
```

---

# 🚀 Installation Steps

1. Connect MOSFET and LED according to circuit diagram.
2. Install Arduino IDE (if not installed).
3. Upload the code to Arduino UNO.
4. Power the circuit.
5. Observe LED brightness fading effect.

---

# 📚 Required Libraries

No external libraries required.

```cpp
No library needed (uses built-in analogWrite)
```

---

# 🔮 Future Improvements

* Potentiometer-based brightness control
* Bluetooth / WiFi control (ESP32)
* Mobile app dimming system
* Auto brightness based on ambient light (LDR)
* Smart home integration

---

# 🎯 Applications

* LED strip lighting control
* Smart lighting systems
* Fan speed control (PWM)
* Power regulation circuits
* Home automation projects

---

# 👨‍💻 Author

**Muhammad Zulqarnain**
BS Intelligent Systems & Robotics

---

# 📄 License

This project is open-source and free to use for educational purposes.

