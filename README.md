# Arduino Uno Robotic Car with Obstacle Avoidance

This project demonstrates a simple autonomous robotic car using the Arduino Uno, L298N motor driver, and HC-SR04 ultrasonic sensor. The car moves forward and automatically avoids obstacles by turning when it detects an object in its path.

## Features

- Moves forward by default
- Detects obstacles using an ultrasonic sensor
- Automatically stops and turns to avoid collisions
- Simple and beginner-friendly setup

## Hardware Components

- Arduino Uno
- L298N Motor Driver Module
- 2 DC Motors with wheels
- HC-SR04 Ultrasonic Distance Sensor
- 9V Battery or external power supply
- Jumper wires and mini breadboard (optional)
- Chassis (any basic 2-wheel frame)

## Pin Connections

| Component     | Arduino Pin |
|---------------|-------------|
| ENA           | 10          |
| IN1           | 9           |
| IN2           | 8           |
| IN3           | 7           |
| IN4           | 6           |
| Ultrasonic Trig | 3         |
| Ultrasonic Echo | 2         |

## Getting Started

1. Clone or download this repository.
2. Open `robot_car.ino` in the Arduino IDE.
3. Select your board as "Arduino Uno".
4. Connect the Arduino to your PC via USB.
5. Upload the code.
6. Power the car and watch it drive and avoid obstacles.

## How It Works

The ultrasonic sensor measures the distance to any object in front of the car. If the distance is less than 20 cm, the car stops, turns right for a short duration, and then continues forward.

## License

This project is open-source and free to use under the MIT License.
