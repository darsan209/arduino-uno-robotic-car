#define ENA 10
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define ENB 5

#define trigPin 3
#define echoPin 2

long duration
int distance

void setup() {
  pinMode(ENA, OUTPUT)
  pinMode(IN1, OUTPUT)
  pinMode(IN2, OUTPUT)
  pinMode(IN3, OUTPUT)
  pinMode(IN4, OUTPUT)
  pinMode(ENB, OUTPUT)

  pinMode(trigPin, OUTPUT)
  pinMode(echoPin, INPUT)

  Serial.begin(9600)
}

void loop() {
  digitalWrite(trigPin, LOW)
  delayMicroseconds(2)
  digitalWrite(trigPin, HIGH)
  delayMicroseconds(10)
  digitalWrite(trigPin, LOW)

  duration = pulseIn(echoPin, HIGH)
  distance = duration * 0.034 / 2

  Serial.print("Distance: ")
  Serial.println(distance)

  if (distance < 20) {
    stopCar()
    delay(200)
    turnRight()
    delay(400)
    stopCar()
    delay(200)
  } else {
    moveForward()
  }
}

void moveForward() {
  digitalWrite(IN1, HIGH)
  digitalWrite(IN2, LOW)
  digitalWrite(IN3, HIGH)
  digitalWrite(IN4, LOW)
  analogWrite(ENA, 200)
  analogWrite(ENB, 200)
}

void turnRight() {
  digitalWrite(IN1, LOW)
  digitalWrite(IN2, HIGH)
  digitalWrite(IN3, HIGH)
  digitalWrite(IN4, LOW)
  analogWrite(ENA, 180)
  analogWrite(ENB, 180)
}

void stopCar() {
  digitalWrite(IN1, LOW)
  digitalWrite(IN2, LOW)
  digitalWrite(IN3, LOW)
  digitalWrite(IN4, LOW)
}
