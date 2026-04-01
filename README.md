 Advanced C++ Command-Line Calculator

A robust, interactive C++ console application that performs basic arithmetic and advanced mathematical operations. This project demonstrates key C++ concepts such as **modular programming with header files**, **loop control logic**, and the use of the **cmath library**.

---

##  Features

### 1. Basic Arithmetic
Standard operations for quick calculations:
* **Addition** (`+`)
* **Subtraction** (`-`)
* **Multiplication** (`*`)
* **Division** (`/`) — *Includes zero-check validation.*

### 2. Advanced Math Functions (`m`)
Access a secondary menu of scientific operations:
* `sqrt`  : Square Root
* `cbrt`  : Cube Root
* `abs`   : Absolute Value
* `pow`   : Power (Base^Exponent)
* `round` : Nearest Integer Rounding
* `hypot` : Hypotenuse Calculation ($\sqrt{x^2 + y^2}$)

### 3. Integrated Documentation (`d`)
A dedicated documentation viewer built into the app to help users remember command names without leaving the program.

### 4. Navigation Logic
* **Looping Menu:** Perform multiple calculations without restarting.
* **Back Command:** Use `b` within sub-menus to return to the main operator selection.
* **Quit:** Gracefully exit the application using `q`.

---

## 🛠️ Project Structure

* **`main.cpp`**: Contains the primary execution loop and input handling logic.
* **`documentation.h`**: A custom header file containing the `showDocumentation()` function, utilizing `inline` to prevent ODR violations.

---

## 💻 How to Run

### Prerequisites
* A C++ compiler (GCC, Clang, or MSVC).

### Compilation
Open your terminal in the project directory and run:
```bash
g++ main.cpp -o calculator
