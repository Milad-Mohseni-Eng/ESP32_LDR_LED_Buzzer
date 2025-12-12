# ESP32_LDR_LED_Buzzer
ESP32 project that reads light intensity from an LDR and triggers LED and buzzer alerts.


# ESP32 LDR + LED + Buzzer Project

![Project Photo](images/project_photo.jpg)
Photo of the assembled ESP32 project with LDR, LED, and Buzzer.

## 📄 Description
This project demonstrates a simple ESP32-based light detection system using an LDR (Light Dependent Resistor).  
- When ambient light exceeds a threshold, an *LED* turns on and a *buzzer* emits a short sound.  
- Provides hands-on practice with *analog input, **PWM output, and **conditional programming* in Arduino IDE.

---

## 🛠 Hardware Required
- ESP32 development board (e.g., WROOM32, 30-pin)
- LDR (Light Dependent Resistor)
- 10kΩ resistor
- LED
- Buzzer (PWM-capable)
- Jumper wires
- Breadboard

---



---

## ⚡ Pin Configuration

| Component | ESP32 Pin | Notes |
|-----------|-----------|-------|
| LDR       | GPIO4     | Connect in voltage divider with 10kΩ to GND |
| LED       | GPIO2     | Use current-limiting resistor if necessary |
| Buzzer    | GPIO15    | PWM-capable pin |

---

## 💻 Software
- *Arduino IDE* with ESP32 board support installed
- Set *board* to ESP32 Dev Module
- Set *COM port* according to your device

### Code Overview
- Reads light intensity via LDR using analogRead()
- Turns LED *ON* and buzzer *beep* if light > threshold
- LED and buzzer *OFF* if below threshold
- Serial monitor prints LDR values for debugging

---

## 🔧 Usage
1. Open LDR_LED_Buzzer.ino in Arduino IDE  
2. Connect ESP32 to your PC  
3. Select *Board* → ESP32 Dev Module  
4. Select correct *Port*  
5. Upload code  
6. Open *Serial Monitor* (115200 baud) to see LDR readings  
7. Shine a light on the LDR → LED turns on, buzzer emits sound

---

## 📝 Notes
- Adjust lightThreshold in code for desired sensitivity  
- Ensure correct resistor values to protect components  
- Use images above for wiring reference
