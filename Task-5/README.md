# TASK-5: Intruder Detection Using IR Sensor

## Circuit Diagram:
<img width="377" alt="Circuit Diagram" src="https://github.com/user-attachments/assets/6c766d4c-65ed-44d8-8b0b-a8b40a8989a1" />



## **Overview of Intruder Detection Using IR Sensor and VSDSquadron Mini**

Intruder detection systems are widely used in security applications to monitor unauthorized access to restricted areas. This project utilizes an **Infrared (IR) sensor** and **VSDSquadron Mini**, a small yet powerful FPGA development board, to implement an efficient and real-time intruder detection system.

The system works by detecting movement using an **IR sensor**, which senses infrared radiation emitted by objects, particularly human bodies. When an intruder crosses the sensor’s range, it triggers a signal that is processed by the **VSDSquadron Mini**, which then activates an alert mechanism, such as a buzzer or LED indication. This setup can be further extended to send notifications or trigger alarms for enhanced security.

---

## **Introduction**
Security is a critical concern in both residential and industrial settings. Traditional surveillance systems, like CCTV cameras, often require continuous human monitoring, making them inefficient in terms of cost and manpower. Automated **Intruder Detection Systems** provide a reliable alternative by using **motion sensors and microcontrollers or FPGAs** to detect unauthorized access in real-time.

This project employs an **IR sensor** to detect motion and **VSDSquadron Mini**, an FPGA-based development board, to process signals and control output responses. **FPGAs** offer advantages such as parallel processing, real-time operation, and flexibility in implementing customized security solutions.

The **primary objectives** of this project are:
- To detect unauthorized intrusions using an **IR sensor**.
- To process sensor data efficiently using **VSDSquadron Mini**.
- To trigger an appropriate response, such as an alarm or alert system.
- To explore the **real-time capabilities of FPGA-based security systems**.

This system is highly scalable and can be enhanced with additional features like **wireless communication, multiple sensor integration, and AI-based detection algorithms** for advanced security applications.

## Components Required:

1.	VSD Squadron Mini
2.	IR Sensor
3.	Buzzer
4.	LED
5.	330 ohm Resistor
6.	Jumper wire
7.	Breadboard

## Pin Connections:


| **Component** | **PIN on Board** |
|----------------|------------------|
| LED           | Pin 6             |
| Buzzer           | Pin 5               |
| IR Sensor          | Pin 4             |

## Applications:
 

This project can be applied in various security and automation domains, including:  

#### **1. Home Security Systems**  
- Detects unauthorized entry into homes and alerts homeowners.  
- Can be integrated with smart home systems to send notifications via mobile apps.  

#### **2. Industrial and Commercial Security**  
- Protects warehouses, factories, and office spaces from unauthorized access.  
- Can be used in restricted areas where only authorized personnel are allowed.  

#### **3. Military and Defense Applications**  
- Helps in perimeter security by detecting intrusions in restricted zones.  
- Can be deployed in border security to detect unauthorized movements.  

#### **4. ATM and Bank Security**  
- Detects suspicious movements near ATMs to prevent thefts.  
- Triggers an alarm when unauthorized activity is detected.  

#### **5. Automated Parking and Access Control**  
- Monitors vehicle entry and exit in parking lots.  
- Can be used to trigger gates or barriers automatically.  

#### **6. Smart Surveillance Systems**  
- Enhances traditional CCTV systems by triggering recording only when motion is detected.  
- Reduces storage and energy consumption by activating only when needed.  

#### **7. Agriculture and Wildlife Monitoring**  
- Detects movement of animals in restricted farming areas.  
- Helps in monitoring wildlife movement and preventing poaching.  

#### **8. Hospital and Elderly Care Monitoring**  
- Monitors patient movement in hospitals for safety purposes.  
- Can be used to detect falls or unusual movement patterns in elderly care facilities.  

This project can be further extended with **AI-based intrusion detection, wireless connectivity, and cloud integration** to improve its functionality and reliability.
