<p align="center">
  <img src="https://github.com/shanuz123/continuos-calculator-c/blob/main/banner.png" alt="Continuous Calculator in C" width="800">
</p>

<h1 align="center">🧮 Continuous Calculator in C</h1>

<p align="center">
  <em>A simple yet powerful continuous calculator built in C that performs multiple operations efficiently.</em>
</p>

## 📘 Overview  
The **Continuous Calculator** is a simple yet powerful calculator program built in **C language**.  
It performs continuous arithmetic operations just like a real calculator — allowing you to chain multiple calculations without restarting the program.  

This project was created as part of my C programming learning journey and demonstrates my understanding of fundamental concepts such as conditionals, loops, and functions in C.

---

## ⚙️ Features  
✅ Perform **Addition, Subtraction, Multiplication, and Division**  
✅ Supports **continuous operations** (like `1 + 2 = 3`, then `+ 5 = 8`, `* 8 = 64`, etc.)  
✅ Displays **initial “0”** like a real calculator  
✅ Includes **clear/reset** functionality to start fresh  
✅ Clean and **beginner-friendly** C code  

---

## 🧠 Learning Objectives  
This project helped me strengthen my knowledge of:
- Function declaration and definition  
- Control flow using `switch-case`  
- Using loops for continuous operation  
- Modular programming and clean code structure  

---

## 🧩 Code Example  
```c
#include <stdio.h>

int main() {
    double result = 0, num;
    char operator;
    printf("Calculator started! Current value: 0\n");

    while (1) {
        printf("Enter operator (+, -, *, /, c to clear, q to quit): ");
        scanf(" %c", &operator);

        if (operator == 'q') break;
        if (operator == 'c') {
            result = 0;
            printf("Calculator cleared! Current value: %.2lf\n", result);
            continue;
        }

        printf("Enter number: ");
        scanf("%lf", &num);

        switch (operator) {
            case '+': result += num; break;
            case '-': result -= num; break;
            case '*': result *= num; break;
            case '/': 
                if (num != 0) result /= num;
                else printf("Error: Division by zero!\n");
                break;
            default: printf("Invalid operator!\n");
        }

        printf("Current result: %.2lf\n", result);
    }

    printf("Calculator closed.\n");
    return 0;
}
```

🖥️ Usage

1. Compile the program:
```
gcc calculator.c -o calculator
```

3. Run it:
```
./calculator
```

5. Enter numbers and operations continuously.
```
Example:
+ 5
* 2
- 3
/ 4
```
📂 Project Structure
```
continuous-calculator-c/
│
├── calculator.c       # Main source code
└── README.md          # Project documentation
```

🧑‍💻 About the Developer

Hi 👋, I’m Shanavas Shafi (Shanu) — a passionate learner exploring programming and cybersecurity.
This calculator is one of my first projects in C programming, built completely from scratch using only a mobile environment (Termux).

I believe in learning by building 💪 — every line of this code represents progress in my developer journey.

🌟 Future Improvements

-Add percentage, square root, and power functions

-Create a simple UI version using C graphics or a web interface

-Add error handling for invalid inputs

📜 License

This project is open-source and free to use under the MIT License.

💬 Connect with Me

🌐 LinkedIn https://www.linkedin.com/in/shanavasshafi-cyber

🐙 GitHub   https://github.com/shanuz123

> 🚀 “Learning never stops — every small project builds the foundation for something bigger.”
