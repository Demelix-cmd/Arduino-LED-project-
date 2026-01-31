# Arduino Decimal Number Representation Using LEDs

This project is an Arduino program that represents **decimal numbers from 1 to 16** using **four LEDs**.  
Each LED acts like a binary bit, turning ON or OFF to visually display the number.

The LEDs are controlled using **digitalWrite()** signals sent through Arduino digital pins.

---

## 🧠 How It Works

- The project uses **4 LEDs**, each connected to a digital pin on the Arduino.
- Each LED represents a binary value:
  - LED 1 → 1
  - LED 2 → 2
  - LED 3 → 4
  - LED 4 → 8
- By combining these LEDs (ON/OFF), the system can represent numbers from **1 to 16**.
- The Arduino sends HIGH or LOW signals using `digitalWrite()` to control each LED.
- Different combinations of LEDs create different visual behaviors for each number.

---

## 🔌 Hardware Required

- Arduino board (Uno, Nano, etc.)
- 4 LEDs
- 4 resistors (220Ω or 330Ω recommended)
- Breadboard
- Jumper wires

---

## 🔧 Circuit Setup

1. Connect each LED **in series with a resistor**.
2. Connect the LEDs to four digital pins on the Arduino (for example: pins 2, 3, 4, and 5).
3. Connect the other side of each LED to **GND**.
4. Make sure the polarity of the LEDs is correct (long leg = anode).

---

## 💻 Software Logic

- The program uses `pinMode()` to set LED pins as OUTPUT.
- `digitalWrite()` is used to turn LEDs ON or OFF.
- Each number between 1 and 16 is converted into a binary-like pattern.
- The LEDs light up according to the number being represented.

Example:
- Number **5** → LEDs for 1 and 4 turn ON
- Number **10** → LEDs for 2 and 8 turn ON

---

## ▶️ How to Run

1. Open the Arduino IDE.
2. Connect your Arduino board.
3. Upload the code to the board.
4. Watch the LEDs change behavior as numbers are represented.

---

## 📌 Notes

- This project is useful for learning:
  - Binary representation
  - Digital output control
  - Basic electronics and wiring
- You can extend this project by:
  - Adding buttons to change numbers
  - Using delays for animations
  - Displaying numbers automatically in a loop

---

## 📜 License

This project is open-source and free to use for learning and educational purposes.
