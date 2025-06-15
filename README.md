# 🔐 Password Checker (C++)

A simple terminal-based **Password Checker** written in C++ to validate a user's password length with visual delays for a more interactive experience.

---

## 📋 Features

- Prompts user for a **username** and **password**
- Introduces a short delay for a more natural feel
- Checks if the password length is:
  - ✅ **Valid** (8 to 16 characters)
  - ❌ **Too short** (less than 8)
  - ❌ **Too long** (more than 16)
- Displays appropriate feedback messages

---

## 📺 Sample Output

```text
______________________________
-------Password_Checker-------
______________________________
Enter your username: Mohamed
Enter your password(must be 8-16 digits): ********
Welcome Back sir Mohamed

---

## 🛠️ How to Run

1. Save the code as password_checker.cpp


2. Compile using g++:
```bash
g++ password_checker.cpp -o checker

3. Run it
```bash
./checker
```

---

## 📦 Requirements

C++ compiler (e.g., g++)

Terminal/console access