#include <LiquidCrystal_I2C.h>

// Set the number of columns and rows for the LCD
int lcdColumns = 16;
int lcdRows = 2;

// Create an LCD object with the I2C address, columns, and rows
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

void setup() {
  lcd.init(); // Initialize the LCD
  lcd.backlight(); // Turn on the LCD backlight
}

void loop() {
  lcd.setCursor(0, 0); // Set the cursor to the first column, first row
  lcd.print("Magic-Bullet"); // Print message on the first row
  delay(1000); // Wait for 1 second

  lcd.clear(); // Clear the display

  lcd.setCursor(0, 1); // Set the cursor to the first column, second row
  lcd.print("Hello, World!"); // Print message on the second row
  delay(1000); // Wait for 1 second

  lcd.clear(); // Clear the display
}
