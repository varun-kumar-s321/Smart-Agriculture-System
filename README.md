# 🌱 Smart Agriculture System using C

## 📌 Description
The Smart Agriculture System using C is a console-based application that simulates an automatic irrigation system.
It monitors soil moisture, temperature, humidity, Total Dissolved Solids (TDS), and turbidity to control irrigation
using threshold-based decision logic.

The irrigation pump is turned ON only when the soil is dry and water quality parameters are within safe limits.
If the soil moisture is sufficient or water quality is unsafe, the pump is automatically turned OFF.

---

## 🎯 Objectives
- Automate irrigation based on soil moisture
- Ensure safe irrigation using water quality checks
- Reduce water wastage
- Demonstrate real-world agriculture automation using C

---

## ⚙️ System Logic
- Pump turns **ON** when:
  - Soil moisture < 40%
  - TDS < 500 ppm
  - Turbidity < 25 NTU
- Pump turns **OFF** otherwise

---

## 🧠 Algorithm
1. Start the program  
2. Read soil moisture value  
3. Read temperature and humidity  
4. Read TDS and turbidity values  
5. Compare sensor values with thresholds  
6. Turn pump ON or OFF  
7. Display system status  
8. Repeat continuously  

---

## 💻 Source Code
- Language: **C**
- File: `smart_agriculture.c`

---

## 📊 Sample Output

### Case 1: Irrigation Stopped
**Soil Moisture : 50 %
TDS : 600 ppm
Turbidity : 26 NTU
Pump Status : OFF (Irrigation Stopped)**

---
### Case 2: Irrigation Started
**Soil Moisture : 35 %
TDS : 410 ppm
Turbidity : 22 NTU
Pump Status : ON (Irrigation Started)**

The following screenshot shows the working of the Smart Agriculture System.
The pump turns ON or OFF based on soil moisture and water quality conditions.

![Smart Agriculture System Output](output.png)

## 🛠 Technologies Used
- C Programming Language
- Conditional Statements
- Loops
- Automation Logic

---

## 🌾 Applications
- Smart farming
- Automatic irrigation systems
- Precision agriculture
- Water resource management

---

## 🚀 Future Enhancements
- Sensor interfacing using microcontrollers
- IoT-based cloud monitoring
- Mobile application control
- ESP32 / Arduino hardware implementation

---

## 🎓 Academic & Interview Relevance
- Suitable for ECE / CSE students
- Demonstrates automation and control logic
- Easy to extend to embedded and IoT systems

---

## 👨‍💻 Author
Developed as an academic and learning project using C programming.

