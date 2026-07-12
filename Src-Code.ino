#include <LiquidCrystal.h>

// LCD Pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int buttonPin = 7;

void startupAnimation() {

  lcd.begin(16, 2);

  // ---------------- POWER ON ----------------
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("POWERING ON");
  lcd.setCursor(6, 1);
  lcd.print("...");
  delay(1500);

  // ---------------- LOADING ----------------
  lcd.clear();
  lcd.print("Loading...");

  lcd.setCursor(0, 1);

  for (int i = 0; i < 16; i++) {
    lcd.write(byte(255));      // Full block
    delay(120);
  }

  delay(500);

  // ---------------- READY ----------------
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("SYSTEM READY");

  delay(1500);

  // ---------------- MAIN SCREEN ----------------
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("DIGITAL DICE");

  lcd.setCursor(1, 1);
  lcd.print("Press Button");
}

void setup() {

  pinMode(buttonPin, INPUT_PULLUP);

  randomSeed(analogRead(A0));

  startupAnimation();
}

void loop() {

  if (digitalRead(buttonPin) == LOW) {

    // Wait for button release
    while (digitalRead(buttonPin) == LOW);

    // ---------------- ROLLING ----------------
    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("Rolling...");

    for (int i = 0; i < 20; i++) {

      int temp = random(1, 7);

      lcd.setCursor(7, 1);
      lcd.print(" ");
      lcd.setCursor(7, 1);
      lcd.print(temp);

      delay(70);
    }

    // ---------------- FINAL RESULT ----------------
    int dice = random(1, 7);

    lcd.clear();

    lcd.setCursor(2, 0);
    lcd.print("You Rolled!");

    lcd.setCursor(7, 1);
    lcd.print(dice);

    delay(2500);

    // ---------------- READY AGAIN ----------------
    lcd.clear();
    lcd.setCursor(2, 0);
    lcd.print("DIGITAL DICE");

    lcd.setCursor(1, 1);
    lcd.print("Press Button");

    delay(200);
  }
}
