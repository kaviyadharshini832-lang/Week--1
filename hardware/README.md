# 🔧 Hardware Design - Smart Seed Suggestion System

This folder contains all the **hardware-related resources** for the project.  
The hardware mainly involves **STM32 microcontroller**, **sensors**, and **circuit simulations**.

---

## 📌 Components Used
- **STM32 (Cortex-M series)** – main controller  
- **Soil pH Sensor** – to measure soil acidity/alkalinity  
- **Soil Moisture Sensor** – to check water content  
- **DHT11/DHT22** – for temperature & humidity  
- **Rain Sensor** – for rainfall detection  
- **LCD / OLED Display** – to show results locally  
- **WiFi / LoRa module** – to send data to cloud (optional)

---

## 🖥 Development Tools
- **Keil uVision IDE** – to write and debug STM32 code  
- **Proteus** – for circuit simulation & testing  
- **ST-Link** – for programming & debugging hardware  

---

## 📂 Files to be added here
- `main.c` → Firmware code for STM32  
- `sensors.c / sensors.h` → Drivers for sensors  
- `schematic.png` → Circuit diagram  
- `simulation.dsn` → Proteus simulation file  

---

## ⚡ Workflow
1. Sensors collect **soil, weather, and water data**.  
2. STM32 processes the data and sends it to the **AI/ML model**.  
3. Display results on LCD or transmit to cloud for prediction.  

---

✅ This folder will grow as we add **code and circuit designs**.
