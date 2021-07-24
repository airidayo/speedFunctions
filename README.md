# speedFunctions
Speed up functions for Arduino UNO

Arduino 用の高速化ライブラリです。
主に digitalWrite を、簡単に高速化できるようにしました。
Bポート、Dポートなどと意識せず、Arduino のピン番号を指定するだけで高速 I/O ができます。

ただし、check がうまく動かないようです。
通常の digitalRead を使用してください。

詳しい使い方については、同梱されているサンプルスケッチを参照してください。

このライブラリは、ポートを直接操作しているため、ATMEGA328 以外のマイコンを搭載しているもの（UNO 等以外）では動作しません。
ESP8266 や ESP32 等、クロックの速いマイコンでは、通常の digitalWrite で十分な速度が得られます。
