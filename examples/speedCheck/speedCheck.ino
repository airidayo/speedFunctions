// ========== speedCheck.ino ==========
// 通常の関数と、speed-functionsライブラリの速度を比較します。
// 9600bpsでシリアルモニタを開いてください。

#include <speedFunctions.h>
fast function = fast();

void setup() {
  unsigned long TIME0, TIME1, TIME2;
  
  Serial.begin(9600);

  // pinMode(INPUT)比較
  TIME0 = micros();
  pinMode(11, INPUT);
  TIME1 = micros();
  function.input(11);
  TIME2 = micros();
  Serial.println("pinMode(INPUT)       :" + String(TIME1-TIME0) + "us");
  Serial.println("input                :" + String(TIME2-TIME1) + "us");
  Serial.println();

  // pinMode(INPUT_PULLUP)比較
  TIME0 = micros();
  pinMode(12, INPUT_PULLUP);
  TIME1 = micros();
  function.pullup(12);
  TIME2 = micros();
  Serial.println("pinMode(INPUT_PULLUP):" + String(TIME1-TIME0) + "us");
  Serial.println("pullup               :" + String(TIME2-TIME1) + "us");
  Serial.println();

  // pinMode(OUTPUT)比較
  TIME0 = micros();
  pinMode(13, OUTPUT);
  TIME1 = micros();
  function.output(13);
  TIME2 = micros();
  Serial.println("pinMode(OUTPUT)      :" + String(TIME1-TIME0) + "us");
  Serial.println("output               :" + String(TIME2-TIME1) + "us");
  Serial.println();

  // digitalWrite（HIGH）比較
  TIME0 = micros();
  digitalWrite(13, HIGH);
  TIME1 = micros();
  function.high(13);
  TIME2 = micros();
  Serial.println("digitalWrite(HIGH)   :" + String(TIME1-TIME0) + "us");
  Serial.println("high                 :" + String(TIME2-TIME1) + "us");
  Serial.println();

  // digitalWrite（LOW）比較
  TIME0 = micros();
  digitalWrite(13, LOW);
  TIME1 = micros();
  function.low(13);
  TIME2 = micros();
  Serial.println("digitalWrite(LOW)    :" + String(TIME1-TIME0) + "us");
  Serial.println("low                  :" + String(TIME2-TIME1) + "us");
  Serial.println();

  // digitalRead 比較
  boolean temp;
  TIME0 = micros();
  temp = digitalRead(12);
  TIME1 = micros();
  temp = function.check(12);
  TIME2 = micros();
  Serial.println("digitalRead          :" + String(TIME1-TIME0) + "us");
  Serial.println("check                :" + String(TIME2-TIME1) + "us");
  Serial.println();
}

void loop(){}