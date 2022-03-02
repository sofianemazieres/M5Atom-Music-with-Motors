#include "M5Atom.h"
#include <Arduino.h>
#include "BluetoothSerial.h"

const int IN1_PIN = 19;
const int IN2_PIN = 23;
int freq[] = {80, 90, 100};
int freqstate = 0;
int ledChannel1 = 1;
int ledChannel2 = 2;
int resolution = 10;
int VIN_PIN = 33;
int FAULT_PIN = 22;

void setup() {
  M5.begin(true, false, true);
  setupchannels(0);
  //alsosprachtzarathustra();
  happybirthday();
}

void loop() {
  if (M5.Btn.wasPressed()) {
    ledcWrite(ledChannel1, 0);
    ledcWrite(ledChannel2, 0);
  }
  M5.update();
  //delay(100);
}


void happybirthday() {
  ledcSetup(ledChannel1, 392, resolution);
  ledcWrite(ledChannel1, 20);
  delay(200);
  ledcWrite(ledChannel1, 0);
  delay(50);
  ledcSetup(ledChannel1, 392, resolution);
  ledcWrite(ledChannel1, 20);
  delay(250);
  ledcSetup(ledChannel1, 440, resolution);
  ledcWrite(ledChannel1, 20);
  ledcSetup(ledChannel2, 130.82, resolution);
  ledcWrite(ledChannel2, 20);
  delay(500);
  ledcSetup(ledChannel1, 392, resolution);
  ledcWrite(ledChannel1, 20);
  delay(500);
  ledcWrite(ledChannel2, 0);
  ledcSetup(ledChannel1, 523.28, resolution);
  ledcWrite(ledChannel1, 20);
  delay(500);
  ledcSetup(ledChannel1, 493.92, resolution);
  ledcWrite(ledChannel1, 20);
  ledcSetup(ledChannel2, 146.84, resolution);
  ledcWrite(ledChannel2, 20);
  delay(1000);

  ledcWrite(ledChannel2, 0);
  ledcSetup(ledChannel1, 392, resolution);
  ledcWrite(ledChannel1, 20);
  delay(200);
  ledcWrite(ledChannel1, 0);
  delay(50);
  ledcSetup(ledChannel1, 392, resolution);
  ledcWrite(ledChannel1, 20);
  delay(250);
  ledcSetup(ledChannel1, 440, resolution);
  ledcWrite(ledChannel1, 20);
  ledcSetup(ledChannel2, 123.5, resolution);
  ledcWrite(ledChannel2, 20);
  delay(500);
  ledcSetup(ledChannel1, 392, resolution);
  ledcWrite(ledChannel1, 20);
  delay(500);
  ledcWrite(ledChannel2, 0);
  ledcSetup(ledChannel1, 587.36, resolution);
  ledcWrite(ledChannel1, 20);
  delay(500);
  ledcSetup(ledChannel1, 523.28, resolution);
  ledcWrite(ledChannel1, 20);
  ledcSetup(ledChannel2, 130.82, resolution);
  ledcWrite(ledChannel2, 20);
  delay(1000);

  ledcWrite(ledChannel2, 0);
  ledcSetup(ledChannel1, 392, resolution);
  ledcWrite(ledChannel1, 20);
  delay(200);
  ledcWrite(ledChannel1, 0);
  delay(50);
  ledcSetup(ledChannel1, 392, resolution);
  ledcWrite(ledChannel1, 20);
  delay(250);
  ledcSetup(ledChannel1, 784, resolution);
  ledcWrite(ledChannel1, 20);
  ledcSetup(ledChannel2, 196, resolution);
  ledcWrite(ledChannel2, 20);
  delay(500);
  ledcSetup(ledChannel1, 659.28, resolution);
  ledcWrite(ledChannel1, 20);
  delay(500);
  ledcWrite(ledChannel2, 0);
  ledcSetup(ledChannel1, 523.28, resolution);
  ledcWrite(ledChannel1, 20);
  delay(500);
  ledcSetup(ledChannel1, 493.92, resolution);
  ledcWrite(ledChannel1, 20);
  ledcSetup(ledChannel2, 174.6, resolution);
  ledcWrite(ledChannel2, 20);
  delay(500);
  ledcSetup(ledChannel1, 440, resolution);
  ledcWrite(ledChannel1, 20);
  delay(500);

  ledcWrite(ledChannel2, 0);
  ledcSetup(ledChannel1, 698.48, resolution);
  ledcWrite(ledChannel1, 20);
  delay(200);
  ledcWrite(ledChannel1, 0);
  delay(50);
  ledcSetup(ledChannel1, 698.48, resolution);
  ledcWrite(ledChannel1, 20);
  delay(250);
  ledcSetup(ledChannel1, 659.28, resolution);
  ledcWrite(ledChannel1, 20);
  ledcSetup(ledChannel2, 196, resolution);
  ledcWrite(ledChannel2, 20);
  delay(500);
  ledcSetup(ledChannel1, 523.28, resolution);
  ledcWrite(ledChannel1, 20);
  delay(500);
  ledcSetup(ledChannel1, 587.36, resolution);
  ledcWrite(ledChannel1, 20);
  ledcSetup(ledChannel2, 146.84, resolution);
  ledcWrite(ledChannel2, 20);
  delay(500);
  ledcSetup(ledChannel1, 523.28, resolution);
  ledcWrite(ledChannel1, 20);
  ledcSetup(ledChannel2, 130.82, resolution);
  ledcWrite(ledChannel2, 20);
  delay(500);
}

void alsosprachtzarathustra() {
  ledcSetup(ledChannel1, 349.24, resolution);
  ledcWrite(ledChannel1, 20);
  delay(1500);
  ledcSetup(ledChannel1, 523.28, resolution);
  ledcWrite(ledChannel1, 20);
  delay(1500);
  ledcSetup(ledChannel1, 698.48, resolution);
  ledcWrite(ledChannel1, 20);
  delay(2800);
  ledcWrite(ledChannel1, 0);
  delay(100);
  ledcSetup(ledChannel1, 830.64, resolution);
  ledcWrite(ledChannel1, 20);
  delay(400);
  ledcSetup(ledChannel1, 880, resolution);
  ledcWrite(ledChannel1, 20);
  delay(2000);
  ledcWrite(ledChannel1, 0);
}


void setupchannels(int arrayCursor) {
  if (freq[arrayCursor]) {
    ledcAttachPin(IN1_PIN, ledChannel1);
    ledcAttachPin(IN2_PIN, ledChannel2);
    //ledcAttachPin(VIN_PIN, 2);
    //ledcAttachPin(FAULT_PIN, 3);
    //ledcSetup(ledChannel1, freq[arrayCursor], resolution);
    //ledcSetup(ledChannel2, freq[arrayCursor], resolution);
    pinMode(VIN_PIN,INPUT);
    pinMode(FAULT_PIN,INPUT);
  }
}
