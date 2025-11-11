# 🚀 ESP32 MQTT Communication

This project demonstrates **wireless communication between two ESP32 IoT devices** using the **MQTT (Message Queuing Telemetry Transport)** protocol.  
✅ *Completed on November 4, 2025*

---

## 🎯 Objective
To establish **real-time wireless communication** where:
- One ESP32 acts as a **Publisher** that sends data.
- Another ESP32 acts as a **Subscriber** that receives that data.  
Both devices communicate via a **public MQTT broker**.

---

## 🧩 Materials Required
| Component | Quantity | Description |
|------------|-----------|-------------|
| ESP32 Development Board | 2 | For Publisher & Subscriber |
| USB Cable | 2 | For power and uploading code |
| Computer | 1 | With Arduino IDE installed |
| Wi-Fi Network | 1 | SSID & Password required |
| MQTT Broker | 1 | e.g., `broker.hivemq.com` |
| PubSubClient Library | - | Arduino library for MQTT communication |

---

## 📚 Theory
**MQTT** (Message Queuing Telemetry Transport) is a lightweight messaging protocol designed for **low-bandwidth and high-latency networks**, making it ideal for IoT.

### 🔁 How it Works
1. **Publisher** sends data to a *topic* hosted on an MQTT broker.
2. **Broker** acts as a middleman to route messages.
3. **Subscriber** listens to the same topic to receive messages.

**Example Flow:**


Publisher (ESP32 #1) → MQTT Broker → Subscriber (ESP32 #2)


---

## 🧠 Folder Structure

```
ESP32-MQTT-Communication/
│
├── publisher.ino           # Code for Publisher ESP32
├── subscriber.ino          # Code for Subscriber ESP32
│
├── setup_images/           # Circuit setup and connections
├── output_images/          # Serial Monitor output screenshots
│
└── README.md               # Project documentation
```

---

## 💻 Code Overview
- **`publisher.ino`** → Connects to Wi-Fi & MQTT broker, then publishes messages periodically.  
- **`subscriber.ino`** → Subscribes to a topic and displays received messages in the Serial Monitor.

---

## ⚙️ Setup Instructions
1. **Install Dependencies**
   - In Arduino IDE → Go to **Tools > Board > Board Manager**, install **ESP32 package**.
   - Go to **Sketch > Include Library > Manage Libraries**, and install **PubSubClient**.

2. **Configure Wi-Fi & MQTT**
   - Update `ssid`, `password`, and `mqtt_server` in both `.ino` files.

3. **Upload Code**
   - Upload `publisher.ino` to **Device A**.
   - Upload `subscriber.ino` to **Device B**.

4. **Run & Monitor**
   - Open **Serial Monitor (115200 baud)** on both devices.
   - Observe real-time message exchange between ESP32s.

---

## 🧾 Example Output
**Publisher Output:**

Connecting to WiFi...
Connected!
Connected to MQTT broker.
Message sent: Hello from Publisher (count: 1)



**Subscriber Output:**

Connecting to WiFi...
Connected!
Connected to MQTT broker.
Message received: Hello from Publisher (count: 1)




## 📷 Visual Setup
📁 `output_images/` → Communication proof via Serial Monitor

---

## ✅ Conclusion
This experiment **successfully demonstrated MQTT-based wireless communication** between two ESP32 devices.  
It highlights MQTT’s **efficiency, reliability, and low latency**, making it a perfect fit for **IoT applications** like smart homes, remote monitoring, and sensor networks.

---

## 👩‍💻 Author
**Sumera Sameer Shaikh**  
📧 [sumera.shaikh@example.com]  
🌐 GitHub: [@Sumera01](https://github.com/Sumera01)  
🏫 Department of Computer Science and Engineering

---

## ⭐ Future Enhancements
- Integrate **sensor data (e.g., DHT11/LM35)** with MQTT.
- Create a **dashboard** for real-time data visualization.
- Implement **secure MQTT (TLS/SSL)** connections.

---

## 🏷️ License
This project is open-sourced under the **MIT License**.  
Feel free to use, modify, and share it for learning and research purposes.
