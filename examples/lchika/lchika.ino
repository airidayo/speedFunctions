// 高速化ライブラリ speedFunctions を用いたLチカ。

#include <speedFunctions.h>
fast L = fast();

void setup() {
    L.output(13);   // 13番ピンを OUTPUT に設定。
}

void loop() {
    L.high(13); // 13番ピンを HIGH に。
    delay(500);
    L.low(13);
    delay(500); // 13番ピンを LOW に。
}