# 🚀 C++ Learning Journey

This repository contains my daily practice and mini-projects as I learn and master C++ programming.

---

## 📅 Weekly Progress

| Week | Topic                        | Status        |
|------|------------------------------|---------------|
| 1    | Basics: Syntax, Variables    | [x] Done      |
| 2    | Pointers & Functions         | [ ] Not done  |
| 3    | OOP: Classes & Inheritance   | [ ] Not done  |
| 4    | STL: Vector, Map, etc.       | [ ] Not done  |
| 5    | File I/O and Error Handling  | [ ] Not done  |
| 6    | Advanced Topics + Projects   | [ ] Not done  |


---

## 🧪 Projects

| Project Name         | Description                      | Status        |
|----------------------|----------------------------------|---------------|
| hello.cpp            | Hello world program              | [x] Done      |
| calculator.cpp       | Simple calculator                | [x] Done      |
| student_records.cpp  | Manage student records (OOP)     | [ ] Not done  |
| vector_sort.cpp      | STL sort with vectors            | [ ] Not done  |
| oop_bank.cpp         | OOP-based banking system         | [ ] Not done  |


---

## 📌 Notes

- This repo is meant to track my learning progress and practice projects.
- I'll keep updating this README as I complete each topic and project.

---


---

✅ Must-Have (Core C++ for Embedded/Robotics)

These will directly strengthen your ability to write firmware, drivers, and robotics control code:

Basics (Ch 1–10) → variables, control flow, arrays, functions, references, pointers

Classes & OOP (Ch 11–15) → constructors/destructors, encapsulation, composition, static members

Memory management (Ch 16, 17, 22 partly)

Dynamic arrays (useful if no STL)

Smart pointers (only when you use modern C++, e.g., ROS2)

Manual memory management (important in microcontrollers)


Functions & Lambdas (Ch 20) → for callbacks, ISR simulation, robotics control logic

Object relationships (Ch 23) → composition, aggregation → modeling sensors/motors

Inheritance & Virtual Functions (Ch 24, 25) → for polymorphic drivers (e.g., generic Sensor class, specific IMU class)

Templates (Ch 26 basics) → class templates, function templates for reusable code (e.g., PID with different numeric types)

Exceptions (Ch 27 basics only) → but note: most embedded systems avoid exceptions because of overhead. Just understand them.



---

⚠️ Nice-to-Have (Use selectively in embedded/robotics)

Operator Overloading (Ch 21) → handy for robotics math (vectors, matrices, quaternions). Don’t go overboard with exotic overloads.

Move semantics (Ch 22) → more useful on PCs/ROS than bare-metal MCUs.

Smart pointers (Ch 22.5–22.7) → important in robotics software frameworks like ROS2, but not needed in Arduino/bare-metal.

I/O streams (Ch 28 basics) → useful for PC-side robotics simulation/logging, but on MCUs you’ll often just use printf or direct serial.



---

❌ Can Be Skipped (for now)

Deep dive into std::vector<bool> weirdness (16.12)

Full I/O streams internals (28.2–28.7) — unless you do PC/ROS logging

Ellipsis (…) in functions (20.5)

Overloading typecasts, assignment operator (21.11–21.12 advanced)

Exception specifications (noexcept, 27.9–27.10) → advanced C++ features, not critical for robotics



---

🛠 After C++: Embedded & Robotics Path

Once you’re solid with the above, move to embedded-specific tools:

1. Arduino programming (C++ subset) – practice with sensors, motors, PWM, serial comms.


2. Bare-metal C++ (AVR, STM32, ESP32) – learn registers, interrupts, memory constraints.


3. Real-Time Operating Systems (RTOS) – FreeRTOS, scheduling tasks for robotics.


4. Robotics frameworks – ROS2 (uses modern C++ with smart pointers, templates, etc.).


5. Math for robotics – implement vector/matrix classes, PID controllers, sensor fusion.




---

👉 Based on your current progress (you’re deep in classes & approaching advanced topics), I’d say:

Yes, continue until Inheritance, Virtual functions, and Templates (Ch 24–26).

Then pause the super advanced C++ stuff, and start Arduino + small robotics projects in parallel.







---

📍 Stop Point in LearnCpp

Go up to Chapter 26 (Templates), but only the core parts:

✅ Ch 1–15 (Basics, Classes, Constructors/Destructors, Static members, Friend functions)

✅ Ch 16 (std::vector basics) → enough to know dynamic arrays (important if you ever move to ROS2/Linux robotics).

✅ Ch 17 (Dynamic memory basics) → new/delete, allocation.

✅ Ch 20 (Functions & Lambdas basics) → for callbacks, robotics control logic.

✅ Ch 22 (Smart pointers basics) → just to understand; use later in ROS2, not Arduino.

✅ Ch 23 (Object relationships) → modeling sensors, actuators.

✅ Ch 24–25 (Inheritance, Virtual functions) → for polymorphic drivers (generic Sensor → specific IMU, Encoder, etc.).

✅ Ch 26 (Templates basics) → function/class templates.



---

🚦 Skip or Skim

❌ Advanced Operator overloading tricks (21.11+)

❌ Move semantics deep dive (22.3+) → just know what it is.

❌ Advanced Exception handling (27.6+)

❌ I/O streams deep internals (28.3+)

❌ Weird corner cases like std::vector<bool>



---

🛠 After That

1. Switch focus → Arduino programming (C++ subset)

Digital/analog I/O, PWM, timers

Using libraries for sensors/motors

Serial communication (UART, I2C, SPI)



2. Do small robotics projects

LED + button (I/O basics)

Ultrasonic sensor + motor (simple obstacle avoider)

Line-following robot

PID control for motor speed



3. Then go deeper → STM32/ESP32 + FreeRTOS (multi-tasking for robotics).




---

👉 So in short:
Finish LearnCpp up to Ch 26 (Templates basics) → then stop.
From there, start Arduino + Embedded projects, while slowly revisiting advanced C++ if needed for robotics software (ROS2, simulations).


