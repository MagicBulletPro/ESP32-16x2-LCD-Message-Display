# ESP32 LCD Message Display

A simple project to display messages on a 16x2 LCD using an ESP32 and the LiquidCrystal_I2C library. This project demonstrates how to initialize and use an I2C-connected LCD with PlatformIO and VSCode.

## Requirements

- ESP32 development board
- 16x2 I2C LCD
- Visual Studio Code with PlatformIO extension

## Installation

1. Clone this repository:
    ```sh
    git clone https://github.com/MagicBulletPro/ESP32-16x2-LCD-Message-Display.git
    ```
2. Open the cloned folder in Visual Studio Code.
3. Ensure you have the PlatformIO extension installed in Visual Studio Code.

## Usage

1. Connect your I2C LCD to the ESP32.
2. Open the `src/main.cpp` file in Visual Studio Code.
3. Connect your ESP32 board to your computer.
4. Build and upload the project using PlatformIO:
    - Click the check mark (✓) icon on the bottom bar to build the project.
    - Click the right arrow (→) icon on the bottom bar to upload the project to the ESP32.
5. Open the Serial Monitor in PlatformIO (set the baud rate to 115200) to view any debug output.
    - Click the plug icon on the bottom bar to open the Serial Monitor.

## Code Overview

```cpp
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
```

### License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

### Acknowledgements

- [Arduino](https://www.arduino.cc/)
- [Espressif Systems](https://www.espressif.com/)

### Contact

For any inquiries, please contact [magicbulletsoft@gmail.com](mailto:magicbulletsoft@gmail.com).
