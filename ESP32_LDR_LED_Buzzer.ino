// --- LDR + LED + Buzzer (ESP32) ---
// Project: Light-Activated Alert System
// Author: Milad Mohseni
// Description: This project reads light intensity using an LDR (Light Dependent Resistor)
// and triggers both an LED and a buzzer when the light level exceeds a certain threshold.
// The LED turns on while the light is detected, and the buzzer emits a short audible alert.
//
// Hardware connections:
//   - LDR: one leg to 3.3V, the other leg connected to GPIO4 (ADC) and 10kΩ resistor to GND
//   - LED: anode to GPIO2, cathode to GND
//   - Buzzer: positive pin to GPIO15, negative pin to GND
//
// Notes:
//   - Analog readings from the LDR range from 0 (dark) to 4095 (bright)
//   - Adjust lightThreshold according to ambient lighting conditions
//   - Buzzer emits a short pulse each time light exceeds the threshold

const int ldrPin    = 4;   // ADC pin connected to LDR
const int ledPin    = 2;   // LED pin
const int buzzerPin = 15;  // Buzzer pin (PWM-capable)

const int lightThreshold = 1500;  // Light intensity threshold to trigger LED and buzzer

void setup() {
  Serial.begin(115200);        // Initialize serial communication for debugging
  pinMode(ledPin, OUTPUT);     // Configure LED pin as output
  pinMode(buzzerPin, OUTPUT);  // Configure Buzzer pin as output
}

void loop() {
  int ldrValue = analogRead(ldrPin);  // Read LDR analog value
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);           // Print value to serial monitor

  if (ldrValue > lightThreshold) {
    digitalWrite(ledPin, HIGH);       // Turn LED ON
    tone(buzzerPin, 2000);            // Emit buzzer sound (2 kHz)
    delay(100);                        // Short beep duration
    noTone(buzzerPin);                 // Turn buzzer OFF
  } else {
    digitalWrite(ledPin, LOW);        // LED OFF if light is below threshold
  }

  delay(200);                          // Small delay to stabilize readings
}
