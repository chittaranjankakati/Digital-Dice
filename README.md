# 🎲 Arduino Digital Dice

A digital dice built using an **Arduino Uno**, **16×2 LCD**, and **push button**. The project simulates a real electronic dice with a startup animation, loading screen, rolling effect, and random dice generation.

## 📌 Features

- 🎲 Random dice roll (1–6)
- 📺 16×2 LCD display
- 🚀 Startup boot animation
- 📊 Loading bar animation
- 🎮 Push button to roll the dice
- 🔄 Rolling animation before displaying the result
- 🔁 Ready for continuous gameplay


## 🛠 Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| 16×2 LCD Display (HD44780) | 1 |
| Push Button | 1 |
| 10kΩ Potentiometer | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | Several |


[Digital Dice Setup](Tremendous%20Snicket%20(1).png)


[📄 Click here to view the Digital Dice Circuit Diagram](Digital%20Dice.pdf)



## 🚀 How It Works

1. Power on the Arduino.
2. The LCD displays:
   - **POWERING ON**
   - **Loading...**
   - **SYSTEM READY**
3. The main screen displays **DIGITAL DICE** and prompts the user to press the button.
4. When the button is pressed:
   - The LCD shows a rolling animation.
   - A random number between **1 and 6** is generated.
   - The result is displayed.
5. The system returns to the main screen, ready for the next roll.

