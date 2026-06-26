#include <Servo.h>

// Servo
Servo emergencyDoor;

// Pin Definitions
const int pirPin = 8;
const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 11;
const int buttonPin = 12;

const int gasPin = A0;
const int lm35Pin = A1;
const int ldrPin = A2;

void setup()
{
  Serial.begin(9600);

  pinMode(pirPin, INPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buttonPin, INPUT_PULLUP);

  emergencyDoor.attach(servoPin);
  emergencyDoor.write(0);

  Serial.println("=================================");
  Serial.println("INDUSTRIAL SAFETY SYSTEM");
  Serial.println("SYSTEM STARTED");
  Serial.println("=================================");
}

void loop()
{
  // LM35
  int lm35Value = analogRead(lm35Pin);
  float temperature = (lm35Value * 5.0 * 100.0) / 1024.0;

  // MQ2
  int gasValue = analogRead(gasPin);

  // LDR
  int ldrValue = analogRead(ldrPin);

  // PIR
  int motion = digitalRead(pirPin);

  // Ultrasonic
  long duration;
  int distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0)
    distance = 999;
  else
    distance = duration * 0.034 / 2;

  // Reset Button
  if (digitalRead(buttonPin) == LOW)
  {
    emergencyDoor.write(0);

    Serial.println("SYSTEM RESET");
    delay(1000);
  }

  // Gas Alert
  if (gasValue > 350)
  {
    emergencyDoor.write(90);

    Serial.println("***** ALERT *****");
    Serial.println("GAS LEAKAGE DETECTED!");
    Serial.println("EMERGENCY DOOR OPEN");
    Serial.println("*****************");
  }

  // Motion Alert
  if (motion == HIGH)
  {
    Serial.println("MOTION DETECTED!");
  }

  // Low Light Alert
  if (ldrValue < 300)
  {
    Serial.println("LOW LIGHT CONDITION");
  }

  // Normal Monitoring
    Serial.println("--------------------------------");

    Serial.print("Temperature : ");
    Serial.print(temperature);
    Serial.println(" C");

    Serial.print("Gas Value   : ");
    Serial.println(gasValue);

    Serial.print("LDR Value   : ");
    Serial.println(ldrValue);

    Serial.print("Distance    : ");
    Serial.print(distance);
    Serial.println(" cm");

    Serial.print("Motion      : ");
    Serial.println(motion);

    Serial.println("--------------------------------");


  delay(1500);
}